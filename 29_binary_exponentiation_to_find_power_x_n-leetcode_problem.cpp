#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;
    double answer = 1;
    long newVariable = n;
    if (n < 0)
    {
        x = 1 / x;
        newVariable = -newVariable;
    }

    while (newVariable > 0)
    {
        if (newVariable % 2 == 1)
        {
            answer *= x;
        }
        x *= x;
        newVariable /= 2;
    }
    return answer;
}
int main()
{
    double x = 2;
    int n = 2;
    cout << myPow(x, n);
    return 0;
}

// this code has time complexity equal to O (log n) which is good then O(n) time complexity