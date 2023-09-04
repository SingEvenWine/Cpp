// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std; 

// Employee class definition
class Employee 
{
public:
   /* Declare a constructor that has one parameter for each data member */
	Employee(string, string, int);

   /* Declare a set method for the employee's first name */
	void setFirstName(string firstname); //function to set the first name

   /* Declare a get method for the employee's first name */
	string getFirstName(); //function to get the first name

   /* Declare a set method for the employee's last name */
	void setLastName(string lastname); //function to set the last name

   /* Declare a get method for the employee's last name */
	string getLastName(); //function to get the last name

   /* Declare a set method for the employee's monthly salary */
	void setMonthlySalary(int monthly_salary); //function to set the monthly salary

   /* Declare a get method for the employee's monthly salary */
	int getMonthlySalary(); //function to get the monthly salary

private:
   /* Declare a string data member for the employee's first name */
	string firstName; //first name for this Employee

   /* Declare a string data member for the employee's last name */
	string lastName; //last name for this Employee

   /* Declare an int data member for the employee's monthly salary */
	int monthlySalary; //monthly salary for this Employee

}; // end class Employee
