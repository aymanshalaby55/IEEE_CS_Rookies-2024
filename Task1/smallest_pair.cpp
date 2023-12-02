#include <iostream>
using namespace std;

int main()
{

    int n, test, sum = 0, small, small2 = 0;
    cin >> test;
    bool flag = 1;
    while (test--)
    {
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                sum = a[i] + a[j] + j - i;
                if (flag == 0 && small > sum)
                {
                    small = sum;
                }
                if (flag == 1)
                {
                    small = sum;
                    flag = 0;
                }
                sum = 0;
            }
        }

        cout << small << endl;
        flag = 1;
    }
}