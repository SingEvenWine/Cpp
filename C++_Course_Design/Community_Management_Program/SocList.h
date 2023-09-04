#pragma once
#include"Society.h"
#include<vector>
#include<fstream>
using namespace std;
class SocList//社团表
{
public:
	SocList();
	void buildList();
	void addSoc();//添加社团
	vector<Society>::iterator findSoc();//查找社团
	void delSoc();//删除社团
	void revSoc();//修改社团信息
	void view();//浏览社团信息
	void saveList();//保存顺序表
//private:
	vector<Society> socList;
};

