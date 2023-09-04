#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class HeartRate//定义HeartRate类
{
public://共有
	string getName();//从类中获取名字
	void setName(string name);//输入名字到类
	int getYear();//从类中获取年份
	void setYear(int year); //输入年份到类
	int getMonth();//从类中获取月份
	void setMonth(int month); //输入月份到类
	int getDay();//从类中获取天数
	void setDay(int day);//输入天数到类
	int getAge();//计算年龄
	int getMaximumHeartRate();//计算最大心率
	void getTargetHeartRate();//计算目标心率
	HeartRate(string name, int year, int month, int day);//声明构造函数
	HeartRate() {};//定义初始构造函数
private://类私有
	string m_name;//名字
	int m_year;//年份
	int m_month;//月份
	int m_day;//天数
	int m_age;//年龄
	int m_max;//最大心率
};
//函数定义
void HeartRate::setName(string name) {//输入名字到类
	m_name = name;
}
string HeartRate::getName() {//从类中获取名字
	return m_name;
}
void HeartRate::setYear(int year) {//输入年份到类
	m_year = year;
}
int HeartRate::getYear() {//从类中获取年份
	return m_year;
}
void HeartRate::setMonth(int month) {//输入月份到类
	m_month = month;
}
int HeartRate::getMonth() {//从类中获取月份
	return m_month;
}
void HeartRate::setDay(int day) {//输入天数到类
	m_day = day;
}
int HeartRate::getDay() {//从类中获取天数
	return m_day;
}
HeartRate::HeartRate(string name, int year, int month, int day) {//定义构造函数
	m_name = name;
	m_year = year;
	m_month = month;
	m_day = day;
}



int HeartRate::getAge() {//计算年龄
	tm t;//定义一个t指针
	time_t curtime;//定义curtime时间
	time(&curtime);//获取当前时间
	localtime_s(&t,&curtime);//将当前时间赋值给t
	m_age = 1900 + t.tm_year - m_year;//计算年龄
	cout << "年龄" << m_age << " ";//输出年龄
	return m_age;//返回年龄
}
int HeartRate::getMaximumHeartRate() {
	m_max = 220 - m_age;//计算最大心率
	cout << "最大心率:" << m_max << " ";//输出最大心率
	return m_max;//返回最大心率
}
void HeartRate::getTargetHeartRate() {
	cout <<"心率区间:" << (int)(m_max * 0.5) << "-" << (int)(m_max * 0.85) << " " << "bpm" << " ";
	//输出心率区间
}

int main()
{
	string name;
	int year, month, day;
	cin >> name >> year >> month >> day;//依次输入姓名出生年月日
	HeartRate Heart(name, year, month, day);//定义一个HeartRate对象Heart
	cout << "姓名:" << Heart.getName() << " " << "出生日期:" << Heart.getYear() << "年" << Heart.getMonth() << "月" << Heart.getDay() << "日"<<" ";
	Heart.getAge();
	Heart.getMaximumHeartRate();
	Heart.getTargetHeartRate();
    return 0;
}
