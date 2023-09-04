#include "Time.h"
#include <ctime>
#include <iostream>
#include <iomanip>

Time::Time() {
	time_t curtime;
	time_t daytime;
	tm t;
	time(&curtime);
	time(&daytime);
	localtime_s(&t, &daytime);
	t.tm_hour = 0;
	t.tm_min = 0;
	t.tm_sec = 0;
	second = difftime(curtime, mktime(&t));
	//cout<<second;
}
void Time::setTime(int h, int m, int s) {//set time
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
		second = 3600 * h + 60 * m + s;
	}
	else
	{
		cout << "hour,minute,second was wrong";
	}
}//end setTime
void Time::printUniversal() const {
	cout << setfill('0') << setw(2) << second / 60 / 60 % 60 << ":" << setw(2) << second / 60 % 60 << ":" << setw(2) << second % 60 << endl;
}
void Time::printStandard()const {
	cout << setfill('0') << setw(2) << ((second / 60 / 60 % 60 == 0 || second / 60 / 60 % 60 == 12) ? 12 : second / 60 / 60 % 60 % 12) << ":" << setw(2) << second / 60 % 60 << ":" << setw(2) << second % 60 << " " << (second / 60 / 60 % 60 < 12 ? "AM" : "PM");
}