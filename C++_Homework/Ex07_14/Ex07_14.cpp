#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<double> num; //定义一个vector容器, 用来存放这20个数.
	double a;
	cout << "请输入20个数" << endl;
	for (int i = 0; i < 20; i++) {
		cin >> a;
		if (a >= 10 && a <= 100) {//判断输入的数是否合法
			num.push_back(a);//用push_back输入这20个数.
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