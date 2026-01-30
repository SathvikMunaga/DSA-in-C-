#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> nums = {1,3,5,9,36,4,22};
    selection_sort(nums);
    for (int x : nums) cout << x << " ";
}