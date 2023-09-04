#pragma once
#include <string>
#include <iostream>
using namespace std;

class Casualties
{
public:
	Casualties(string name, string age, string sex, string id, string blood_type, string symptom,int bed_num);
	~Casualties();
	Casualties() {}
	void setName(string name);
	void setAge(string age);
	void setSex(string sex);
	void setId(string id);
	void setBlood_Type(string blood_type);
	void setSymptom(string symptom);
	void setBed_Num(int num);
	string getName();
	string getAge();
	string getSex();
	string getId();
	string getBlood_Type();
	string getSymptom();
	int getBed_Num();
	void display();
private:
	string name;
	string age;
	string sex;
	string id;
	string blood_type;
	string symptom;
	int bed_num;
};
void Casualties::setBed_Num(int bed_num) {
	this->bed_num = bed_num;
}
void Casualties::setName(string name) {
	this->name = name;
}
void Casualties::setAge(string age) {
	this->age = age;
}
void Casualties::setSex(string sex) {
	this->sex = sex;
}
void Casualties::setId(string id) {
	this->id = id;
}
void Casualties::setBlood_Type(string blood_type) {
	this->blood_type = blood_type;
}
void Casualties::setSymptom(string symptom) {
	this->symptom = symptom;
}
string Casualties::getName() {
	return name;
}
string Casualties::getAge() {
	return age;
}
string Casualties::getSex() {
	return sex;
}
string Casualties::getId() {
	return id;
}
string Casualties::getBlood_Type() {
	return blood_type;
}
string Casualties::getSymptom() {
	return symptom;
}
int Casualties::getBed_Num() {
	return bed_num;
}
void Casualties::display() {
	cout << getName() << " ";
	cout << getAge() << " ";
	cout << getSex() << " ";
	cout << getId() << " ";
	cout << getBlood_Type() << " ";
	cout << getSymptom() << " ";
	cout <<"´²Î»:" << getBed_Num() << " " << endl;
}


Casualties::Casualties(string name, string age, string sex, string id, string blood_type, string symptom,int bed_num)
{
	setName(name);
	setAge(age);
	setSex(sex);
	setId(id);
	setBlood_Type(blood_type);
	setSymptom(symptom);
	setBed_Num(bed_num);
}

Casualties::~Casualties()
{
}