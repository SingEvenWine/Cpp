//member function are defined in ProbeData.cpp
#include<string.h>
#include<vector>
#include"Asinglelocation.h"
#include"TerrainData.h"
using namespace std;
#ifndef PROBEDATA_H
#define PROBEDATA_H

//ProbeData class definition
class ProbeData
{
private:
		vector <Asinglelocation>data;
		Asinglelocation location;
public:
	ProbeData(string="", string="");
	void setlocation(string, string);
	void Replacestatus(string);
	void Allprint();
	void Savedata();

};//end class ProbeData
#endif // !PROBEDATA_H
