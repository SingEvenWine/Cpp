#pragma once
#include <string>
#include <iostream>
using namespace std;
class Package
{
public:
	Package(string recName,string senName,string recAddress,string senAddress,int recPostcode,int senPostcode,double weight,double univalent);
	double calculateCost();
//private:
	string recName;
	string senName;
	string recAddress;
	string senAddress;
	int recPostcode;
	int senPostcode;
	double weight;
	double univalent;
};

