#include "StuList.h"
#include "SocList.h"

int main() {
	int a = 3;
	StuList stuList;
	stuList.buildList();
	SocList socList;
	while (true) {
		cout << "请选择要执行的操作:" << endl;
		cout << "1. 添加学生信息" << endl;
		cout << "2. 修改学生信息" << endl;
		cout << "3. 浏览学生信息" << endl;
		cout << "4. 删除学生信息" << endl;
		cout << "5. 查询学生信息" << endl;
		cout << "6. 添加社团信息" << endl;
		cout << "7. 修改社团信息" << endl;
		cout << "8. 浏览社团信息" << endl;
		cout << "9. 删除社团信息" << endl;
		cout << "10. 查询社团信息" << endl;
		cout << "11. 学生加入社团" << endl;
		cout << "12. 学生退团" << endl;
		cout << "13. 安排社团职务" << endl;
		cout << "14. 退出系统" << endl;
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
		default: cout << "无效的选项" << endl; break;
		}
		getchar();
		getchar();
		system("cls");
	}
	return 0;
}