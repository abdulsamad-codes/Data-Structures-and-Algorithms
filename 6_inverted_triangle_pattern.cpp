#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int number = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << number;
        }
        number++;
        cout << endl;
        for (int k = 0; k < i + 1; k++)
        {
            cout << " ";
        }
    }

    return 0;
}