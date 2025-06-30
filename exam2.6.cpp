#include <iostream>
#include <stdexcept> 
using namespace std;

class Calculator 
{
    public:
        double divide(double numerator, double denominator) 
	    {
            if (denominator == 0) 
		    {
                throw runtime_error("Error: Division by zero is not allowed.");
            }
            return numerator / denominator;
        }
};

int main() 
{
    Calculator calc;
    double num, den;

    num = 10;
    den = 0;

    try 
	{
        double result = calc.divide(num, den);
        cout << "Result: " << result << endl;
    } 
	catch (const runtime_error& e) 
	{
        cout << e.what() << endl;
    }
}
/*
output = Error: Division by zero is not allowed.
*/
