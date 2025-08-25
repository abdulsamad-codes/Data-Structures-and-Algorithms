#include <iostream>
using namespace std;
int binaryToDecimalConvert(int binaryNumber)
{
    int decimalNumber = 0, remainder;
    int power = 1;
    while (binaryNumber > 0)
    {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * power;
        binaryNumber /= 10;
        power *= 2;
    }
    return decimalNumber;
}

int main()
{
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    cout << "The decimal number is equal to: " << binaryToDecimalConvert(binaryNumber);

    return 0;
}