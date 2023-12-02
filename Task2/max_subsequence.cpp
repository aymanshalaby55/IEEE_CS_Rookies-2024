#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    char n[num];
    cin >> n;
    int j = 0;
    for (int i = 0; i < num; i++)
    {
        if (n[i] != n[i + 1])
        {
            j++;
        }
    }
    cout << j;
}