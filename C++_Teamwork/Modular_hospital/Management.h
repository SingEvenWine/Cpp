#pragma once
#include "Check.h"
#include "Casualties.h"
class Management
{
public:
	Management();
	~Management();
	Management(Check result);
	string getTreatment();
private:
	Check result;
	string treatment;
};

Management::Management( Check result)
{
	this->result = result;
}
string Management::getTreatment() {
	if (result.getType() == "ĞÂ¹Ú·ÎÑ×") {
		return "First aid treatment";
	}
	if (result.getType() == "2") {
		return  "Emergency surgery";
	}
	if (result.getType() == "3") {
		return  "Early treatment";
	}
	if (result.getType() == "4") {
		return "Diagnostic imaging";
	}
}
Management::Management()
{
}
Management::~Management()
{
}