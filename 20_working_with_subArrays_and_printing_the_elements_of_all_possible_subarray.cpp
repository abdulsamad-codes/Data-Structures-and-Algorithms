#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int array[size] = {1, 2, 3, 4, 5};
    cout << "The whole array is: ";
    for (int value : array)
    {
        cout << value << ", ";
    }
    cout << "\n Now printing the elements of all the possible subarrays: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << array[k];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}