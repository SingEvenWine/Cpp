#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main()
{
    Package package1("张三", "李四", "北京", "上海", 10000, 10100, 25.7, 12.5);
    cout << package1.senName << "从" << "邮编为：" << package1.senPostcode << "的" << package1.senAddress << "向位于" << "邮编为：" << package1.recPostcode << "的" << package1.recAddress << "的" << package1.recName << "发送的普通快递共花费：" << package1.calculateCost() <<"\n" << endl;
    OvernightPackage package2("张三", "李四", "北京", "上海", 10000, 10100, 25.7, 12.5, 5.5);
    cout << package2.senName << "从" << "邮编为：" << package2.senPostcode << "的" << package2.senAddress << "向位于" << "邮编为：" << package2.recPostcode << "的" << package2.recAddress << "的" << package2.recName << "发送的隔夜快递共花费：" << package2.calculateCost() <<"\n" << endl;
    TwoDayPackage package3("张三", "李四", "北京", "上海", 10000, 10100, 25.7, 12.5, 100.56);
    cout << package3.senName << "从" << "邮编为：" << package3.senPostcode << "的" << package3.senAddress << "向位于" << "邮编为：" << package3.recPostcode << "的" << package3.recAddress << "的" << package3.recName << "发送的两日快递共花费：" << package3.calculateCost()<<"\n";
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
