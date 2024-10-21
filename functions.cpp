#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

void increment(int num){
    num = num + 1;
}

void incrementWithReference(int &num){
    num = num + 1;
}

void incrementByPointer(int *num){
    *num = *num + 1;
}

double multiplication(double a, double b){
    return  a * b;
}

int main(){
    int result = add(2,3);
  //  cout << "result: "<< result << endl;

    int a = 5;
    increment(a);
    cout << "Value of A: "<< a << endl;

    int *aa = &a;
    incrementWithReference(a);
    cout << "Address of a: "<< a << endl;

    int b = 10;
    incrementByPointer(&b);
    cout << "Pointer value: "<< b << endl;

    double multiResult = multiplication(2,3);
    cout << "Multiplication result: " << multiResult << endl;


    cout << "Add : "<< add(2, 3) << endl;
    cout << "Add : "<< add(2.3,2.7) << endl;
    cout << "Add : "<< add(2,3,5) << endl;

    return 0;
}

