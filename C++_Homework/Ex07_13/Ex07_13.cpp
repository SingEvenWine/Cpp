// Ex07_13.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<double,20> num{};//定义一个array容器,用来存放这20个数.
    double a = 0;
    cout << "请输入20个数" << endl;
    for (int i = 0; i < num.size(); i++) {
        cin >> a;
        if (a >= 10 && a <= 100) {
            num.at(i) = a;
        }
        else
        {
            cout << "输入错误,请输入10-100之间(包括10和100)的数"<<endl;
        }
    }
    for (int j = 0; j < num.size(); j++) {//双重循环历遍数组
        bool flag = true;
        for (int k = 0; k < j; k++) {
            if (num.at(j) == num.at(k)) {//若有重复则不输出
                flag = false;
            }
        }
        if (flag) {
            cout << num.at(j) << " ";//若无重复则输出num
        }
    }
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
