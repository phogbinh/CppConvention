#include <iostream>
#include <map>
#include <string>

using namespace std;

void main()
{
    map<int, string> personIDs =
    {
        {1, "Walt"},
        {2, "Kenrick"}
    };

    for (auto p : personIDs)
    {
        cout << p.first << " " << p.second << endl;
    }

    system("pause");
}