// according to leetcode we have to do this question wih log(n) time complexity so we will use binary search

#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 1, end = arr.size() - 2;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        if (arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()

{
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    cout << "The index of the peak element in the array is: " << peakIndexInMountainArray(arr);
    return 0;
}