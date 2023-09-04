#pragma once
#include "StuList.h"
//������
class Society
{
public:
	Society();
	Society(string, string, string, string, string, string);
	friend std::ostream& operator<<(std::ostream& out,  Society& society);
	friend std::istream& operator>>(std::istream& in, Society& society);
	void setName(string);
	string getName();
	void setID(string);
	string getID();
	void setAge(string);
	string getAge();
	void setPre(string);
	string getPre();
	void setPosition(string);
	string getPosition();
	void setDes(string);
	string getDes();
	void addMember();
private:
	string socID;//���ű��
	string socName;//��������
	string president;//�糤
	string position;//����λ��
	string socAge;//����ʱ��
	string description;//��������
};

