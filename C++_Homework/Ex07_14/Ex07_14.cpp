#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<double> num; //����һ��vector����, ���������20����.
	double a;
	cout << "������20����" << endl;
	for (int i = 0; i < 20; i++) {
		cin >> a;
		if (a >= 10 && a <= 100) {//�ж���������Ƿ�Ϸ�
			num.push_back(a);//��push_back������20����.
		}
		else
		{
			cout << "�������,������10-100֮��(����10��100)����"<<endl;
		}
	}
	for (int j = 0; j < num.size(); j++) {//˫��ѭ����������
		bool flag = true;
		for (int k = 0; k < j; k++) {
			if (num.at(j) == num.at(k)) {//�����ظ������
				flag = false;
			}
		}
		if (flag) {
			cout << num.at(j) << " ";//�����ظ������num
		}
	}
	return 0;
}