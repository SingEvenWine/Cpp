#pragma once
#include"Items.h"
class Supply
{
public:
	Supply(Iteams iteam);
	~Supply();
	bool isWashed();
	bool isDisinfect();
	void Supply_Demand();
private:
	Iteams iteam;
};
bool Supply::isWashed() {
	cout << iteam.getNumber() << "�� " << iteam.getName() << " �Ѿ�ϴ��";
	return true;
}
bool Supply::isDisinfect() {
	cout << iteam.getNumber() << "�� " << iteam.getName() << " �Ѿ����";
	return true;
}
void Supply::Supply_Demand() {
	cout << iteam.getName() << " ��Ҫ: " << "360 " << "��Ӧ: " << "1200 " << " \n";
}

Supply::Supply(Iteams iteam) {
	this->iteam = iteam;
}

Supply::~Supply()
{
}