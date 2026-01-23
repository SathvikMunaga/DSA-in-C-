#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binary_search(vector<int> arr, int target)
{
    int st = 0; int end = arr.size() - 1;
    while(st <= end){
        int mid = (st + end) / 2;
        if(target < arr[mid]){
            end = mid - 1;
        }
        else if(target > arr[mid]){
            st = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {1,2,3,4,5,6,7};
    int target = 5;
    cout<<binary_search(arr1, target)<<endl;
}