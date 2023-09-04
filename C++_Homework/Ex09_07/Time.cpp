#include "Time.h"
#include <ctime>
#include <iostream>
#include <iomanip>

Time::Time() {
	time_t curtime;
	tm t;
	time(&curtime);
	localtime_s(&t, &curtime);
	hour = t.tm_hour;//initialize hour
	minute = t.tm_min;//initialize minute
	second = t.tm_sec;//initialize second
}
void Time::setTime(int h, int m, int s) {//set time
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
		hour = h;
		minute = m;
		second = s;
	}
	else
	{
		cout << "hour,minute,second was wrong";
	}
}//end setTime
void Time::printUniversal() const {
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}
void Time::printStandard()const {
	cout << setfill('0') << setw(2) << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setw(2) << minute << ":" << setw(2) << second << " " << (hour < 12 ? "AM" : "PM") << endl;
}
void Time::tick() {
	if (second < 59) {
		++second;//add second
	}
	else if (minute < 59) {
		++minute;//add minute
		second = 0;//set second=0
	}
	else if (hour < 23)
	{
		++hour;//add hour
		second = 0;//set second minute to zero
		minute=0;
	}
	else
	{
		hour = 0;
		minute = 0;
		second = 0;//to next day
	}
}//end tick