#include <iostream>

int factorial(int num){
    if (num <= 1)
    {
        return 1;
    }
    return num * factorial(num -1);
}

int main(){

    std::cout << "Factorial of 5: "<< factorial(5) << std::endl;

    return 0;
}