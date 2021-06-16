#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day1, month1, year1;
    cin >> day1 >> month1 >> year1;
    int day2, month2, year2;
    cin >> day2 >> month2 >> year2;
    int fine = 0;
    if(day1>day2 && month1==month2 && year1==year2)
    {
        fine = (day1-day2)*15;
    }
    else if(month1>month2 && year1==year2)
    {
        fine = (month1-month2)*500;
    }
    else if(year1>year2)
    {
        fine = 10000;
    }
    else
    {
        fine = 0;
    }
    cout<<fine<<endl;
    return 0;
}