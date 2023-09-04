#pragma once
#include<string>;
using namespace std;
class Iteams
{
public:
	Iteams(string name,int number);
	Iteams() {};
	~Iteams();
	void setName(string name);
	void setNumber(int number);
	string getName();
	int getNumber();
	void add(int num);
private:
	string name;
	int number;
};
void Iteams::setName(string name) {
	this->name = name;
}
void Iteams::setNumber(int num) {
	this->number = number;
}
string Iteams::getName() {
	return name;
}
int Iteams::getNumber() {
	return number;
}
void Iteams::add(int num) {
	this->number += num;
}


Iteams::Iteams(string name,int number)
{
	this->name = name;
	this->number = number;
}

Iteams::~Iteams()
{
}