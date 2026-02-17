#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubble_sort(vector<int>& nums)
{
    int n = nums.size();
    for(int i = n - 1; i > 0; i--)
    {
        int didSwap = 0;
        for(int j = 0; j < i; j++)
        {
            if(nums[j] > nums[j + 1])
            {
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}
int main()
{
    vector<int> nums = {1,4,6,3,9,7,544,64,8};
    bubble_sort(nums);
    for(int el : nums){
        cout<<el<<endl;
    }
    return 0;
}