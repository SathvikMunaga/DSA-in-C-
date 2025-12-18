#include <iostream>
#include <climits>
using namespace std;
// sum of elements in the array
int sumOfnums(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << sum<< endl; 
    return sum;
}
//swaping min term and max term in an array
void swapMinMax(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minindex = 0, maxindex = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            minindex = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
        maxindex = i;
        }
    }
    int temp = arr[minindex];
    arr[minindex] = arr[maxindex];
    arr[maxindex] = temp;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    sumOfnums(arr, size);

    swapMinMax(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i];
    }

    return 0;
}