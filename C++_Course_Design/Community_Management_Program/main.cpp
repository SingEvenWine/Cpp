#include "StuList.h"
#include "SocList.h"

int main() {
	int a = 3;
	StuList stuList;
	stuList.buildList();
	SocList socList;
	while (true) {
		cout << "��ѡ��Ҫִ�еĲ���:" << endl;
		cout << "1. ���ѧ����Ϣ" << endl;
		cout << "2. �޸�ѧ����Ϣ" << endl;
		cout << "3. ���ѧ����Ϣ" << endl;
		cout << "4. ɾ��ѧ����Ϣ" << endl;
		cout << "5. ��ѯѧ����Ϣ" << endl;
		cout << "6. ���������Ϣ" << endl;
		cout << "7. �޸�������Ϣ" << endl;
		cout << "8. ���������Ϣ" << endl;
		cout << "9. ɾ��������Ϣ" << endl;
		cout << "10. ��ѯ������Ϣ" << endl;
		cout << "11. ѧ����������" << endl;
		cout << "12. ѧ������" << endl;
		cout << "13. ��������ְ��" << endl;
		cout << "14. �˳�ϵͳ" << endl;
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: stuList.addStu(); break;
		case 2: stuList.revStu(); break;
		case 3: stuList.view(); break;
		case 4: stuList.delStu(); break;
		case 5: stuList.findStu(); break;
		case 6: socList.addSoc(); break;
		case 7: socList.revSoc(); break;
		case 8: socList.view(); break;
		case 9: socList.delSoc(); break;
		case 10: socList.findSoc(); break;
		case 11:stuList.addMember(); break;
		case 12: stuList.delMember(); break;
		case 13: stuList.revMember(); break;
		case 14: stuList.saveList(); socList.saveList(); exit(0); break;
		default: cout << "��Ч��ѡ��" << endl; break;
		}
		getchar();
		getchar();
		system("cls");
	}
	return 0;
}