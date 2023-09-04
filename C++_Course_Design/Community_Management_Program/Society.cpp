#include "Society.h"

Society::Society()
{
	socID = "";//���ű��
	socName = "";//��������
	president = "";//�糤
	position = "";//����λ��
	socAge = "";//����ʱ��
	description = "";//��������
}

Society::Society(string socID, string socName, string president, string position, string socAge, string description)
{
	setID(socID);
	setName(socName);
	setPre(president);
	setPosition(position);
	setAge(socAge);
	setDes(description);
	
}

void Society::setName(string name) {
	this->socName = name;
}

string Society::getName() {
	return socName;
}

void Society::setID(string id) {
	this->socID = id;
}

string Society::getID() {
	return socID;
}

void Society::setAge(string age) {
	this->socAge = age;
}

string Society::getAge() {
	return socAge;
}

void Society::setPre(string pre) {
	this->president = pre;
}

string Society::getPre() {
	return president;
}

void Society::setPosition(string position) {
	this->position = position;
}

string Society::getPosition() {
	return position;
}

void Society::setDes(string des) {
	this->description = des;
}

string Society::getDes() {
	return description;
}


std::ostream& operator<<(std::ostream& out, Society& society)
{
	out << society.socID << " " << society.socName << " " << society.president << " "
		<< society.position << " " << society.socAge << " " << society.description << endl;
	return out;
}

std::istream& operator>>(std::istream& in, Society& society)
{
	in >> society.socID >> society.socName >> society.president
		>> society.position >> society.socAge >> society.description;	
	return in;
}
