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
		cout << "��ǰλ��Ϊ��" << rover.getlocation() << endl << endl << endl;
		cout << "1:�������γ��������" << endl << endl;
		cout << "2:���������������ʹ���" << endl << endl;
		cout << "3:���ǳ��α���̽���״������ṹ�����棩̽��" << endl << endl;
		cout << "4:���ǳ�����ɷ�̽���ǿ������ʯ����̽��" << endl << endl;
		cout << "5:������������Ǵ�����������̽��" << endl << endl;
		cout << "6:�ƶ�" << endl << endl;
		cout << "7:�����̽������" << endl << endl;
		cout << "8:�������Ŀ������" << endl << endl;
		cout << "-1:����" << endl << endl;
		cout << "��������ѡ�����";
		cin >> i;
		while (i == 1)
		{
			cout << "������ɣ����ͼƬ��ͼƬ��ѡ��ɹ�����ص㲢����������������Կո������" << endl;
			string a, b;
			cin >> a >> b;
			probe.setlocation(a, b);
			getchar();
			getchar();
			break;
		}
		while (i == 2)
		{
			cout << "������ʹ��죺";
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
			cout << "���������ṹ��";
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
			cout << "����������ʯ���ͣ�";
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
			cout << "�����������������";
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
			cout << "�ƶ�����";
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