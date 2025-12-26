#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// optimized method to find the majority element in an array
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int fre = 1, ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            fre++;
        }
        else
        {
            fre = 1;
            ans = nums[i];
        }
        if (fre > n / 2)
        {
            return ans;
        }
    } 
    return ans;
}
int main()
{
    vector<int> vec = {1,1,1,1,2,3,3,4,3};
    cout<<majorityElement(vec)<<endl;
    return 0;
}