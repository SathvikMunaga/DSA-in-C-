#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//brute force approach for pair sum
vector<int> pairSum(vector<int> num, int target)
{
    vector<int> ans;
    int n = num.size();
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if ( num[i] + num[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
// Linear search operation on vector
int Linear(const vector<int> &nums, int target)
{
    int index = 0;
    for (int val : nums)
    {
        if (val == target)
            return index;
        index++;
    }
    return -1;
    cout << endl;
}
// reverse the vector suing in function
void rev(vector<int>& new1)
{
    reverse(new1.begin(), new1.end());
}

int main()
{
    const vector<int> nums = {1, 2, 3, 4};
    int target = 4;
    int result = Linear(nums, target);
    if (result != -1)
        cout << "Found at index " << result;
    else
        cout << "Not found";
    cout<<endl;
    vector<int> new1 = {1,2,3,4};
    rev(new1);
    for (int val : new1)
    {
        cout << val << " ";
    }
    //Brute forec maximum subarray sum
    cout<<endl;
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int maxsum = INT_MIN;
    for(int st = 0; st < n; st++)
    {
        int csum = 0;
        for(int end = st; end < n; end++)
        {
            csum += arr[end];
            maxsum = max(csum, maxsum);
        }
    }
    cout<<"Maximum sum of Subarray is "<<maxsum<<endl;
//
//
    vector<int> num = {2,7,5,6,7};
    int target1 = 9;
    vector<int> ans = pairSum(num, target1);
    cout<<ans[0]<<", "<<ans[1]<<endl;
    return 0;
}
