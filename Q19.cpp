#include <iostream>
using namespace std;

class Demo
{
private:
    int value;

public:
    Demo(int v)
    {
        value = v;
        cout << "Constructor called! Value initialized to " << value << endl;
    }

    void displayValue()
    {
        cout << "The value is: " << value << endl;
    }

    ~Demo()
    {
        cout << "Destructor called! Value " << value << " is being destroyed." << endl;
    }
};

int main()
{
    cout << "Creating an object of class Demo..." << endl;
    Demo obj(42);
    obj.displayValue();

    cout << "Exiting the main function..." << endl;
    return 0;
}
