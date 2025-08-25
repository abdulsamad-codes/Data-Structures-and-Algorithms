
// we have solved this question but the time complexity of this question is O(n square)
// so thats why we will be getting a TLE error and now I am writing the same code with a different
// approach which is known as 2 pointers approach just below this code
// and the time complexity of that code must be below than O(n square)
// it can be  O(n) so lets solve it

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> productExceptSelf(vector<int> &nums)
// {
//     vector<int> newVector;
//     int count = nums.size();
//     for (int i = 0; i < count; i++)
//     {
//         int product = 1;

//         for (int j = 0; j < count; j++)
//         {
//             if (j != i)
//             {
//                 product *= nums[j];
//             }
//         }
//         newVector.push_back(product);
//     }
//     return newVector;
// }
// int main()
// {
//     vector<int> nums = {-1, 1, 0, -3, 3};
//     vector<int> newVector = productExceptSelf(nums);
//     cout << "The new vector is: ";
//     for (int value : newVector)
//     {
//         cout << value << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int count = nums.size();
    vector<int> newVector(count, 1);
    for (int i = 1; i < count; i++)
    {
        newVector[i] = newVector[i - 1] * nums[i - 1];
    }
    int suffix = 1;
    for (int i = count - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        newVector[i] *= suffix;
    }

    return newVector;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> newVector = productExceptSelf(nums);
    cout << "The new vector is: ";
    for (int value : newVector)
    {
        cout << value << " ";
    }
    return 0;
}