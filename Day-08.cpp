#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string name;
    long number;
    map<string, long> phonebook;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> number;
        phonebook[name] = number;
    }
    while (cin >> name)
    {
        if (phonebook.find(name) != phonebook.end())
        {
            cout << name << "=" << phonebook.find(name)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}