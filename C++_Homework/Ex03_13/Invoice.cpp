#include "Invoice.h"
//����ͷ�ļ����е���������
void Invoice::setPartNumber(string PartNumber) {
	m_PartNumber = PartNumber;
}
string Invoice::getPartNumber() {
	return m_PartNumber;
}
void Invoice::setPartDescription(string PartDescription) {
	m_PartDescription = PartDescription;
}
string Invoice::getPartDescription() {
	return m_PartDescription;
}
void Invoice::setSalesVolume(int SalesVolum) {
	m_SalesVolume = SalesVolum;
}
int Invoice::getSalesVolume() {
	return m_SalesVolume;
}
void Invoice::setUnitPrice(int UnitPrice) {
	m_UnitPrice = UnitPrice;
}
int Invoice::getUnitPrice() {
	return m_UnitPrice;
}
//��������set��get����
int Invoice::getInvoiceAmount() {//�������۶�жϺͷ���
	m_InvoiceAmount = m_SalesVolume * m_UnitPrice;
	if (m_InvoiceAmount < 0) {
		m_InvoiceAmount = 0;
	}
	return m_InvoiceAmount;
}
Invoice::Invoice(string PartNumber, string PartDescription, int SalesVolume, int UnitPrice) {
	Invoice::setPartNumber(PartNumber);
	Invoice::setPartDescription(PartDescription);
	Invoice::setSalesVolume(SalesVolume);
	Invoice::setUnitPrice(UnitPrice);
}//������������
