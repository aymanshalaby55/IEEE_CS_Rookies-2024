#include <iostream>
#include <strings.h>
using namespace std;

int main()
{
    string conver;
    cin >> conver;
    for (int i = 0; i < conver.size(); i++)
    {
        if (islower(conver[i]))
        {
            conver[i] -= 32;
            continue;
        }
        if (isupper(conver[i]))
        {
            conver[i] += 32;
            continue;
        }
        if (conver[i] = ',')
        {
            conver[i] = ' ';
            continue;
        }
    }
    cout << conver;

    return 0;
}