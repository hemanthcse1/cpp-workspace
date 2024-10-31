#include <iostream>
using namespace std;

int findMin(int num[], int size){
    int min = num[0];
    for (int i = 1; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
        
    }
    return min;
}

int findMax(int num[], int size){
    int max = num[0];
    for (int i = 1; i < size; i++)
    {
       if (num[i]> max)
       {
            max = num[i];
       }
       
    }
    return max;
}

void findMinAndMax(int nums[], int size, int* min, int* max){
    for (int i = 1; i < size; i++)
    {
        if (nums[i]> *max)
        {
            *max = nums[i];
        }
        if (nums[i] < *min)
        {
            *min = nums[i];
        }
    }
}

int main(){
    const int size = 5;
    int numbers[size] = {4,12,-2,16,1};

    cout << "Minimum number is: "<< findMin(numbers,size) << endl;
    cout << "Maximum Number is: "<< findMax(numbers,size) << endl;


    int min = numbers[0];
    int max = numbers[0];

    findMinAndMax(numbers,size, &min, &max);
    cout<< "Min value is: "<< min << endl;
    cout<< "Max value is: "<< max << endl;

    return 0;
}