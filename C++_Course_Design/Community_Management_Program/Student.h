#pragma once
#include<string>
#include<iostream>
using namespace std;
//ѧ����
class Student
{
public:
	Student();
	Student(string name, string id, string age, string sex, string faculty, string major, string grade, string date, string position, string remark,string soc);
	friend ostream& operator<<(ostream&, Student&);//����<<�����
	friend istream& operator>>(istream& in, Student& s);
	virtual ~Student() {};//����������
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
	string stuName;//ѧ������
	string stuID;//ѧ��
	string stuAge;//ѧ������
	string sex;//�Ա�
	string faculty;//ѧԺ
	string major;//רҵ
	string grade;//�꼶
	string date;//��������ʱ��
	string position;//ְ��
	string remark;//��ע
	string soc;//����
};

