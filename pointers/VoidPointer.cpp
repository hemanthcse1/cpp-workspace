#include <iostream>
using namespace std;

void print(void* ptr, char type){
    switch (type)
    {
    case 'i':
            cout << *((int*) ptr)<< endl;
        break;
    case 'c':
            cout << *((char*) ptr) << endl;
        break;
    
    case 'f':
            cout << *((float*) ptr) << endl;
        break;

    case 'd':
            cout << *((double*) ptr) << endl;
        break;

    case 's':
            cout << *((string*) ptr) << endl;
        break;
    default:
            cout << "not matching data type";
        break;
    }
}

int main(){

    int number = 10;
    float floatNumber = 12.4;
    double doubleNumber = 33.33;
    char character = 'H';
    string name = "Hemanth";

    print(&number, 'i');
    print(&floatNumber, 'f');
    print(&doubleNumber, 'd');
    print(&character,'c');
    print(&name,'s');

}