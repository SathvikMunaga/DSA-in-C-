#include <iostream>
#include <vector>
using namespace std;

// Merge function
void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Remaining left half
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // Remaining right half
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy back to original array
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[st + idx] = temp[idx];
    }
}

// Merge Sort
void MergeSort(vector<int> &arr, int st, int end)
{
    if (st >= end)
        return;

    int mid = st + (end - st) / 2;

    MergeSort(arr, st, mid);
    MergeSort(arr, mid + 1, end);

    merge(arr, st, mid, end);
}

int main()
{
    vector<int> arr = {35,17,16,8,21,26,26,30,40};

    MergeSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}