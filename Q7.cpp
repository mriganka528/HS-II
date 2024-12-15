#include <iostream>
using namespace std;
int main()
{
    int num, rem, res = 0;
    cout << "Enter the number :";
    cin >> num;
    int temp = num;
    while (num > 0)
    {
        rem = num % 10;
        res = res * 10 + rem;
        num /= 10;
    }
    cout << "Reverse of " << temp << " is: " << res;
    return 0;
}