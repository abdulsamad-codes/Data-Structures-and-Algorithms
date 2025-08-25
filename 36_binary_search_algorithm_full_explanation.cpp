/*
Linear search Algorithm -> Time Complexity -> O(n)
Binary search Algorithm -> Time Complexity -> O(log n)
that's why we use binary search algorithm to save our time
and binary search algorithm can only be applied on sorted array
as we know that we can apply linear search algorithm on any type of array
but binary search algorithm on the other hand can only be applied
on sorted array
like array in ascending or descending order
in short we can say that array should be monotonous
to do binary search so first we find the mid of that array and below a simple question is solved
with the help of binary search algorithm so lets look it


*/

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    bool isFound = false;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (target < nums[mid])
        {
            end = mid - 1;
        }
        else if (target > nums[mid])
        {
            start = mid + 1;
        }
        else
            return mid;
    }
    return -1;
}

// now the time complexity of this code is O(log n)
int main()
{
    // vector<int> nums = {1, 4, 7, 8, 9}; // odd array
    // // as this array is already sorted
    // int target = 8;
    // cout << "Target is on the index: " << binarySearch(nums, target);

    vector<int> nums = {-1, 0, 3, 5, 9, 12}; // even array
    // as this array is already sorted
    int target = 0;
    cout << "Target is on the index: " << binarySearch(nums, target);
    return 0;
}

// to overcome the error of overflow in big programs so we use th formula
//  to find mid of array as mid = start + ( (end - start) / 2 ); which is same as mid = (start + end) / 2;
//  we use this b/c if start = INT_MAX and end = INT_MAX so we can't add them