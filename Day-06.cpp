#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int len = str.length();
        string str11 = "";
        string str12 = "";
        for (int j = 0; j < len; j++)
        {
            if (j % 2 == 0)
            {
                str11 = str11 + str[j];
            }
            else
            {
                str12 = str12 + str[j];
            }
        }
        cout << str11 + " " + str12 << endl;
    }
    return 0;
}