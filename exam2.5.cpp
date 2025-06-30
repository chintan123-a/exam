#include <iostream>
using namespace std;

class Employee 
{
    private:
        string name;
        double salary;

    public:
        Employee(string n, double s) : name(n), salary(s) {}
        
        double getSalary() const 
		{
            return salary;
        }

        double operator+(const Employee& emp) 
		{
            return this->salary + emp.salary;
        }

        void display() const 
		{
            cout << "Employee: " << name << ", Salary: " << salary << endl;
        }
};

int main() 
{
    Employee emp1("Alice", 5000);
    Employee emp2("Bob", 6000);

    emp1.display();
    emp2.display();

    double totalSalary = emp1 + emp2;

    cout << "Total Salary: " << totalSalary << endl;
}
/*
output = Employee : Alice, Salary : 5000
         Employee : Bob, Salary : 6000
         Total Salary : 11000
*/
