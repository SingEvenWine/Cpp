#include "Date.h"
#include <iostream>
Date::Date(int year, int month, int day) {//���캯��
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
int Date::getmonth() {//�ж��·��Ƿ�Ϸ�
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
void Date::displayDate() {//�������
	std::cout << "����Ϊ:" << getyear() << "/" << getmonth() << "/" << getday() << std::endl;
}