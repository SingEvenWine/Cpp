#include "TwoDayPackage.h"


TwoDayPackage::TwoDayPackage(string recName, string senName, string recAddress, string senAddress, int recPostcode, int senPostcode, double weight, double univalent, double cost)
	:Package(recName, senName, recAddress, senAddress, recPostcode, senPostcode, weight, univalent)
{
	this->cost = cost;
}

double TwoDayPackage::calculateCost()
{
	using::Package;
	return Package::calculateCost() + cost;
}
