#pragma once
#include "Student.h"
#include "Society.h"
class SocMember:public Student
{
public:
	SocMember(string, string, string, string, string, string, string, string, string, string);
	SocMember();
	friend ostream& operator<<(std::ostream& out, const SocMember& member);
	friend std::istream& operator>>(std::istream& in, SocMember& member);
	void setDate(string date);
	string getDate() const;
	void setPosition(string position);
	string getPosition() const;
	void setRemark(string remark);
	string getRemark() const;
private:
	string date;//加入社团时间
	string position;//职务
	string remark;//备注
};

