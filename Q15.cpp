#include <iostream>
using namespace std;
int linear_search(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " :";
        cin >> arr[i];
    }
    cout << "Enter the element you want to search :";
    cin >> key;
    cout << "Index of " << key << " is :" << linear_search(arr, n, key);
    return 0;
}