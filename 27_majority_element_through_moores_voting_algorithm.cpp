#include <iostream>
#include <vector>
using namespace std;
int majorityItem(vector<int> nums)
{
    int n = nums.size();
    int frequency = 0;
    int major = 0;
    for (int i = 0; i < n; i++)
    {
        if (frequency == 0)
        {
            major = nums[i];
        }
        (major == nums[i]) ? frequency++ : frequency--;
    }
    int count = 0;
    for (int value : nums)
    {
        if (major == value)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return major;
    }
    else
    {
        return -1;
    }

    return major;
}
int main()
{
    vector<int> nums = {1, 2, 1, 2, 3};
    cout << "The majority element in the array is: " << majorityItem(nums);

    return 0;
}