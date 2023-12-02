#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;
    while (s--)
    {
        int n;
        int cntr = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < n; j++)
        {
            for (int i = j + 1; i < n; i++)
                if (a[i] >= a[i - 1])
                {
                    cntr++;
                }
                else
                    break;
        }

        cout << cntr + n << endl;
    }
}
