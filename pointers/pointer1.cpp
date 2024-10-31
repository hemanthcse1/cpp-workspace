#include <iostream>
using namespace std;

void printNumber(int* ptr){
    cout << *ptr << endl;
}

void printChar(char* ptr){
    cout << *ptr << endl;
}

void printFloat(float* ptr){
    cout << *ptr << endl;
}

void printDouble(double* ptr){
    cout << *ptr << endl;
}

int main(){

    int n = 5;
    int* ptr = &n;
    cout << n << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    int intNumber = 20;
    float floatNumber = 20.3;
    double doubleNumber = 33.33;
    char character = 'h';

    printNumber(&intNumber);
    printFloat(&floatNumber);
    printDouble(&doubleNumber);
    printChar(&character);


    return 0;
}