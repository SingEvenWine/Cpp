#include "StuList.h"

StuList::StuList()
{
}

void StuList::buildList()//���ļ��ж�ȡ���ݲ�����ѧ��˳���
{
	ifstream fin("StudentData.txt", ios::in );
	if (!fin)
		cout << "���ļ�����!\n";
	Student stu;
	while (fin >> stu)
	{
		stuList.push_back(stu);
	}
	fin.close();
}

void StuList::saveList()
{
	ofstream fout("StudentData.txt", ios::out);
	if (!fout)
		cout << "���ļ�����!\n";
	for (auto i = stuList.begin(); i < stuList.end(); i++)
		fout << *i;
	fout.close();
}

void StuList::view()
{
	for (auto i = stuList.begin(); i < stuList.end(); i++)
		cout << *i;
}

void StuList::addMember()
{
	auto it = findStu();
	if (it != stuList.end()) {
		string date = "��";//��������ʱ��
		string position = "��";//ְ��
		string remark = "��";//��ע
		string soc = "��";//����
		cout << "\n�������ƣ�";
		cin >> soc;
		cout << "\n�����������ڣ�";
		cin >> date;
		cout << "\n����ְλ��";
		cin >> position;
		cout << "\n��ע��";
		cin >> remark;
		it->setSoc(soc);
		it->setDate(date);
		it->setPosition(position);
		it->setRemark(remark);
	}
	else {
		cout << "������Ӹ�ѧ���Ļ�����Ϣ!\n";
		addStu();
	}
}

void StuList::delMember()
{
	auto it = findStu();
	if (it != stuList.end()) {
		it->setSoc("��");
		it->setDate("��");
		it->setPosition("��");
		it->setRemark("��");
		cout << "�˳����ųɹ�\n";
	}
	else {
		// student was not found
	}
}

void StuList::revMember()
{
	auto it = findStu();
	if (it != stuList.end()) {
		string position = "��";//ְ��
		string remark = "��";//��ע
		cout << "������Ҫ������ְ��\n";
		cin >> position;
		it->setPosition(position);
		cout << "�����뱸ע\n";
		cin >> remark;
		it->setRemark(remark);
		cout << "ְ�������ɹ�\n";
	}
	else {
		// student was not found
	}
}

void StuList::addStu()
{
	string stuName;//ѧ������
	string stuID;//ѧ��
	string stuAge;//ѧ������
	string sex;//�Ա�
	string faculty;//ѧԺ
	string major;//רҵ
	string grade;//�꼶
	string date = "��";//��������ʱ��
	string position = "��";//ְ��
	string remark = "��";//��ע
	string soc = "��";//����
	cout << "������Ҫ��ӵ�ѧ����Ϣ\n";
	cout << "ѧ��������";
	cin >> stuName;
	cout << "\nѧ�ţ�";
	cin >> stuID;
	cout << "\nѧ�����䣺";
	cin >> stuAge;
	cout << "\nѧ���Ա�";
	cin >> sex;
	cout << "\n����ѧԺ��";
	cin >> faculty;
	cout << "\n����רҵ��";
	cin >> major;
	cout << "\n�����꼶��";
	cin >> grade;
	Student stu(stuName, stuID, stuAge, sex, faculty, major, grade, date, position, remark, soc);
	stuList.push_back(stu);
	cout << "\n\n��ӳɹ�\n";
}

vector<Student>::iterator StuList::findStu()
{
	string id;
	cout << "������ѧ����ѧ��ID��";
	cin >> id;
	int flag = -1;
	for (vector<Student>::iterator i = stuList.begin(); i < stuList.end(); i++) {
		if (i->getID() == id) {
			flag = 1;
			cout << *i;
			return i;
		}
	}
	if (flag == -1)
		cout << "δ�ҵ���ѧ��";
	return stuList.end();
}

void StuList::delStu()
{
	auto it = findStu();
	if (it != stuList.end()) {
		stuList.erase(it);
		cout << "ɾ���ɹ�\n";
	}
	else {
		// student was not found
	}
}

void StuList::revStu()
{
	auto it = findStu();
	string stuName;//ѧ������
	string stuID;//ѧ��
	string stuAge;//ѧ������
	string sex;//�Ա�
	string faculty;//ѧԺ
	string major;//רҵ
	string grade;//�꼶
	string date;//��������ʱ��
	string position;//ְ��
	string remark;//��ע
	string soc;//����
	cout << "��ѡ��Ҫ�޸ĵ�����:" << endl;
	cout << "1. ����" << endl;
	cout << "2. ѧ��" << endl;
	cout << "3. ����" << endl;
	cout << "4. �Ա�" << endl;
	cout << "5. ѧԺ" << endl;
	cout << "6. רҵ" << endl;
	cout << "7. �꼶" << endl;
	int choice;
	cin >> choice;
	if (it != stuList.end()) {
		switch (choice) {
		case 1: cout << "�������µ�����: "; cin >> stuName; it->setName(stuName); break;
		case 2: cout << "�������µ�ѧ��: "; cin >> stuID; it->setID(stuID); break;
		case 3: cout << "�������µ�����: "; cin >> stuAge; it->setAge(stuAge); break;
		case 4: cout << "�������µ��Ա�: "; cin >> sex; it->setSex(sex); break;
		case 5: cout << "�������µ�ѧԺ: "; cin >> faculty; it->setFaculty(faculty); break;
		case 6: cout << "�������µ�רҵ: "; cin >> major; it->setMajor(major); break;
		case 7: cout << "�������µ��꼶: "; cin >> grade; it->setGrade(grade); break;
		default: cout << "��Ч��ѡ��" << endl; break;
		}
		cout << "�޸ĺ������Ϊ:\n" << *it;
	}
	else {
		// student was not found
	}
}

