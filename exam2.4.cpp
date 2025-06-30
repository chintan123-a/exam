#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Shape 
{
    private:
        string color;

    public:
        void setColor(string col) 
		{
            color = col;
        }

        string getColor() 
		{
            return color;
        }

        virtual void calculateArea() = 0; 
		virtual void display() = 0; 
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
        
        void display() override 
		{
            cout << "Shape: Circle\n";
            cout << "Color: " << getColor() << endl;
            cout << "Radius: " << radius << endl;
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

        void display() override 
		{
            cout << "Shape: Rectangle\n";
            cout << "Color: " << getColor() << endl;
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

int main() 
{
    Circle circle(5.0);
    circle.setColor("Red");

    Rectangle rectangle(10.0, 4.0);
    rectangle.setColor("Blue");

    Shape* shapes[2]; 
    shapes[0] = &circle;
    shapes[1] = &rectangle;

    cout << "\nDisplaying Shape Information:\n";
    for (int i = 0; i < 2; i++) 
	{
        shapes[i]->display();  
        shapes[i]->calculateArea();  
        cout << endl; 
    }
}
/*
output = Displaying shape information :
         Shape : circle
         color : red
         radius : 5
         Area of circle : 78.5398
         
         Shape : Rectangle
         color : Blue
         Langth : 10, width: 4
         Area of Rectangle : 40
*/
