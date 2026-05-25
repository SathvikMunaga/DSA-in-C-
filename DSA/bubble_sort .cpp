#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubble_sort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> nums = {1, 4, 6, 3, 9, 7, 544, 64, 8};
    bubble_sort(nums);
    for (int el : nums)
    {
        cout << el << endl;
    }
    return 0;
}