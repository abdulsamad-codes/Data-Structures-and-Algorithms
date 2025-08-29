#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// first step is that pick a pivot point in the array
// if values greater than pivot so shift them to the left side and vice versa
// and then individually call that function for both parts i mean right and left

void merge(vector<int> &arr, int start, int end, int mid)
{
    int i = start, j = mid + 1;
    vector<int> temp;
    while ((i <= mid) && (j <= end))
    {
        if (arr[i] <= arr[j])
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
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i + start] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + ((end - start) / 2);
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, end, mid);
    }
}

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {4, 1, 2, 3};
    mergeSort(arr, 0, arr.size() - 1);
    printArray(arr);
    return 0;
}