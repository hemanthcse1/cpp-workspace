#include <iostream>


std::string isPalindrom(std::string str){
    std::string isPalindrom = "String is a Palindrom";
    for (int i = 0; i < str.size()/2; i++)
    {
       if (str[i] != str[str.size() - i -1])
       {
        isPalindrom = "String is not a Palindrom";
        break;
       }
    }

    return isPalindrom;
}

int main(){

    std::string str = "madam";
  
    std::cout << "Result: " << isPalindrom(str) << std::endl;

    return 0;
}