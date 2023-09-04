#include "Package.h"

Package::Package(string recName, string senName, string recAddress, string senAddress, int recPostcode, int senPostcode, double weight, double univalent)
{
    this->recName = recName;
    this->recAddress = recAddress;
    this->recPostcode = recPostcode;
    this->senAddress = senAddress;
    this->senName = senName;
    this->senPostcode = senPostcode;
    if (univalent > 0) {
        this->univalent = univalent;
    }
    else
    {
        this->univalent = 0;
        cout << "单价应为正值";
    }
    if (weight > 0) {
        this->weight = weight;
    }
    else
    {
        this->weight = 0;
        cout << "重量应为正值";
    }
}

double Package::calculateCost()
{
    return weight * univalent;
}
