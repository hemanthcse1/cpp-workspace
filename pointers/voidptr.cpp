#include <iostream>

void printNumber(int* number){
    std::cout << *number << std::endl;
}

void printChar(char* character){
    std::cout << *character << std::endl;
}


void print(void* data, char type){
    switch (type)
    {
    case 'i': 
        std::cout << *(int*)data << std::endl;
        break;
    
    default:
    std::cout << *(char*)data << std::endl;
        break;
    }
}


int main(){

    int number = 5;
    char character = 'H';

    printNumber(&number);
    printChar(&character);

    // using void pointer
    print(&number,'i');
    print(&character, 'c');


    return 0;
}