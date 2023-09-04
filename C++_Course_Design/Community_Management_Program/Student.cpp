#include "Student.h"

Student::Student()
{
	stuName = "";//ѧ������
	stuID = "";//ѧ��
	stuAge = "";//ѧ������
	sex = "";//�Ա� 0ΪŮ�� 1Ϊ���� -1��ʾ����
	faculty = "";//ѧԺ
	major = "";//רҵ
	grade = "";//�꼶
	date = "";//����ʱ��
	position = "";//ְλ
	remark = "";//��ע
	soc = "";
}

Student::Student(string name, string id, string age, string sex, string faculty, string major, string grade,string date,string position,string remark,string soc)
{
	setName(name);
	setID(id);
	setAge(age);
	setSex(sex);
	setFaculty(faculty);
	setMajor(major);
	setGrade(grade);
	setDate(date);
	setPosition(position);
	setRemark(remark);
	setSoc(soc);
}

void Student::setName(string name)
{
	this->stuName = name;
}

string Student::getName()
{
	return stuName;
}

void Student::setID(string ID)
{
	this->stuID = ID;
}

string Student::getID()
{
	return stuID;
}

void Student::setAge(string Age)
{
	this->stuAge = Age;
}

string Student::getAge()
{
	return stuAge;
}

void Student::setSex(string sex)
{
	this->sex = sex;
}

string Student::getSex()
{
	return sex;
}

void Student::setFaculty(string faculty)
{
	this->faculty = faculty;
}

string Student::getFaculty()
{
	return faculty;
}

void Student::setMajor(string major)
{
	this->major = major;
}

string Student::getMajor()
{
	return major;
}

void Student::setGrade(string grade)
{
	this->grade = grade;
}

string Student::getGrade()
{
	return grade;
}

void Student::setDate(string date)
{
	this->date = date;
}

string Student::getDate()
{
	return date;
}

void Student::setPosition(string position)
{
	this->position = position;
}

string Student::getPosition()
{
	return position;
}

void Student::setRemark(string remark)
{
	this->remark = remark;
}

string Student::getRemark()
{
	return remark;
}
void Student::setSoc(string soc)
{
	this->soc = soc;
}
string Student::getSoc()
{
	return soc;
}
ostream& operator<<(ostream& out, Student& student)
{
	return out << student.stuName << " " << student.stuID << " " << student.stuAge << " " << student.sex << " "
		<< student.faculty << " " << student.major << " " << student.grade << " " << student.date << " "
		<< student.position << " " << student.remark << " " << student.soc << endl;
}

istream& operator>>(istream& in, Student& student)
{
	in >> student.stuName >> student.stuID >> student.stuAge >> student.sex
		>> student.faculty >> student.major >> student.grade >> student.date
		>> student.position >> student.remark >> student.soc;
	return in;
}
