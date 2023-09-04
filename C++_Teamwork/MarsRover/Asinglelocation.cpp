//member function definitions for class Asinglelocation
#include<iostream>
#include<string.h>
using namespace std;

#include"Asinglelocation.h"

Asinglelocation::Asinglelocation(string l, string g,
	string s, string m, string a, string d, string t)
{
	location = l;
	geological = g;
	soil = s;
	mineral = m;
	atmosphere = a;
	state = t;
	description = d;
}
void Asinglelocation::TerrainPrint()
{
	cout << "This article records the location:";
	cout << location << endl;//output location

	cout << "Local geological formations:";
	if (geological == " ")
		cout << "Not documented" << endl;
	else
		cout << geological << endl;//output geological
	
	cout << "Local soil structure:";
	if (soil == " ")
		cout << "Not documented" << endl;
	else
		cout << soil << endl;//output soil

	cout << "Local ore type:";
	if (mineral == " ")
		cout << "Not documented" << endl;
	else
		cout << mineral << endl;//output mineral

	cout << "Local atmospheric type";
	if (atmosphere == " ")
		cout << "Not documented" << endl;
	else
		cout << atmosphere << endl << endl;//output atmospheric
}
void Asinglelocation::ProbePrint()
{
	cout << "This article records the location:";
	cout << location << endl;//output location

	cout << "description of the location:" << this->description << endl;

	cout << "The status of the location:" << this->state << endl << endl;
}
void Asinglelocation::setatmosphere(string a)
{
	this->atmosphere = a;
}
void Asinglelocation::setgeological(string g)
{
	this->geological = g;
}
void Asinglelocation::setlocation(string l)
{
	this->location = l;
}
void Asinglelocation::setmineral(string m)
{
	this->mineral = m;
}
void Asinglelocation::setsoil(string s)
{
	this->soil = s;
}
void Asinglelocation::setdescription(string d)
{
	this->description = d;
}
void Asinglelocation::setstate(string t)
{
	this->state = t;
}
string Asinglelocation::getlocation()const
{
	return this->location;
}