#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void bubble_sort(vector<int> &arr)
{
    int n = arr.size();
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] < arr[j + 1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return;
}

int main()
{
    vector<int> nums = {1,2,3,4,5};
    bubble_sort(nums);
    for(int el : nums){
        cout<<el<<endl;
    }
    return 0;
}