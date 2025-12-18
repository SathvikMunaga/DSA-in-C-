#include<iostream>
#include <climits> //for int_max and int_min func
using namespace std;
int main(){
    int marks[5] = {91,82,93,64,55};
    int size = 5;
    for(int i = 0; i < size; i++)
    {
        cout<<marks[i];
        cout<<endl;
    }
    //finding largest and smalles number in an ARRAY
    int size1 = 6;
    int nums[size1];
    for(int i = 0; i < size1; i++){
        cin >> nums[i];
    }
    int smallest = INT_MAX; // +infinity
    int largest = INT_MIN; // -infinity

    //writing with loops;

    for(int i = 0; i < size1; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
        cout<<"Smallest = "<<smallest; 
        cout<<endl;
        cout<<"Largest = "<<largest;
        cout<<endl;

    //writing the same functions with shorthend form

    for(int i = 0; i < size1; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
        cout<<"Smallest = "<<smallest; 
        cout<<endl;
        cout<<"Largest = "<<largest;
        cout<<endl;
}
