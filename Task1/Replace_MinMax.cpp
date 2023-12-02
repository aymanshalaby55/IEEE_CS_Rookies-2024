#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, maxi, mini, m = 0, w = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    maxi = a[0];
    mini = a[0];
    for (int i = 1; i < n; i++)
    {
        if (maxi < a[i])
        {
            maxi = a[i];
            m = i;
        }
        if (mini > a[i])
        {
            mini = a[i];
            w = i;
        }
    }

    a[m] = mini;
    a[w] = maxi;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}