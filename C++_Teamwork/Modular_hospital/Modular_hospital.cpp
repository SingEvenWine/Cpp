#include "Casualties.h"
#include "Check.h"
#include "Management.h"
#include "Items.h"
#include "Supply.h"
#include "Doctor.h"
int main() {
	Casualties ca("�", "16", "��", "41138120050165", "A", "����,ͷ��",15);
	Check result(ca);
	Management management(result);
	Doctor doctor("����","23","��","420521199213137","�ڿ�");
	ca.display();
	doctor.display();
	cout << "�����: " << result.getType() << endl;
	cout << "���Ʒ���: " << management.getTreatment() << endl << endl;
	Iteams water("water", 100);
	Iteams medical_supplies("Medical Supplies", 100);
	Supply Medical_Supplies(medical_supplies);
	Supply Water(water);
	Water.Supply_Demand();
	cout << endl;
	cout << medical_supplies.getName() << "�Ƿ���� ? \n";
	Medical_Supplies.isDisinfect();
	cout << "\n" << medical_supplies.getName() << "�Ƿ�ϴ�� ? \n";
	Medical_Supplies.isWashed();
	cout << "\n\n";
	
}
