#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter a number and I will find the sum of the digits"
         << " of that number: ";
    cin >> number;
    bool isFalse = true;
    while (isFalse)
    {
        sum += number % 10;
        number /= 10;
        if (number <= 0)
        {
            isFalse = false;
        }
    }
    cout << "The sum is : " << sum << endl;
    return 0;
}