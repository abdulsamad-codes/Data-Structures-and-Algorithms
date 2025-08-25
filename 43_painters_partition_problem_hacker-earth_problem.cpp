#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int maximumAllowedUnits)
{
    for (int i = 0; i < n; i++)
    {
        int units = 0;
        int painter = 1;
        if ((units + arr[i]) <= maximumAllowedUnits)
        {
            units += arr[i];
        }
        else
        {
            painter++;
            units = arr[i];
        }
        return (painter > m) ? false : true;
    }
    return true;
}

int minimumTime(vector<int> arr, int n, int m)
{
    int start = 0;
    int sum = 0;
    if (m > n)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int answer, end = sum;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (isValid(arr, n, m, mid))
        {
            answer = mid;
            end = mid - 1;
        }
    }
    return answer;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2; // number of boards = n and number of painters = m
    cout << "The minimum time required to paint all the boards is: " << minimumTime(arr, n, m);
    return 0;
}