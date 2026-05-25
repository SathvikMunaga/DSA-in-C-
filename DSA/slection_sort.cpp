#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &nums)
{
    int n = nums.size();
    for(int i = 0; i < n - 1; i++){
        int smallestIDX = i; // starting of unsorted array
        for(int j = i + 1; j < n; j++){
            if(nums[j] < nums[smallestIDX]){
                smallestIDX = j;
            }
        }
        swap(nums[i], nums[smallestIDX]);
    }
}
int main() {
    vector<int> nums = {1,3,5,9,36,4,22};
    selection_sort(nums);
    for (int x : nums) cout << x << " ";
}