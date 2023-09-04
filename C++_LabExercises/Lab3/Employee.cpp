// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std; 

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstname, string lastname, int monthly_salary) {
	setFirstName(firstname); //initializes first name
	setLastName(lastname); //initializes last name
	if (monthly_salary > 0) { //verify that salary is positive
		setMonthlySalary(monthly_salary); // if positive initializes monthly salary
	}
	else //monthly_salary <= 0
	{
		setMonthlySalary(0);//else set monthly salary to 0
	} //end if
}//end constructor definition

/* Define a set function for the first name data member. */
//function to set the first name
void Employee::setFirstName(string firstname) {
	firstName = firstname; //store the first name
} //end function setFirstName

/* Define a get function for the first name data member. */
//function to retrieve the first name
string Employee::getFirstName() {
	return firstName;
} //end function getFirstName

/* Define a set function for the last name data member. */
//functione to set the last name
void Employee::setLastName(string lastname) {
	lastName = lastname;//store the last name
} //end function set LastName

/* Define a get function for the last name data member. */
//function to retrieve the last name
string Employee::getLastName() {
	return lastName;
} //end function getLastName

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
//function to set monthly salary
void Employee::setMonthlySalary(int monthly_salary) {
	if (monthly_salary > 0) { //verify that salary is positive
		monthlySalary = monthly_salary; // if positive initializes monthly salary
	}
	else //monthly_salary <= 0
	{
		monthlySalary = 0;//else set monthly salary to 0
	} //end if
} //end function setMonthlySalary

/* Define a get function for the monthly salary data member. */
//function to retrieve the monthly salary
int Employee::getMonthlySalary() {
	return monthlySalary;
} //end function getMonthlySalary
