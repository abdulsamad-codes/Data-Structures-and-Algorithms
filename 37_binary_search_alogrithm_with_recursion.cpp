#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (target > nums[mid])
        {
            return binarySearch(nums, target, mid + 1, end);
        }
        else if (target < nums[mid])
        {
            return binarySearch(nums, target, start, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{

    vector<int> nums = {-1, 0, 3, 5, 9, 12}; // even array
    // as this array is already sorted
    int target = 0;
    int end = nums.size() - 1;
    int start = 0;

    cout << "Target is on the index: " << binarySearch(nums, target, start, end);
    return 0;
}