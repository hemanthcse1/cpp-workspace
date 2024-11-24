#include <iostream>

int fib(int num){
    if (num <= 1)
    {
       return 1;
    }
    return fib(num-1)+fib(num-2);
}

int main(){
    
    std::cout << fib(5) << std::endl;

    return 0;
}