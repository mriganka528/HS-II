#include <iostream>
using namespace std;
int main()
{

    string st;
    cout << "Enter the sentence :";
    cin >> st;
    int cout_v = 0, count_c = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
        {
            cout_v++;
        }
        count_c++;
    }
    cout << "Total number of Vowels and Consonants present in a sentence is :" << cout_v << " & " << count_c;
}