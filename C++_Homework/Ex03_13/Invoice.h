#pragma once
#include <string>
using namespace std;
class Invoice//����Invoice��
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
	string m_PartNumber;//�����
	string m_PartDescription;//�������
	int m_SalesVolume;//��Ʒ������
	int m_UnitPrice;//��Ʒ����
	int m_InvoiceAmount;//��Ʊ��
};