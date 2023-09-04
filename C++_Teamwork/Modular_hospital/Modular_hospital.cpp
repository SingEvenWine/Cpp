#include "Casualties.h"
#include "Check.h"
#include "Management.h"
#include "Items.h"
#include "Supply.h"
#include "Doctor.h"
int main() {
	Casualties ca("李华", "16", "男", "41138120050165", "A", "发热,头疼",15);
	Check result(ca);
	Management management(result);
	Doctor doctor("张三","23","男","420521199213137","内科");
	ca.display();
	doctor.display();
	cout << "检查结果: " << result.getType() << endl;
	cout << "治疗方案: " << management.getTreatment() << endl << endl;
	Iteams water("water", 100);
	Iteams medical_supplies("Medical Supplies", 100);
	Supply Medical_Supplies(medical_supplies);
	Supply Water(water);
	Water.Supply_Demand();
	cout << endl;
	cout << medical_supplies.getName() << "是否灭菌 ? \n";
	Medical_Supplies.isDisinfect();
	cout << "\n" << medical_supplies.getName() << "是否洗涤 ? \n";
	Medical_Supplies.isWashed();
	cout << "\n\n";
	
}
