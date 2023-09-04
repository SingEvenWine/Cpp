#pragma once
#include<string>
#include<iostream>
using namespace std;
//学生类
class Student
{
public:
	Student();
	Student(string name, string id, string age, string sex, string faculty, string major, string grade, string date, string position, string remark,string soc);
	friend ostream& operator<<(ostream&, Student&);//重载<<运算符
	friend istream& operator>>(istream& in, Student& s);
	virtual ~Student() {};//虚析构函数
	void setName(string);
	string getName();
	void setID(string);
	string getID();
	void setAge(string);
	string getAge();
	void setSex(string);
	string getSex();
	void setFaculty(string);
	string getFaculty();
	void setMajor(string);
	string getMajor();
	void setGrade(string);
	string getGrade();
	void setDate(string date);
	string getDate();
	void setPosition(string position);
	string getPosition();
	void setRemark(string remark);
	string getRemark();
	void setSoc(string soc);
	string getSoc();
private:
	string stuName;//学生姓名
	string stuID;//学号
	string stuAge;//学生年龄
	string sex;//性别
	string faculty;//学院
	string major;//专业
	string grade;//年级
	string date;//加入社团时间
	string position;//职务
	string remark;//备注
	string soc;//社团
};

