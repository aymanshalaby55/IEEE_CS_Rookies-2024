#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    string m = "hello";
    int j = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == m[j])
        {
            j++;
        }
        if (j == 5)
        {
            break;
        }
    }
    if (j == 5)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}