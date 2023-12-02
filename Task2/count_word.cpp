#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#define ll long long
using namespace std;

void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{

    init();
    string s;
    getline(cin, s);
    int counter = 0;
    for (int i = 1; i < s.size(); i++)
    {

        if ((s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == '!') && isalpha(s[i - 1]))
        {
            counter++;
        }
    }
    if (isalpha(s.back()))
        counter++;
    cout << counter << endl;
}