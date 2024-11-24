#include <iostream>


int main(){
    int arr[5] = {2,3,5,7,9};

    std::cout<< arr<<std::endl; // address of array arr
    std::cout << arr[0] << std::endl; // get item at potision 0

    std::cout << *(arr + 1) << std::endl; // get at first position


    return 0;
}