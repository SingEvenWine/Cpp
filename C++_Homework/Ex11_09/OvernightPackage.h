#pragma once
#include "Package.h"

class OvernightPackage:public Package
{
public:
	OvernightPackage(string recName, string senName, string recAddress, string senAddress, int recPostcode, int senPostcode, double weight, double univalent, double price);
	double calculateCost();
private:
	double price;
};

