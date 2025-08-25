#include <iostream>
#include <vector>
using namespace std;
// to use optimized approach we have to firstly convert the array into ascending order i mean sort the array
int majorityItem(vector<int> nums)
{
    int n = nums.size();
    int frequency = 1;
    int major = nums[0];
    for (int value : nums)
    {
        if (value == major)
        {
            frequency++;
        }
        else
        {
            frequency = 1;
            major = value;
        }
        if (frequency > n / 2)
        {
            return value;
        }
    }
    return -1;
}

void sortVector(vector<int> &vec)
{
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {
        int temp;
        for (int j = 0; j < size; j++)
        {
            if (vec[i] < vec[j])
            {
                temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
                temp = 0;
            }
        }
    }
}
int main()
{
    vector<int> nums = {1, 2, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 1, 1};
    sortVector(nums);
    cout << "The majority element in the array is: " << majorityItem(nums) << endl;
    for (int value : nums)
    {
        cout << value << " ";
    }

    return 0;
}