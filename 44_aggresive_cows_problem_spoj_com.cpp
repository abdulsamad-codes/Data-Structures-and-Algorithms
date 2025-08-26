#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool isMinimum(vector<int> arr, int n, int cows, int minimumDistance)
{
    int cowNumber = 1, lastStallPosition = arr[0];
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - lastStallPosition) >= minimumDistance)
        {
            cowNumber++;
            lastStallPosition = arr[i];
        }
        if (cowNumber == cows)
        {
            return true;
        }
    }

    return false;
}

int largestPossibleMinimumDistance(vector<int> arr, int n, int cows)
{

    sort(arr.begin(), arr.end());
    if (cows > n)
    {
        return -1;
    }

    int start = 1, end = arr[n - 1] - arr[0], answer;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (isMinimum(arr, n, cows, mid))
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return answer;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = 5;
    int cows = 3;
    cout << "The largest possible minimum distance is :" << largestPossibleMinimumDistance(arr, n, cows);
    return 0;
}