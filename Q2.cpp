#include <iostream>
using namespace std;
int main()
{
    int n, n1 = 0, n2 = 1, n3;
    cout << "Enter number of terms :";
    cin >> n;
    cout << "Fibonacci Series is :" << n1 << ", " << n2;
    for (int i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        cout << ", " << n3;
        n1 = n2;
        n2 = n3;
    }
    return 0;
}