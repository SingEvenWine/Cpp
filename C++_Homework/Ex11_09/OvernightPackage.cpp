#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(string recName, string senName, string recAddress, string senAddress, int recPostcode, int senPostcode, double weight, double univalent, double price)
	:Package(recName, senName, recAddress, senAddress, recPostcode, senPostcode, weight, univalent)
{
	this->price = price;
}

double OvernightPackage::calculateCost()
{
	return (price + univalent) * weight;
}
