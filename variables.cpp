#include <iostream>

int main(){
    std::string name;
    int age;
    double salary;
    char grade;
    bool isPassed;

    std::cout << "Enter your Name" << std::endl;
    std::getline(std::cin, name);

    std::cout << "Enter your age" << std::endl;
    std::cin >> age;

    std::cout << "Enter your salary" << std::endl;
    std::cin >> salary;

    std::cout << "Enter your grade" << std::endl;
    std::cin >> std::ws >> grade;

    std::cout << "Did you pass the exam? (1 for true, 0 for false)" << std::endl;
    std::cin >> isPassed;

    std::cout<< "User Profile" <<std::endl;
    std::cout<< "Name:      "<< name << std::endl;
    std::cout<< "Age:       "<< age << std::endl;
    std::cout<< "Salary:    "<< salary << std::endl;
    std::cout<< "Grade:     "<< grade << std::endl;
    std::cout<< "Result:    "<< isPassed << std::endl;


    return 0;
}