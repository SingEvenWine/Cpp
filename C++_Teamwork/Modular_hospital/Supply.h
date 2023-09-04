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
	cout << iteam.getNumber() << "件 " << iteam.getName() << " 已经洗涤";
	return true;
}
bool Supply::isDisinfect() {
	cout << iteam.getNumber() << "件 " << iteam.getName() << " 已经灭菌";
	return true;
}
void Supply::Supply_Demand() {
	cout << iteam.getName() << " 需要: " << "360 " << "供应: " << "1200 " << " \n";
}

Supply::Supply(Iteams iteam) {
	this->iteam = iteam;
}

Supply::~Supply()
{
}