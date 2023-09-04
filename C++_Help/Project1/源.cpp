#include <graphics.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define ROWS 10
#define COLS 10
#define BLOCK_SIZE 60
#define WIDTH (COLS * BLOCK_SIZE)
#define HEIGHT (ROWS * BLOCK_SIZE)

int map[ROWS][COLS];
bool visited[ROWS][COLS];
void initGame()
{
    initgraph(WIDTH, HEIGHT);
    setbkcolor(WHITE);
    cleardevice();
    srand(time(0));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            map[i][j] = rand() % 5 + 1;

        }
    }
}
void drawGame() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int x = j * BLOCK_SIZE;
            int y = i * BLOCK_SIZE;
            if (map[i][j] != 0) {
                switch (map[i][j]) {
                case 1:
                    setfillcolor(RED);
                    break;
                case 2:
                    setfillcolor(YELLOW);
                    break;
                case 3:
                    setfillcolor(BLUE);
                    break;
                case 4:
                    setfillcolor(GREEN);
                    break;
                case 5:
                    setfillcolor(CYAN);
                    break;
                default:
                    setfillcolor(BLACK);
                    break;
                }

                fillrectangle(x, y, x + BLOCK_SIZE - 1, y + BLOCK_SIZE - 1);

                // 在方块中心显示数字
                TCHAR num[2];
                _stprintf(num, _T("%d"), map[i][j]);
                settextcolor(WHITE);
                setbkmode(TRANSPARENT);
                outtextxy(x + BLOCK_SIZE / 2 - 10, y + BLOCK_SIZE / 2 - 10, num);
            }
            else {
                setfillcolor(BLACK);
                fillrectangle(x, y, x + BLOCK_SIZE - 1, y + BLOCK_SIZE - 1);
            }
        }
    }
}

typedef struct {
    int x, y;
} Point;

int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

bool is_valid(int x, int y) {
    return x >= 0 && x < ROWS&& y >= 0 && y < COLS;
}

bool dfs(Point cur, Point dest, int turn) {
    if (turn > 2) {
        return false;
    }

    for (int i = 0; i < 4; i++) {
        Point next = { cur.x + dir[i][0], cur.y + dir[i][1] };

        while (is_valid(next.x, next.y)) {
            if (next.x == dest.x && next.y == dest.y) {
                return true;
            }

            if (map[next.x][next.y] != 0) {
                break;
            }

            if (!visited[next.x][next.y]) {
                visited[next.x][next.y] = true;
                if (dfs(next, dest, i % 2 == 0 ? turn : turn + 1)) {
                    return true;
                }
                visited[next.x][next.y] = false;
            }

            next.x += dir[i][0];
            next.y += dir[i][1];
        }
    }

    return false;
}

bool check(int x1, int y1, int x2, int y2) {
    if (x1 == x2 && y1 == y2) {
        return false;
    }

    if (map[x1][y1] != map[x2][y2]) {
        return false;
    }

    memset(visited, false, sizeof(visited));
    visited[x1][y1] = true;
    Point start = { x1, y1 };
    Point end = { x2, y2 };

    return dfs(start, end, 0);
}
int main() {
    initGame();
    drawGame();

    /*while (!_kbhit()) {
        if (MouseHit()) {
            MOUSEMSG m = GetMouseMsg();
            if (m.uMsg == WM_LBUTTONDOWN) {
                int x1 = m.x / BLOCK_SIZE;
                int y1 = m.y / BLOCK_SIZE;
                m = GetMouseMsg();
                int x2 = m.x / BLOCK_SIZE;
                int y2 = m.y / BLOCK_SIZE;
                if (check(x1, y1, x2, y2)) {
                    map[x1][y1] = 0;
                    map[x2][y2] = 0;
                    drawGame();
                }
            }
        }
    }*/

    closegraph();
    return 0;
}

