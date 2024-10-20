#include <iostream>

int main(){
    std::cout << "Hello C++ world" << std::endl;

    // variables 
    int age = 30;
    double salary = 300;
    char grade = 'A';
    bool isPassed = true;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout<<"Grade: "<<grade<< std::endl;
    std::cout<<"isPassed: "<<isPassed<<std::endl;


    // read input
    std::cout<< "Enter your age"<< std::endl;
    std::cin >> age;
    std::cout<< "your age is : "<< age << std::endl;


    return 0;
}