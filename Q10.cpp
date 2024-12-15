#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " :";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of all elements of the arry is :" << sum;

    return 0;
}