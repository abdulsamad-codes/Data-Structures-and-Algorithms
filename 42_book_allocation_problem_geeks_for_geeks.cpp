#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

bool isValid(int arr[], int n, int k, int maximumAllowedPages)
{
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximumAllowedPages)
        {
            return false;
        }

        if ((pages + arr[i]) <= maximumAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }
    return (students > k) ? false : true;
}
int findPages(int arr[], int n, int k)
{
    int start = 0;
    int end = sum(arr, n);
    int answer = -1;
    if (k > n)
    {
        return -1;
    }
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (isValid(arr, n, k, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return answer;
}

int main()
{
    int n = 3;
    int arr[n] = {15, 17, 20};
    int k = 2; // number of students
    cout << "THe smallest possible maximum in the whole array is: " << findPages(arr, n, k);
    return 0;
}