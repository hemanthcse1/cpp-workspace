#include <iostream>
using namespace std;

void swap(int nums[], int i, int j){
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
};

void bubble(int nums[], int n){

    for(int i = 0; i< n; ++i){
        for (int j = 0; j < n-i-1; ++j)
        {
            if (nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
            }
        }
    }
};


int main(){

    int nums[10] = {8,3,2,16,7,4,12,10,1,9};
    int n = 10;

    bubble(nums,n);

    cout << "Bubble sort" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " " ;
    }
    

    return 0;
}