#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> myVector, int target)
{
    vector<int> newVector;
    for (int i = 0; i < myVector.size(); i++)
    {
        for (int j = 0; j < myVector.size(); j++)
        {
            if (i != j && (myVector[i] + myVector[j]) == target)
            {
                newVector.push_back(i);
            }
        }
    }
    return newVector;
}
int main()
{
    vector<int> myVector = {1, 2, 3, 4};
    int target = 4;
    const int size = 4;

    vector<int> newvector = twoSum(myVector, target);
    for (int value : newvector)
    {
        cout << value << endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int nums[5];
//     cout << "Enter the values for the arrays of nums: ";
//     for(auto n : nums){
//         cin >> n;
//     }
//     cout << "\n";
//     int target;
//     cout << "Enter the target: ";
//     cin >> target;
//     bool isFound = false;
//     while(!isFound){
//         for(int i = 0; i < 5 ; i++){
//             for(int j = 0; j < i; j++ ){
//                 if ( (nums[i] + nums[j]) == target ){
//                     isFound = true;
//                     cout << " " << i << " " << j << endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }