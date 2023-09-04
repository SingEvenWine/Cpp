#ifndef ASINGLELOCATION_H
#define ASINGLELOCATION_H

#include<string>
using namespace std;

//Asinglelocation class definition
class Asinglelocation
{
private:string location;//This article records the location
	   string geological;//Local geological formations
	   string soil;//Local soil structure
	   string mineral;//Local ore type
	   string atmosphere;//Local atmospheric type
	   string description;
	   string state;
public:
	Asinglelocation(string = "200.2¡ã,000.9¡ã", string = " ",
		string = " ", string = " ", string = " ",
		string = " ", string = "Î´Ì½Ë÷");//Constructor
	void TerrainPrint();//Output function
	void ProbePrint();
	void setlocation(string);
	void setgeological(string);
	void setmineral(string);
	void setatmosphere(string);
	void setsoil(string);
	void setdescription(string);
	void setstate(string);
	string getlocation()const;
};//end class Asinglelocation
#endif // !ASINGLELOCATION_H