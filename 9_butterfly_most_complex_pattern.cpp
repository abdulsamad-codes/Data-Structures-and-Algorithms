#include <iostream>
using namespace std;

int main()
{
    int count = 7;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < (count - i) * 2; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < i + 1; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int m = 0; m < count * 2 + 2; m++)
    {
        cout << "*";
    }
    cout << endl;

    for (int n = count; n > 0; n--)
    {
        for (int o = n; o > 0; o--)
        {
            cout << "*";
        }

        for (int p = 0; p < 2 * (count - n) + 2; p++)
        {
            cout << " ";
        }

        for (int o = n; o > 0; o--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}