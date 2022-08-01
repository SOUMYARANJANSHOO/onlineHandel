#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER::";
    cin >> n;
    int list[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "ENTER A NUMBER::";
        int j;
        cin >> j;
        list[i] = j;
    }

    cout << "ENTER THE NUMBER YOU WANT TO SEARCH::";
    cin >> key;
    bool flag = true;

    for (int i = 0; i < n; ++i)
    {
        if (list[i] == key)
        {
            cout << "THE NUMBER IS AT " << i + 1 << " POSITION OF THE ARRAY";
            flag = false;
        }
    }
    if (flag)
    {
        cout << "CANNOT FIND ANY INPUT OF THAT NUMBER";
    }
    return 0;
}