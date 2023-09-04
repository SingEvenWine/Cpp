#pragma once
#include "Package.h"
class TwoDayPackage:public Package
{
public:
	TwoDayPackage(string recName, string senName, string recAddress, string senAddress, int recPostcode, int senPostcode, double weight, double univalent,double cost);
	double calculateCost();
private:
	double cost;
};

