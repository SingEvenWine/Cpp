#pragma once
using namespace std;
class Time
{
public:
	Time();
	void setTime(int, int, int);//set minute hour second.
	void printUniversal()const;//print time in universal format
	void printStandard()const;//print time in standard format
	void tick();
private:
	unsigned int hour;//0-23
	unsigned int minute;//0-59
	unsigned int second;//0-59
};