#pragma once
#include"Student.h"
#include<vector>
#include<fstream>
using namespace std;
class StuList//学生表
{
public:
	StuList();
	void buildList();//建立顺序表
	vector<Student>::iterator findStu();//查找学生
	void addStu();//添加学生
	void delStu();//删除学生
	void revStu();//修改学生信息
	void saveList();//保存顺序表
	void view();//浏览学生信息
	void addMember();//添加社团信息
	void delMember();//退出社团
	void revMember();//修改团员信息
private:
	vector<Student> stuList;
};

