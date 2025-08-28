#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// first step is that pick a pivot point in the array
// if values greater than pivot so shift them to the left side and vice versa
// and then individually call that function for both parts i mean right and left

int partition(vector<int> &arr, int start, int end)
{
    int index = start - 1;
    int pivot = arr[end];
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot) // for descending just make this sign as greater than
        {
            index++;
            swap(arr[i], arr[index]);
        }
    }
    index++;
    swap(arr[end], arr[index]);
    return index;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(arr, start, end);
        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
}

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {4, 9, 6, 1, 5, 2, 3};
    quickSort(arr, 0, arr.size() - 1);
    printArray(arr);
    return 0;
}