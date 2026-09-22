#include <iostream>
using namespace std;
class Shape
{
private:
    float radius;
    float length;
    float width;
public:
    // Constructor for circle
    Shape(float r)
    {
        radius = r;
        cout << "Circle constructor called" << endl;
    }
    // Constructor for rectangle
    Shape(float l, float w)
    {
        length = l;
        width = w;
        cout << "Rectangle constructor called" << endl;
    }
    // Perimeter of circle
    float circlePerimeter()
    {
        return 2 * 3.14159 * radius;
    }
    // Perimeter of rectangle
    float rectanglePerimeter()
    {
        return 2 * (length + width);
    }
    // Destructor
    ~Shape()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    float r, l, w;
    cout << "Enter radius of circle: ";
    cin >> r;
    Shape circle(r);
    cout << "Perimeter of Circle = "
         << circle.circlePerimeter() << endl;
    cout << "\nEnter length of rectangle: ";
    cin >> l;
    cout << "Enter width of rectangle: ";
    cin >> w;
    Shape rectangle(l, w);
    cout << "Perimeter of Rectangle = "
         << rectangle.rectanglePerimeter() << endl;
    return 0;
}