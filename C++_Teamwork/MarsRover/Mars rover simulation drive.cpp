#include<iostream>
#include<stdlib.h>
#include"Asinglelocation.h"
#include"ProbeData.h"
#include"TerrainData.h"

using namespace std;

int main()
{
	TerrainData rover;
	ProbeData probe;
	int i = 0;
	while (i != -1)
	{
		i = 0;
		system("cls");
		cout << "当前位置为：" << rover.getlocation() << endl << endl << endl;
		cout << "1:导航地形车拍摄分析" << endl << endl;
		cout << "2:多光谱相机分析地质构造" << endl << endl;
		cout << "3:火星车次表面探测雷达土壤结构（剖面）探测" << endl << endl;
		cout << "4:火星车表面成分探测仪矿物和岩石类型探查" << endl << endl;
		cout << "5:火星气象测量仪大气物理特征探测" << endl << endl;
		cout << "6:移动" << endl << endl;
		cout << "7:输出已探测数据" << endl << endl;
		cout << "8:输出导航目标数据" << endl << endl;
		cout << "-1:休眠" << endl << endl;
		cout << "输入数字选择操作";
		cin >> i;
		while (i == 1)
		{
			cout << "拍摄完成，输出图片（图片）选择可供考察地点并补充描述（输入间以空格隔开）" << endl;
			string a, b;
			cin >> a >> b;
			probe.setlocation(a, b);
			getchar();
			getchar();
			break;
		}
		while (i == 2)
		{
			cout << "读入地质构造：";
			string geological;
			cin >> geological;
			rover.setgeological(geological);
			probe.Replacestatus(rover.getlocation());
			getchar();
			getchar();
			break;
		}
		while (i == 3)
		{
			cout << "读入土壤结构：";
			string soil;
			cin >> soil;
			rover.setsoil(soil);
			probe.Replacestatus(rover.getlocation());
			getchar();
			getchar();
			break;
		}
		while (i == 4)
		{
			cout << "读入矿物和岩石类型：";
			string mineral;
			cin >> mineral;
			rover.setmineral(mineral);
			probe.Replacestatus(rover.getlocation());
			getchar();
			getchar();
			break;
		}
		while (i == 5)
		{
			cout << "读入大气物理特征：";
			string atmosphere;
			cin >> atmosphere;
			rover.setatmosphere(atmosphere);
			probe.Replacestatus(rover.getlocation());
			getchar();
			getchar();
			break; 
		}
		while (i == 6)
		{
			cout << "移动至：";
			string location;
			cin >> location;
			rover.Savedata();
			rover.Locationreset(location);
			getchar();
			getchar();
			break;
		}
		while (i == 7)
		{
			rover.Allprint();
			getchar();
			getchar();
			break;
		}
		while (i == 8)
		{
			probe.Allprint();
			getchar();
			getchar();
			break;
		}
	}
	return 0;
}