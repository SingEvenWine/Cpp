#include<iostream>
#include"Asinglelocation.h"
#include"TerrainData.h"
#include<vector>
#include<string.h>
using namespace std;

TerrainData::TerrainData(string l)
{
	Asinglelocation location(l);
}

void TerrainData::Locationreset(string l)
{
	string x = " ";
	location.setlocation(l);
	location.setatmosphere(x);
	location.setgeological(x);
	location.setmineral(x);
	location.setsoil(x);
}
void TerrainData::Allprint()
{
	int i = data.size();
	for (i--; i > -1; i--)
		data[i].TerrainPrint();
}
void TerrainData::Savedata()
{
	data.push_back(this->location);
}
string TerrainData::getlocation()
{
	return location.getlocation();
}
void TerrainData::setatmosphere(string a)
{
	location.setatmosphere(a);
}
void TerrainData::setgeological(string a)
{
	location.setgeological(a);
}
void TerrainData::setmineral(string a)
{
	location.setmineral(a);
}
void TerrainData::setsoil(string a)
{
	location.setsoil(a);
}