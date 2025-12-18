#include<iostream>
#include <climits> //for int_max and int_min func
using namespace std;
//function for linear search 
int linear_search(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    // int marks[5] = {91,82,93,64,55};
    // int size = 5;
    // for(int i = 0; i < size; i++)
    // {
    //     cout<<marks[i];
    //     cout<<endl;
    // }
    // //finding largest and smalles number in an ARRAY
    // int size1 = 6;
    // int nums[size1];
    // for(int i = 0; i < size1; i++){
    //     cin >> nums[i];
    // }
    // int smallest = INT_MAX; // +infinity
    // int largest = INT_MIN; // -infinity
    // int S_index = -1;
    // int L_index = -1;

    // //writing with loops;

    // for(int i = 0; i < size1; i++){
    //     if(nums[i] < smallest){
    //         smallest = nums[i];
    //         S_index = i;
    //     }
    //     if(nums[i] > largest){
    //         largest = nums[i];
    //         L_index = i;
    //     }
    // }
    //     cout<<"Smallest = "<<smallest; 
    //     cout<<endl;
    //     cout<<"Largest = "<<largest;
    //     cout<<endl;
    //     cout<<"Index of smallest number = "<<S_index;
    //     cout<<"Index of largest number = "<<L_index;

    // //writing the same functions with shorthend form

    // for(int i = 0; i < size1; i++)
    // {
    //     smallest = min(nums[i], smallest);
    //     largest = max(nums[i], largest);
    // }
    //     cout<<"Smallest = "<<smallest; 
    //     cout<<endl;
    //     cout<<"Largest = "<<largest;
    //     cout<<endl;

        //array for linear search 
        int array[] = {1,2,3,4,5,6,7};
        int size2 = 6;
        int target = 4;
        cout<<linear_search(array,size2,target);
        return 0;
}
