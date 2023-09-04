#pragma once
class Date//ÉùÃ÷Àà
{
public:
	Date(int year, int month, int day);
	void setyear(int year);
	int getyear();
	void setmonth(int month);
	int getmonth();
	void setday(int day);
	int getday();
	void displayDate();
private:
	int m_year;
	int m_month;
	int m_day;
};
