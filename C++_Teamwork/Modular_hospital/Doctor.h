#pragma once
#include <string>
using namespace std;

class Doctor
{
public:
	Doctor(string name, string age, string sex, string id, string department);
	~Doctor();
	Doctor() {};
	void setName(string name);
	void setAge(string age);
	void setSex(string sex);
	void setId(string id);
	void setDepartment(string department);
	void display();
	string getName();
	string getAge();
	string getSex();
	string getId();
	string getDepartment();
private:
	string name;
	string age;
	string sex;
	string id;
	string department;
};
void Doctor::setName(string name) {
	this->name = name;
}
void Doctor::setAge(string age) {
	this->age = age;
}
void Doctor::setSex(string sex) {
	this->sex = sex;
}
void Doctor::setId(string id) {
	this->id = id;
}
void Doctor::setDepartment(string department) {
	this->department = department;
}
string Doctor::getName() {
	return name;
}
string Doctor::getAge() {
	return age;
}
string Doctor::getSex() {
	return sex;
}
string Doctor::getId() {
	return id;
}
string Doctor::getDepartment() {
	return department;
}
void Doctor::display() {
	cout << getName() << " ";
	cout << getAge() << " ";
	cout << getSex() << " ";
	cout << getId() << " ";
	cout << getDepartment() << " " << endl;
}
Doctor::Doctor(string name, string age, string sex, string id, string department)
{
	setName(name);
	setAge(age);
	setSex(sex);
	setId(id);
	setDepartment(department);
}

Doctor::~Doctor()
{
}