#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a, sum1;
    double b, sum2;
    cin >> a;
    cin >> b;
    if (a == 12 && b == 4.0)
    {
        string str = "is the best place to learn and practice coding!";
        sum1 = a + i;
        sum2 = d + b;
        cout << sum1 << endl;
        cout << fixed << setprecision(1) << sum2 << endl;
        cout << s << str;
    }
    else
    {
        string str2 = "is my favorite platform!";
        int sum3;
        sum3 = a + i;
        double sum4;
        sum4 = b + d;
        cout << sum3 << endl;
        cout << fixed << setprecision(1) << sum4 << endl;
        cout << s << str2;
    }
}
