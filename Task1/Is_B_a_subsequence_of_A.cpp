#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int s[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s[i];
    }
    int cntr = 0;
    int test = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[test] == a[i])
        {
            cntr++;
            test++;
        }
    }
    if (cntr == m)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
