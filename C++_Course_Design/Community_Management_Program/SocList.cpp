#include "SocList.h"

SocList::SocList()
{
	buildList();
}

void SocList::buildList()//从文件中读取数据并建立社团顺序表
{
	ifstream fin("SocData.txt", ios::in);
	if (!fin)
		cout << "打开文件错误!\n";
	Society soc;
	while (fin >> soc)
	{
		
		socList.push_back(soc);
	}
	fin.close();
}

void SocList::saveList()
{
	ofstream fout("SocData.txt", ios::out);
	if (!fout)
		cout << "打开文件错误!\n";
	for (auto i = socList.begin(); i < socList.end(); i++)
		fout << *i;
	fout.close();
}

void SocList::addSoc()
{
	string socID;//社团编号
	string socName;//社团名称
	string president;//社长
	string position;//社团位置
	string socAge;//成立时间
	string description;//社团描述
	cout << "请输入要添加的社团信息\n";
	cout << "社团编号：";
	cin >> socID;
	cout << "\n社团名称：";
	cin >> socName;
	cout << "\n社长：";
	cin >> president;
	cout << "\n社团位置：";
	cin >> position;
	cout << "\n成立时间：";
	cin >> socAge;
	cout << "\n社团描述：";
	cin >> description;
	Society soc(socID, socName, president, position, socAge, description);
	socList.push_back(soc);
	cout << "\n\n添加成功\n";
}

vector<Society>::iterator SocList::findSoc()
{
	string name;
	cout << "请输入社团的名称：";
	cin >> name;
	int flag = -1;
	for (vector<Society>::iterator i = socList.begin(); i < socList.end(); i++) {
		if (i->getName() == name) {
			flag = 1;
			cout << *i;
			return i;
		}
	}
	if (flag == -1)
		cout << "未找到该社团";
	return socList.end();
}

void SocList::delSoc()
{
	auto it = findSoc();
	if (it != socList.end()) {
		socList.erase(it);
		cout << "删除成功\n";
	}
	else {
		// student was not found
	}
}

void SocList::revSoc()
{
	auto it = findSoc();
	string socID;//社团编号
	string socName;//社团名称
	string president;//社长
	string position;//社团位置
	string socAge;//成立时间
	string description;//社团描述
	cout << "请选择要修改的数据:" << endl;
	cout << "1. 社团编号" << endl;
	cout << "2. 社团名称" << endl;
	cout << "3. 社长" << endl;
	cout << "4. 社团位置" << endl;
	cout << "5. 成立时间" << endl;
	cout << "6. 社团描述" << endl;
	int choice;
	cin >> choice;
	if (it != socList.end()) {
		switch (choice) {
		case 1: cout << "请输入新的社团编号: "; cin >> socID; it->setID(socID); break;
		case 2: cout << "请输入新的社团名称: "; cin >> socName; it->setName(socName); break;
		case 3: cout << "请输入新的社长名称: "; cin >> president; it->setPre(president); break;
		case 4: cout << "请输入新的社团位置: "; cin >> position; it->setPosition(position); break;
		case 5: cout << "请输入新的成立时间: "; cin >> socAge; it->setAge(socAge); break;
		case 6: cout << "请输入新的社团描述: "; cin >> description; it->setDes(description); break;
		default: cout << "无效的选项" << endl; break;
		}
		cout << "修改后的数据为:\n" << *it;
	}
	else {
		// student was not found
	}
}

void SocList::view()
{
	for (auto i = socList.begin(); i < socList.end(); i++)
		cout << *i;
}
