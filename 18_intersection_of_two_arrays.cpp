#include <iostream>
using namespace std;

int main()
{
    int size1 = 8, size2 = 4;
    int firstArray[size1] = {4, 5, 2, 9, 5, 4, 1, 3};
    int secondArray[size2] = {6, 9, 2, 1};

    int size3 = max(size1, size2);
    int commonElementsArray[size3];
    int k = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (firstArray[i] == secondArray[j])
            {
                commonElementsArray[k] = firstArray[i];
                k++;
                break;
            }
        }
    }
    for (int l = 0; l < k; l++) 
    {
        cout << commonElementsArray[l] << endl;
    }

    return 0;
}