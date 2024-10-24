#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    string company;
    int age;

    Employee(){

    }

    Employee(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age;
    }
    void introduceYourself(){
        cout<< "Name : " << name << endl;
        cout << "Company : "<<company << endl;
        cout << "Age : " << age << endl;
    }
};

int main(){

    // Employee emp1;
    // emp1.name = "Hemanth";
    // emp1.company = "Microsoft";
    // emp1.age = 30;

    // emp1.introduceYourself();

    // Employee emp2;
    // emp2.name = "Kumar";
    // emp2.company = "Google";
    // emp2.age = 32;

    // emp2.introduceYourself();


    Employee emp1 = Employee("Hemanth","Microsoft",30);
    emp1.introduceYourself();

    Employee emp2 = Employee("Kumar","Amazon",30);
    emp2.introduceYourself();

    return 0;
}