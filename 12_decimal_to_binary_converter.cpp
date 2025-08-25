#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Converter
{
    int decimalNumber;
    // int binaryNumber;
    vector<int> binary = {0};

public:
    Converter(int decimalNumber = 0)
    {
        setDecimalNumber(decimalNumber);
    }
    void setDecimalNumber(int decimalNumber)
    {
        this->decimalNumber = decimalNumber;
    }
    int getDecimalNumber(void) const { return decimalNumber; }
    void printBinaryNumber(void) const
    {

        for (auto x : binary)
        {
            cout << x;
        }
        cout << endl;
    }
    void convertDecimalToBinary(void)
    {
        int remainder;
        int i = 0;
        if (decimalNumber == 0)
        {
            binary.insert(binary.begin() + 0, 0);
        }
        if (decimalNumber == 1)
        {
            binary.insert(binary.begin() + 0, 1);
        }
        while (decimalNumber > 1)
        {
            remainder = decimalNumber % 2;
            binary.insert(binary.begin() + 0, remainder);
            decimalNumber /= 2;
            if (decimalNumber == 1)
            {
                binary.insert(binary.begin() + 0, 1);
            }
        }
        binary.pop_back();
    }
};

int main()
{
    int decimalNumber;
    cout << "Enter the decimal Number: ";
    cin >> decimalNumber;
    Converter object(decimalNumber);
    object.convertDecimalToBinary();
    cout << "The binary number is equal to: ";
    object.printBinaryNumber();
    return 0;
}

// #include <iostream>
// #include <cmath>
// using namespace std;

// int binaryToDecimalConverter(int decimalNumber)
// {
//     int binaryNumber, quotient, remainder;
//     int i = 0;
//     while (decimalNumber > 1)
//     {
//         remainder = decimalNumber % 2;
//         binaryNumber += remainder * pow(10, i);
//         i++;
//         decimalNumber /= 2;
//         // if (decimalNumber == 1)
//         // {
//         //     binaryNumber += pow(10, i);
//         //     break;
//         // }
//     }
//     return binaryNumber;
// }

// int main()
// {

//     int decimalNumber;
//     cout << "Enter a decimal number: ";
//     cin >> decimalNumber;
//     cout << "The binary number for " << decimalNumber << " is " << binaryToDecimalConverter(decimalNumber) << endl;
//     // int decimal;
//     // cout << "Enter a decimal number: ";
//     // cin >> decimal;
//     // int binary = 0;
//     // int arr[] = {0};
//     // bool condition = true;
//     // int i = 0;
//     // while (condition)
//     // {
//     //     arr[i] = decimal % 2;
//     //     decimal /= 2;
//     //     i++;
//     // }
//     // int newArray[] = {0};
//     // int maxSize = 0;
//     // int index = i;
//     // while (i >= maxSize)
//     // {
//     //     newArray[i] = arr[index - i];
//     //     i--;
//     // }
//     // cout << "The binary form of the number " << decimal << " is ";
//     // int j = 0;
//     // while (j < index)
//     // {
//     //     cout << newArray[j];
//     //     j++;
//     // }
//     return 0;
// }