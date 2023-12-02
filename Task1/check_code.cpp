#include <iostream>
using namespace std;
int main()
{
    int a, b, cntr = 0;
    cin >> a >> b;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-')
        {
            break;
        }
        cntr++;
    }

    int cntr2 = 0;
    int temp = cntr;
    for (s[temp]; temp < s.size(); temp++)
    {
        if (s[temp] != '-')
        {
            cntr2++;
        }
    }
    // cntr2-=1;
    if (cntr == a && cntr2 == b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}