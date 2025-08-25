#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int number = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << number++ << " ";
        }
        cout << endl;
    }

    return 0;
}