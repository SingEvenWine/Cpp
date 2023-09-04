//member function are defined in TerrainData.cpp
#include<string.h>
#include<vector>
#include"Asinglelocation.h"
using namespace std;
#ifndef TERRAINDATA_H
#define TERRAINDATA_H

//TerrainData class definition
class TerrainData
{
private: vector<Asinglelocation> data;
	   Asinglelocation location;
public:
	TerrainData(string = "101,75");
	void Locationreset(string);
	void Savedata();
	void Allprint();
	void setgeological(string);
	void setsoil(string);
	void setmineral(string);
	void setatmosphere(string);
	string getlocation();
};//end class TerrainData
#endif // !TERRAINDATA_H