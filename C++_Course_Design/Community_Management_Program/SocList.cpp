#include "SocList.h"

SocList::SocList()
{
	buildList();
}

void SocList::buildList()//���ļ��ж�ȡ���ݲ���������˳���
{
	ifstream fin("SocData.txt", ios::in);
	if (!fin)
		cout << "���ļ�����!\n";
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
		cout << "���ļ�����!\n";
	for (auto i = socList.begin(); i < socList.end(); i++)
		fout << *i;
	fout.close();
}

void SocList::addSoc()
{
	string socID;//���ű��
	string socName;//��������
	string president;//�糤
	string position;//����λ��
	string socAge;//����ʱ��
	string description;//��������
	cout << "������Ҫ��ӵ�������Ϣ\n";
	cout << "���ű�ţ�";
	cin >> socID;
	cout << "\n�������ƣ�";
	cin >> socName;
	cout << "\n�糤��";
	cin >> president;
	cout << "\n����λ�ã�";
	cin >> position;
	cout << "\n����ʱ�䣺";
	cin >> socAge;
	cout << "\n����������";
	cin >> description;
	Society soc(socID, socName, president, position, socAge, description);
	socList.push_back(soc);
	cout << "\n\n��ӳɹ�\n";
}

vector<Society>::iterator SocList::findSoc()
{
	string name;
	cout << "���������ŵ����ƣ�";
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
		cout << "δ�ҵ�������";
	return socList.end();
}

void SocList::delSoc()
{
	auto it = findSoc();
	if (it != socList.end()) {
		socList.erase(it);
		cout << "ɾ���ɹ�\n";
	}
	else {
		// student was not found
	}
}

void SocList::revSoc()
{
	auto it = findSoc();
	string socID;//���ű��
	string socName;//��������
	string president;//�糤
	string position;//����λ��
	string socAge;//����ʱ��
	string description;//��������
	cout << "��ѡ��Ҫ�޸ĵ�����:" << endl;
	cout << "1. ���ű��" << endl;
	cout << "2. ��������" << endl;
	cout << "3. �糤" << endl;
	cout << "4. ����λ��" << endl;
	cout << "5. ����ʱ��" << endl;
	cout << "6. ��������" << endl;
	int choice;
	cin >> choice;
	if (it != socList.end()) {
		switch (choice) {
		case 1: cout << "�������µ����ű��: "; cin >> socID; it->setID(socID); break;
		case 2: cout << "�������µ���������: "; cin >> socName; it->setName(socName); break;
		case 3: cout << "�������µ��糤����: "; cin >> president; it->setPre(president); break;
		case 4: cout << "�������µ�����λ��: "; cin >> position; it->setPosition(position); break;
		case 5: cout << "�������µĳ���ʱ��: "; cin >> socAge; it->setAge(socAge); break;
		case 6: cout << "�������µ���������: "; cin >> description; it->setDes(description); break;
		default: cout << "��Ч��ѡ��" << endl; break;
		}
		cout << "�޸ĺ������Ϊ:\n" << *it;
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
