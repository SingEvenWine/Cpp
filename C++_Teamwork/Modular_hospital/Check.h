#pragma once
#include"Casualties.h"
class Check
{
public:
	Check();
	~Check();
	Check(Casualties ca);
	void Diagnostic_Imaging(Casualties ca);
	void Haematology_Test(Casualties ca);
	void Bacteriological_Test(Casualties ca);
	string Injury();
	void setCasualties(Casualties ca);
	string getType();
private:
	Casualties ca;
	string diagnostic_imaging_result;
	string haematology_test_result;
	string bacteriological_test_result;
	string injury;
	string type;
};
void Check::setCasualties(Casualties ca) {
	this->ca = ca;
}
void Check::Diagnostic_Imaging(Casualties ca) {
	ca.getAge();
	ca.getBlood_Type();
	ca.getId();
	ca.getName();
	ca.getSex();
	ca.getSymptom();
	diagnostic_imaging_result = "result";
}
void Check::Haematology_Test(Casualties ca) {
	ca.getAge();
	ca.getBlood_Type();
	ca.getId();
	ca.getName();
	ca.getSex();
	ca.getSymptom();
	haematology_test_result = "result";
}
void Check::Bacteriological_Test(Casualties ca) {
	ca.getAge();
	ca.getBlood_Type();
	ca.getId();
	ca.getName();
	ca.getSex();
	ca.getSymptom();
	bacteriological_test_result = "result";
}
string Check::Injury() {
	bacteriological_test_result;
	haematology_test_result;
	diagnostic_imaging_result;
	injury = "injury";
	return injury;
}
string Check::getType() {
	injury;
	return "ÐÂ¹Ú·ÎÑ×";
}
Check::Check(Casualties ca) {
	setCasualties(ca);
}

Check::Check()
{
}

Check::~Check()
{
}