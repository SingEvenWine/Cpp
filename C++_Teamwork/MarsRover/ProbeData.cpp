#include<iostream>
#include<vector>
#include"Asinglelocation.h"
#include"ProbeData.h"
using namespace std;
ProbeData::ProbeData(string l, string d)
{
	location.setlocation(l);
	location.setdescription(d);
}
void ProbeData::Replacestatus(string t)
{
	int i = data.size();
	for (i--; i > -1; i--)
		if (data[i].getlocation() == t)
			data[i].setstate("ÒÑÌ½Ë÷");
}
void ProbeData::Allprint()
{
	int i = data.size();
	for (i--; i > -1; i--)
		data[i].ProbePrint();
}
void ProbeData::Savedata()
{
	data.push_back(this->location);
}
void ProbeData::setlocation(string a, string b)
{
	location.setlocation(a);
	location.setdescription(b);
	data.push_back(this->location);
}