#pragma once
#include "StuList.h"
//社团类
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
	string socID;//社团编号
	string socName;//社团名称
	string president;//社长
	string position;//社团位置
	string socAge;//成立时间
	string description;//社团描述
};

