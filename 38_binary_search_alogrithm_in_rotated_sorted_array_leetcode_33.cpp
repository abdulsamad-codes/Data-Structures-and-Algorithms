
// in rotated sorted array one half is must sorted after rotating
// so apply binary search algorithm on that half
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int end = nums.size() - 1;
    int start = 0;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (nums[mid] == target)
            return mid;

        if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
                start = mid + 1;
        }

        else
        {
            if (nums[mid] <= target && target <= nums[end])
            {
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
    }
    return -1;
}

// int binarySearch(vector<int> nums, int target)
// {

//     int start = 0;
//     int end = nums.size() - 1;
//     while (start <= end)
//     {
//         int mid = start + ((end - start) / 2);
//         if (target == nums[mid])
//         {
//             return mid;
//         }

//         start = mid + 1;
        
//         if (target >= nums[mid] && target <= nums[end])
//         {
//             start = mid + 1;
//         }

//         if (target >= nums[start] && target <= nums[mid])
//         {
//             end = mid - 1;
//         }

//     }

//     return -1;
// }
int main()
{

    vector<int> nums = {6, 7, 0, 1, 2, 3, 4, 5}; // even array
    // as this array is rotated sorted array
    int target = 0;

    cout << "Target is on the index: " << binarySearch(nums, target);
    return 0;
}