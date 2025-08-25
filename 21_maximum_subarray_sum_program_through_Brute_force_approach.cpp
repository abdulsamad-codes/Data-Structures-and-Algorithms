// this program is written to find the maximum sub array sum in an array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int size = 10;
    int array[size] = {-4, 6, 8, 34, -9, 2, 3, 4, 5, 0};
    cout << "The whole array is: ";
    for (int value : array)
    {
        cout << value << ", ";
    }
    cout << " \n\n";
    int sum = 0, maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        sum = 0;
        for (int k = i; k < size; k++)
        {
            sum += array[k];
            maximum = max(sum, maximum);
        }
    }
    cout << "The maximum sum of the sub array is: " << maximum << endl;
    return 0;
}