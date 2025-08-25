
// we have solved this question but the time complexity of this question is O(n square)
// so thats why we will be getting a TLE error and now I am writing the same code with a different
// approach which is known as 2 pointers approach just below this code
// and the time complexity of that code must be below than O(n square)
// it can be O(n log n) or O(n) so lets solve it

// #include <iostream>
// #include <vector>
// using namespace std;

// int maxArea(vector<int> &height)
// {
//     int count = height.size();
//     int mostArea = 0, sum = 0;
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             int units = j - i;
//             sum = (min(height[i], height[j])) * units;
//             mostArea = max(mostArea, sum);
//         }
//     }
//     return mostArea;
// }

// int main()
// {
//     vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//     cout << "The max area is: " << maxArea(height);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int count = height.size();
    int mostArea = 0, sum = 0;
    int units = 0;
    int i = 0, j = count - 1;
    while (i < j)
    {
        units = j - i;
        sum = (min(height[i], height[j])) * units;
        mostArea = max(mostArea, sum);
        (height[i] < height[j]) ? i++ : j--;
    }
    return mostArea;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "The max area is: " << maxArea(height);
    return 0;
}
