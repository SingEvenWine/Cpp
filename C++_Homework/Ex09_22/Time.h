#pragma once
#include <ctime>
using namespace std;
class Time
{
public:
	Time();
	void setTime(int, int, int);//set minute hour second.
	void printUniversal()const;//print time in universal format
	void printStandard()const;//print time in standard format
private:
	unsigned int second;//seconds since 00:00:00
	time_t curtime;
};