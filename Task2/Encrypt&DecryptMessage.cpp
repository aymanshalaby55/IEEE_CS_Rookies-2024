#include <bits/stdc++.h>
using namespace std;

// PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"

int main()
{
    string o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < o.size(); j++)
            {
                if (s[i] == o[j])
                {
                    cout << k[j];
                    break;
                }
            }
        }
    if (n == 2)
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < o.size(); j++)
            {
                if (s[i] == k[j])
                {
                    cout << o[j];
                    break;
                }
            }
        }
}