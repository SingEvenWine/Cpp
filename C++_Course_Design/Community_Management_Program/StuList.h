#pragma once
#include"Student.h"
#include<vector>
#include<fstream>
using namespace std;
class StuList//ѧ����
{
public:
	StuList();
	void buildList();//����˳���
	vector<Student>::iterator findStu();//����ѧ��
	void addStu();//���ѧ��
	void delStu();//ɾ��ѧ��
	void revStu();//�޸�ѧ����Ϣ
	void saveList();//����˳���
	void view();//���ѧ����Ϣ
	void addMember();//���������Ϣ
	void delMember();//�˳�����
	void revMember();//�޸���Ա��Ϣ
private:
	vector<Student> stuList;
};

