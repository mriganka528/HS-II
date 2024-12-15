#include <iostream>
using namespace std;
int main()
{

    int n, dig, sum = 0;
    cout << "Enter any positive number :";
    cin >> n;
    while (n > 0)
    {
        dig = n % 10;
        sum += dig;
        n /= 10;
    }
    cout << "Sum of digits is :" << sum;
    return 0;
}