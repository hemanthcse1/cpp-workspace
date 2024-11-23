#include <iostream>


int main(){

    int n = 5;
    int* ptr = &n;

    std::cout << "Value of n: "<< n << std::endl;
    std::cout << "Address of n: "<< ptr << std::endl;

    std::cout << "Value of ptr: "<< ptr << std::endl;
    std::cout << "Value of n using ptr: "<< *ptr << std::endl;


    *ptr = 10;

    std::cout << "Updated value at n: "<< *ptr << std::endl;
    std::cout << "Value at N: "<< n << std::endl;

    return 0;
}