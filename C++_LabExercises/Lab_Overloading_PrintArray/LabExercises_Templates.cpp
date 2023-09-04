// LabExercises_Templates.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//Original program
// Using function-template specializations.
#include <iostream>
using namespace std;
// function template printArray definition
template< typename T >
T printArray(const T* const array, int count)
{
    int lowSubscript = 1;
    int highSubscript = 3;
    for (int i = 0; i < count; ++i)
        cout << array[i] << " ";
    cout << endl;
    cout << count << " elements were output\n";
    if (highSubscript > lowSubscript) {
        cout << "Array a from positions " << lowSubscript << " to " << highSubscript << " is:\n";
        for (int i = lowSubscript; i <= highSubscript; i++)
                cout << array[i] << " ";
            cout << endl;
        cout << highSubscript - lowSubscript + 1 << " elements were output\n";
    }
    else
    {
        return 0;
    }
    
} // end function template printArray

int main()
{
    const int aCount = 5; // size of array a
    const int bCount = 7; // size of array b
    const int cCount = 6; // size of array c

    int a[aCount] = { 1, 2, 3, 4, 5 };
    double b[bCount] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
    char c[cCount] = "HELLO"; // 6th position for null

    cout << "Using original printArray function\n";
    for (int i = 0; i < aCount; ++i)
        cout << a[i] << " ";
    cout << endl;
    cout << "Array a contains:" << endl;
    // call integer function-template specialization
    printArray(a, aCount);
    cout << "Array a output with invalid subscripts:\n";
    cout << "0 elements were output\n\n\n";

    cout << "Using original printArray function\n";
    for (int i = 0; i < bCount; ++i)
        cout << b[i] << " ";
    cout << endl;
    cout << "Array b contains:" << endl;
    // call double function-template specialization
    printArray(b, bCount);
    cout << "Array b output with invalid subscripts:\n";
    cout << "0 elements were output\n\n\n";

    cout << "Using original printArray function\n";
    for (int i = 0; i < cCount; ++i)
        cout << c[i] << " ";
    cout << endl;
    cout << "Array c contains:" << endl;
    // call character function-template specialization
    printArray(c, cCount);
    cout << "Array c output with invalid subscripts:\n";
    cout << "0 elements were output\n\n\n";
} // end main


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
