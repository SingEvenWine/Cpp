#include <iostream>
using namespace std;


int tripleByValue(int count);
void tripleByReference(int& count);

int main()
{
    int count = 6;
    cout << "调用按值传递前,按引用传递函数前count的值为 " << count << endl;
    cout << tripleByValue(count) << endl;
    cout << "调用按值传递后,按引用传递函数前count的值为 " << count << endl;
    tripleByReference(count);
    cout << count << endl;
    cout << "调用按值传递后,按引用传递函数后count的值为 " << count << endl;
}

int tripleByValue(int count) {//通过值传递
    return 3 * count;
}//未改变count的值


void tripleByReference(int& count) {// 按引用传递
    count = 3 * count;
}//改变了count的值
