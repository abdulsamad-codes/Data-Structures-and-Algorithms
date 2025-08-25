#include <iostream>
using namespace std;

void sortArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp;
        for (int j = 0; j < size; j++)
        {
            if (array[i] < array[j]) // for ascending just make < this sign into > sign
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                temp = 0;
            }
        }
    }
}

int main()
{
    const int size = 10;
    int array[size] = {6, 5, 2, 9, 8, 0, 1, 3, 7, 4};
    sortArray(array, size);
    cout << "The array in ascending order is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}