#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        int a;
        a = n * i;
        cout << n << " x " << i << " = " << a << endl;
    }
    return 0;
}