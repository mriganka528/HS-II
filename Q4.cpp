#include <iostream>
using namespace std;
void swapp(int *n1, int *n2)
{
    int c = *n1;
    *n1 = *n2;
    *n2 = c;
}
int main()
{
    int n1, n2;
    cout << "Enter both the numbers :";
    cin >> n1 >> n2;
    cout << "Before swapping n1=" << n1 << ", n2= " << n2;
    swapp(&n1, &n2);
    cout << "\nAfter swapping n1=" << n1 << ", n2= " << n2;
    return 0;
}