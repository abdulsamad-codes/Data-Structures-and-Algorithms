#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    int current, previous;
    for (int i = 1; i < n; i++)
    {
        current = arr[i];
        previous = i - 1;
        while (arr[previous] >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
}
int main()
{
    vector<int> arr = {0, 4, 9, 6, 1, 5, 2, 3};
    insertionSort(arr);
    printArray(arr);
    return 0;
}