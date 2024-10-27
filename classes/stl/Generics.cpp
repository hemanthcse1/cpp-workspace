#include <iostream>
using namespace std;

template <typename T>
class Calculator{
public:
    T add(T a, T b){
        return a + b;
    }

    T substract(T a, T b){
        return a - b;
    }

    T divide(T a, T b){
        if (b == 0)
        {
           return 0;
        }
        return a / b;
    }

    T multiply(T a, T b){
        return a * b;
    }
};

int main(){

    Calculator<int> calculator;

    cout<< "Sum : "<< calculator.add(2, 3) << endl;
    cout << "Subtract : "<< calculator.substract(5,3) << endl;
    cout << "Divide : "<< calculator.divide(5,2) << endl;
    cout << "Multiply : "<< calculator.multiply(5,2) << endl;

    Calculator<float> floatCalculator;
    cout<< "Sum : "<< floatCalculator.add(2.2, 3.3) << endl;
    cout << "Subtract : "<< floatCalculator.substract(5.2,3.2) << endl;
    cout << "Divide : "<< floatCalculator.divide(5,2) << endl;
    cout << "Multiply : "<< floatCalculator.multiply(5.2,2) << endl;

    return 0;
}