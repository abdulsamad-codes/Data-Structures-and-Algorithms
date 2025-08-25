// this program is written to understand the concept of bitwise operators in cpp
#include <iostream>
using namespace std;

int main()
{
    int number1 = 10;
    int number2 = 15;
    cout << "Bitwise AND operator " << (number1 & number2) << endl;
    /*
    Bitwise AND operator works same as AND logical operator
    if
    1 & 1 -> 1
    1 & 0 -> 0
    0 & 1 -> 0
    0 & 0 -> 0
    */

    cout << "Bitwise OR Operator: " << (number1 | number2) << endl;
    /*
    Bitwise OR operator works same as OR logical operator
    if
    1 & 1 -> 1
    1 & 0 -> 1
    0 & 1 -> 1
    0 & 0 -> 0
    */

    cout << "Bitwise XOR (Exclusive OR Operator) : " << (number1 ^ number2) << endl;
    /*
    Bitwise XOR operator works same as OR logical operator
    if
    bits are same so it returns 1 else it returns 0
    1 & 1 -> 1
    1 & 0 -> 0
    0 & 1 -> 0
    0 & 0 -> 1
    */

    cout << endl
         << endl
         << "\n";
    // now coming towards the bitwise left shift and bitwise right shift operator
    cout << "Bitwise left shift operator ( << ) : " << (10 << 2) << endl;
    /*
    now we understand the working of bitwise left shift operator and bitwise right shift operator
    first of all
    Bitwise left shift <<
    now if i write like this 10 << 2
    so what does it means that first of convert this 10 into binary which is 10 -> 1010
    now the 2 says that move these binary number 2 spaces to the left so we will be having 101000
    why I put 00 at the last because at the right there is nothing left so we put zero
    now we got 10 << 2 -> 101000
    this 101000 binary number will be converted into decimal and we will get the answer

    same is the case bitwise right shift operator
    for example i write 10 >> 2
    so what it means that move the binary number of 10 which 1010 to the right for two places
    so while working with right shift operator so we have to remove the last digits of a binary number
    because we will be lefting nothing at the right so
    10 >> 2 -> 10 which is equal to 2 so we will be getting 2 in the answer
    lets check it 
    */
    cout << "Bitwise right shift operator( >> ): " << (10 >> 2) << endl;

    return 0;
}