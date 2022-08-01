#include <iostream>
using namespace std;

int main()
{
    int goat;
    cout << "WECOME TO MULTIPLICATION TABLE GENERATOR" << endl;
    cout << "Enter the number:" << endl;
    cin >> goat;
    cout << "The multiplication table is :" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " X " << goat << " = " << (goat * i) << endl;
    }
    return 0;
}
