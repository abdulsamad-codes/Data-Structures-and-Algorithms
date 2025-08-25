#include <iostream>
using namespace std;

int main()
{
    const unsigned int size = 6;
    int array[size] = {1, 2, 3, 65, 43, 5};
    for (int i = 0; i < (size / 2); i++)
    {
        swap(array[i], array[size - (i + 1)]);
    }

    cout << "The reversed array is : ";
    for (int j = 0; j < size; j++)
    {
        cout << array[j] << ",";
    }

    return 0;
}