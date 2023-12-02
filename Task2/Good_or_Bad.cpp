#include <iostream>
#include <strings.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string word;
        cin >> word;
        string check = "010";
        string check2 = "101";
        bool flag = 0;
        for (int i = 0; i < word.size(); i++)
        {

            if ((word[i] == '0' && word[i + 1] == '1' && word[i + 2] == '0') || (word[i] == '1' && word[i + 1] == '0' && word[i + 2] == '1'))
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Bad" << endl;
        }
        if (flag == 1)
        {
            cout << "Good" << endl;
        }
    }
}