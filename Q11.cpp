#include <iostream>
using namespace std;
int main()
{
    int n, smallest = INT16_MAX, largest = 0;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " :";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Smallest and largest nuber of the arry is :" << smallest << " & " << largest;
    return 0;
}