#include <iostream>
#include <vector>
using namespace std;

int majorityItem(vector<int> nums)
{
    int n = nums.size();
    int times = 0;

    for (int i = 0; i < n; i++)
    {
        times = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                times++;
            }
            if (times > (n / 2))
            {
                return nums[i];
                break;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 5, 5, 5, 5, 5, 5, 2, 1, 1};
    cout << "The majority element in the array is: " << majorityItem(nums) << endl;
    return 0;
}