#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    double answer = 1;
    int i = 0;
    if (n < 0)
    {
        while (i > n)
        {
            answer = double(answer / x);
            i--;
        }
    }
    while (i < n)
    {
        answer = x * answer;
        i++;
    }
    return answer;
}

int main()
{
    double x = 2;
    int n = -2;
    cout << myPow(x, n);
    return 0;
}