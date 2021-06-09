#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double metalcost;
    int tipPercent;
    int taxPercent;
    int totalcost;
    double tip;
    double tax;

    cin >> metalcost;
    cin >> tipPercent;
    cin >> taxPercent;

    tip = (metalcost * tipPercent) / 100;
    tax = (metalcost * taxPercent) / 100;

    totalcost = round(metalcost + tip + tax);

    cout << totalcost << endl;
    return 0;
}