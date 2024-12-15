#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num == 0 && num == 1)
    {
        return false;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void print_all(int n)
{
    cout << "All prime numbers between 1 and " << n << " are :";
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << ", ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter  value of N :";
    cin >> n;
    print_all(n);
    return 0;
}