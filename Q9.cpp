#include <iostream>
using namespace std;
int main()
{
    string st;
    cout << "Enter the string :";
    cin >> st;
    int l = 0, h = st.length() - 1;
    while (l < h)
    {
        if (st[l] != st[h])
        {
            cout << "String is not palindrome";
            return -1;
        }
        l++;
        h--;
    }
    cout << "String is palindrome";
    return 0;
}