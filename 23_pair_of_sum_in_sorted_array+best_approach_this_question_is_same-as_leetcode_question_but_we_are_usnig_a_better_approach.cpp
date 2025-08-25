#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(const vector<int> &nums, const int target)
{
    int j = nums.size() - 1;
    int sum = 0;
    vector<int> newVector;
    for (int i = 0; i < j; i++)
    {
        if (((nums[i] + nums[j]) > target))
        {
            j--;
        }
        else if (((nums[i] + nums[j]) < target))
        {
            i++;
        }
        else
        {
            newVector.push_back(i);
            newVector.push_back(j);
            return newVector;
        }
    }
    return newVector;
}
// vector<int> pairSum(const vector<int> &nums, const int target)
// {
//     vector<int> myValues;
//     int j = nums.size() - 1;
//     int sum = 0;
//     int i = 0;
//     while (i < j)
//     {
//         sum = nums[i] + nums[j];
//         if (sum > target)
//         {
//             j--;
//         }
//         else if (sum < target)
//         {
//             i++;
//         }
//         else
//         {
//             myValues.push_back(i);
//             myValues.push_back(j);
//             return myValues;
//         }
//     }
//     return myValues;
// }

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    vector<int> newVector = pairSum(nums, target);
    cout << newVector[0] << " " << newVector[1] << endl;
    return 0;
}