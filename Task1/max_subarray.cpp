#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxi = 0, s;
    cin >> s;
    while (s--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = 0; i < n; i++)
        {
            maxi = a[i];
            for (int j = i + 1; j < n; j++)
            {
                maxi = max(maxi, a[j]);
                cout << maxi << " ";
            }
        }
        cout << endl;
    }
    return 0;
}