#pragma once
#include"Society.h"
#include<vector>
#include<fstream>
using namespace std;
class SocList//���ű�
{
public:
	SocList();
	void buildList();
	void addSoc();//�������
	vector<Society>::iterator findSoc();//��������
	void delSoc();//ɾ������
	void revSoc();//�޸�������Ϣ
	void view();//���������Ϣ
	void saveList();//����˳���
//private:
	vector<Society> socList;
};

