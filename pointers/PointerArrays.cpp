#include<iostream>
using namespace std;

int main(){

    int number[5] = {3,5,7,9,2};

    cout << number << endl;
    cout << &number[0] << endl;

    cout << number[2] << endl;
    cout << *(number + 2) << endl;

    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
       cout << "Enter Number: ";
       cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(numbers + i) << endl;
    }
    
    cout<< numbers[0] << endl;


    return 0;
}