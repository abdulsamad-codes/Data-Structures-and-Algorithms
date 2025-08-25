#include <iostream>
using namespace std;

int maximumSum(int array[], int size)
{
    int sum = 0;
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
        maximum = max(sum, maximum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maximum;
}

int main()
{
    int size = 5;
    int array[size] = {-4, 4, 5, 6, 0};
    cout << "The maximum sub array sum using kadane's algorithm is: "
         << maximumSum(array, size);
    return 0;
}