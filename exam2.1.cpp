#include <iostream>
using namespace std;

class Rectangle
{
    private:
        double length;
        double width;

    public:
        Rectangle()
		{
            length = 0;
            width = 0;
        }
        
        void setLength(double l) 
		{
            if (l >= 0) length = l;
            else cout << "Length must be non-negative.\n";
        }

        void setWidth(double w) 
		{
            if (w >= 0) width = w;
            else cout << "Width must be non-negative.\n";
        }

        double getLength() 
		{
            return length;
        }

        double getWidth() 
		{
            return width;
        }

        double calculateArea() 
		{
            return length * width;
        }
};

int main() 
{
    Rectangle rect;

    rect.setLength(10.5);
    rect.setWidth(4.2);
    
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;

    cout << "Area of rectangle: " << rect.calculateArea() << endl;

}
/*
output = length -> 10.5
         width -> 4.2
         Area of rectangle -> 44.1 
*/
