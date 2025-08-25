#include <iostream>
#include <vector>
using namespace std;
int singleNonDuplicate(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    if (end == 0)
    {
        return nums[end];
    }
    
    while (start <= end)
    {
        
        int mid = start + ((end - start) / 2);
        if(mid == 0 && nums[0] != nums[1]){
            return nums[0];
        }
        if(mid == end && nums[end] != nums[end - 1]){
            return nums[end];
        }
        
        if ((nums[mid - 1] != nums[mid]) && (nums[mid] != nums[mid + 1]))
        {
            return nums[mid];
        }
        if (mid % 2 == 0)
        {
            if (nums[mid - 1] == nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums[mid - 1] == nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {3, 3, 7, 7, 10, 11, 11};
    cout << "The elements which appears once in the whole array is: " << singleNonDuplicate(nums);
    return 0;
}