#include <iostream>
#include <cmath>
using namespace std;

class Shape 
{
    private:
        string color;
        double area;

    public:
        void setColor(string col) 
		{
            color = col;
        }

        string getColor() 
		{
            return color;
        }

        double getArea() 
		{
            return area;
        }

        virtual void calculateArea() = 0; 
};

class Circle : public Shape 
{
    private:
        double radius;

    public:
        Circle(double r) 
		{
            radius = r;
        }

        void calculateArea() override 
		{
            double area = M_PI * radius * radius;
            cout << "Area of Circle: " << area << endl;
        }
};

class Rectangle : public Shape 
{
    private:
        double length;
        double width;

    public:
        Rectangle(double l, double w) 
		{
            length = l;
            width = w;
    }

    void calculateArea() override 
	{
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() 
{
    Circle circle(5.0);
    circle.setColor("Red");
    cout << "Color of Circle: " << circle.getColor() << endl;
    circle.calculateArea(); 

    Rectangle rectangle(10.0, 4.0);
    rectangle.setColor("Blue");
    cout << "Color of Rectangle: " << rectangle.getColor() << endl;
    rectangle.calculateArea(); 
}
/*
output = Color of Circle : Red
         Area of Circle : 78.5398
         Color of Rectangle : Blue
         Area of Rectangle : 40
*/