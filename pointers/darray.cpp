#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int* myArray = new int[size];

    for (int i = 0; i < size; i++)
    {
       cout << "Enter value at myArray["<<i<<"]";
       cin >> myArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << "  ";
    }
    
    return 0;
}