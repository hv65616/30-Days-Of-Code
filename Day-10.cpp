#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> bin;
    while (n > 0)
    {
        int rem;
        rem = n % 2;
        bin.push_back(rem);
        n = n / 2;
    }
    int temp = 1;
    int maxi = 1;
    for (int i = 0; i < bin.size(); i++)
    {

        if (bin[i] == 1 && bin[i + 1] == 1)
        {
            maxi++;
            temp = max(temp, maxi);
        }
        else
        {
            maxi = 1;
        }
    }
    cout << temp << endl;
    return 0;
}