#include "Date.h"
#include <iostream>
Date::Date(int year, int month, int day) {//构造函数
	setyear(year);
	setmonth(month);
	setday(day);
}
void Date::setyear(int year) {
	m_year = year;
}
int Date::getyear() {
	return m_year;
}
void Date::setmonth(int month) {
	m_month = month;
}
int Date::getmonth() {//判断月份是否合法
	if (m_month > 0 && m_month < 13) {
		return m_month;
	}
	else
	{
		return 1;
	}
}
void Date::setday(int day) {
	m_day = day;
}
int Date::getday() {
	return m_day;
}
void Date::displayDate() {//输出日期
	std::cout << "日期为:" << getyear() << "/" << getmonth() << "/" << getday() << std::endl;
}