#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    try
    {
        int x = stoi(S);
        cout << x << endl;
    }
    catch (...)
    {
        cout << "Bad String" << endl;
    }
    return 0;
}