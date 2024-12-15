#include <iostream>
using namespace std;
class Rectangle
{

private:
    float length;
    float width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    float calculateArea()
    {
        return length * width;
    }

    float calculatePerimeter()
    {
        return 2 * (length + width);
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};
int main()
{

    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect(length, width);

    cout << "\n--- Rectangle Details ---" << endl;
    rect.display();

    return 0;
}