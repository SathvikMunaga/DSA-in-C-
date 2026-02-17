#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void insertion_sort(vector<int>& nums)
{
    int n = nums.size();
    for(int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while(j > 0 && nums[j - 1] > nums[j]){
            int temp = nums[j-1];
            nums[j - 1] = nums[j];
            nums[j] = temp;
            j--;
        }
    }
}
int main()
{
    vector<int> nums = {1,4,6,3,9,7,544,64,8};
    insertion_sort(nums);
    for(int el : nums){
        cout<<el<<endl;
    }
    return 0;
}