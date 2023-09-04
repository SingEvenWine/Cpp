#pragma once
#include <string>
using namespace std;
class Invoice//定义Invoice类
{
public:
	Invoice(string PartNumber, string PartDescription, int SalesVolume, int UnitPrice);
	void setPartNumber(string PartNumber);
	string getPartNumber();
	void setPartDescription(string PartDescription);
	string getPartDescription();
	void setSalesVolume(int SalesVolum);
	int getSalesVolume();
	void setUnitPrice(int UnitPrice);
	int getUnitPrice();
	int getInvoiceAmount();

private:
	string m_PartNumber;//零件号
	string m_PartDescription;//零件描述
	int m_SalesVolume;//商品销售量
	int m_UnitPrice;//商品单价
	int m_InvoiceAmount;//发票额
};