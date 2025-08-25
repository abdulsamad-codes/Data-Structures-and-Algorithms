#include <iostream>
using namespace std;

int main()
{
    const unsigned short int size = 5;
    unsigned short int sum = 0, product = 1, array[size] = {1, 4, 9, 4, 23};
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
        product *= array[i];
    }
    cout << "The sum of all the numbers of the array is: " << sum << endl;
    cout << "The product of all the numbers of the array is: " << product << endl;

    return 0;
}