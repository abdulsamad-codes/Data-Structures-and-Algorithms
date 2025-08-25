#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int l = 0; l < 2 * i - 1; l++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    n = 3;
    for (int m = 0; m < n; m++)
    {
        for (int o = n; o > n - m - 1; o--)
        {
            cout << " ";
        }
        if (m == n - 1)
        {
            cout << " *";
            break;
        }
        cout << "*";

        for (int p = n; p > 2 * m - 1; p--)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    return 0;
}