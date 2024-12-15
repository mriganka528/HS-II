#include <iostream>
using namespace std;
void bubbleSort(int *arr, int size)
{

    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printarr(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "  " << arr[i];
    }
    cout << "\n";
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

    cout << "Before sorting the array \n";
    printarr(arr, n);

    bubbleSort(arr, n);

    cout << "After sorting the array \n";
    printarr(arr, n);
}