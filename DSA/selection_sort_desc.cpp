#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void selection_sort(vector<int> &arr)
{
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int smallest = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[smallest]){
                swap(arr[j], arr[smallest]);
            }
        }
    }
    return;
}
int main()
{
    vector<int> nums = {1,2,3,4,5};
    selection_sort(nums);
    for(int el : nums){
        cout<<el<<endl;
    }
    return 0;
}