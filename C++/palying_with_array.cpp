#include <iostream>
using namespace std;

int main(){
    int marks[5] = {45, 63, 62, 75, 15};

    cout << "Printing the values without using any loop" << endl;
    cout << "****************************************" << endl;
    cout << "The value of mark 0 is " << marks[0] << endl;
    cout << "The value of mark 1 is " << marks[1] << endl;
    cout << "The value of mark 2 is " << marks[2] << endl;
    cout << "The value of mark 3 is " << marks[3] << endl;
    cout << "The value of mark 4 is " << marks[4] << endl;

    cout << "Printing the values using for loop" << endl;
    cout << "****************************************" << endl;
    for (int i = 0; i < 5; i++){
        cout << "The value of mark " << i << " is " << marks[i] << endl;
    }

    cout << "Printing the values using while loop" << endl;
    cout << "****************************************" << endl;
    int i = 0;
    while (i < 5){
        cout << "The value of mark " << i << " is " << marks[i] << endl;
        i++;
    }

    cout << "Printing the values using do while loop" << endl;
    cout << "****************************************" << endl;
    int e = 0;
    do{
        cout << "The value of mark " << e << " is " << marks[e] << endl;
        e++;
    } while (e < 5);

    return 0;
}