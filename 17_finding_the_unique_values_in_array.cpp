#include <iostream>
using namespace std;

void findUniqueElement(int array[], int size)
{
    int uniqueNumberIndex = 0;
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && array[i] == array[j])
            {
                isUnique = false;
                break;
            }
            else
            {
                isUnique = true;
            }
        }
        if (isUnique)
        {
            cout << "The unique number in the array is " << array[i] << endl;
            return;
        }
    }
}

int main()
{
    int size = 10;
    int array[size] = {1, 1, 2, 2, 5, 5, 6, 6, 7, 6};
    findUniqueElement(array, size);
    return 0;
}