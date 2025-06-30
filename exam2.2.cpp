#include <iostream>
#include <string>
using namespace std;

class Employee 
{
    private:
        string name;
        double salary;
        string designation;

    public:
        void setName(string empName) 
		{
            name = empName;
        }

        void setSalary(double empSalary) 
		{
            if (empSalary >= 0)
                salary = empSalary;
            else
                cout << "Salary cannot be negative." << endl;
        }

        void setDesignation(string empDesignation) 
		{
            designation = empDesignation;
        }

        string getName() 
	    {
            return name;
        }

        double getSalary() 
		{
            return salary;
        }

        string getDesignation() 
		{
            return designation;
        }
};

int main() 
{
    Employee emp;
    emp.setName("John Doe");
    emp.setSalary(55000.75);
    emp.setDesignation("Software Engineer");

    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;

}
/*
output = Employee Details -> 
         Name -> John Doe
         Salary -> $55000.8
         Designation -> Software Engineer
*/
