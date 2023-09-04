#include "StuList.h"

StuList::StuList()
{
}

void StuList::buildList()//从文件中读取数据并建立学生顺序表
{
	ifstream fin("StudentData.txt", ios::in );
	if (!fin)
		cout << "打开文件错误!\n";
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
		cout << "打开文件错误!\n";
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
		string date = "无";//加入社团时间
		string position = "无";//职务
		string remark = "无";//备注
		string soc = "无";//社团
		cout << "\n社团名称：";
		cin >> soc;
		cout << "\n加入社团日期：";
		cin >> date;
		cout << "\n所属职位：";
		cin >> position;
		cout << "\n备注：";
		cin >> remark;
		it->setSoc(soc);
		it->setDate(date);
		it->setPosition(position);
		it->setRemark(remark);
	}
	else {
		cout << "请先添加该学生的基本信息!\n";
		addStu();
	}
}

void StuList::delMember()
{
	auto it = findStu();
	if (it != stuList.end()) {
		it->setSoc("无");
		it->setDate("无");
		it->setPosition("无");
		it->setRemark("无");
		cout << "退出社团成功\n";
	}
	else {
		// student was not found
	}
}

void StuList::revMember()
{
	auto it = findStu();
	if (it != stuList.end()) {
		string position = "无";//职务
		string remark = "无";//备注
		cout << "请输入要任命的职务\n";
		cin >> position;
		it->setPosition(position);
		cout << "请输入备注\n";
		cin >> remark;
		it->setRemark(remark);
		cout << "职务任命成功\n";
	}
	else {
		// student was not found
	}
}

void StuList::addStu()
{
	string stuName;//学生姓名
	string stuID;//学号
	string stuAge;//学生年龄
	string sex;//性别
	string faculty;//学院
	string major;//专业
	string grade;//年级
	string date = "无";//加入社团时间
	string position = "无";//职务
	string remark = "无";//备注
	string soc = "无";//社团
	cout << "请输入要添加的学生信息\n";
	cout << "学生姓名：";
	cin >> stuName;
	cout << "\n学号：";
	cin >> stuID;
	cout << "\n学生年龄：";
	cin >> stuAge;
	cout << "\n学生性别：";
	cin >> sex;
	cout << "\n所属学院：";
	cin >> faculty;
	cout << "\n所属专业：";
	cin >> major;
	cout << "\n所属年级：";
	cin >> grade;
	Student stu(stuName, stuID, stuAge, sex, faculty, major, grade, date, position, remark, soc);
	stuList.push_back(stu);
	cout << "\n\n添加成功\n";
}

vector<Student>::iterator StuList::findStu()
{
	string id;
	cout << "请输入学生的学号ID：";
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
		cout << "未找到该学生";
	return stuList.end();
}

void StuList::delStu()
{
	auto it = findStu();
	if (it != stuList.end()) {
		stuList.erase(it);
		cout << "删除成功\n";
	}
	else {
		// student was not found
	}
}

void StuList::revStu()
{
	auto it = findStu();
	string stuName;//学生姓名
	string stuID;//学号
	string stuAge;//学生年龄
	string sex;//性别
	string faculty;//学院
	string major;//专业
	string grade;//年级
	string date;//加入社团时间
	string position;//职务
	string remark;//备注
	string soc;//社团
	cout << "请选择要修改的数据:" << endl;
	cout << "1. 姓名" << endl;
	cout << "2. 学号" << endl;
	cout << "3. 年龄" << endl;
	cout << "4. 性别" << endl;
	cout << "5. 学院" << endl;
	cout << "6. 专业" << endl;
	cout << "7. 年级" << endl;
	int choice;
	cin >> choice;
	if (it != stuList.end()) {
		switch (choice) {
		case 1: cout << "请输入新的姓名: "; cin >> stuName; it->setName(stuName); break;
		case 2: cout << "请输入新的学号: "; cin >> stuID; it->setID(stuID); break;
		case 3: cout << "请输入新的年龄: "; cin >> stuAge; it->setAge(stuAge); break;
		case 4: cout << "请输入新的性别: "; cin >> sex; it->setSex(sex); break;
		case 5: cout << "请输入新的学院: "; cin >> faculty; it->setFaculty(faculty); break;
		case 6: cout << "请输入新的专业: "; cin >> major; it->setMajor(major); break;
		case 7: cout << "请输入新的年级: "; cin >> grade; it->setGrade(grade); break;
		default: cout << "无效的选项" << endl; break;
		}
		cout << "修改后的数据为:\n" << *it;
	}
	else {
		// student was not found
	}
}

