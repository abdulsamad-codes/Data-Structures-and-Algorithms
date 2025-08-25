#include <iostream>
using namespace std;

int numberFactorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int r, n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    int nFactorial = numberFactorial(n);
    int rFactorial = numberFactorial(r);
    int differenceFactorial = numberFactorial(n - r);
    int nCr = nFactorial / (rFactorial * differenceFactorial);
    cout << "The nCR binomial coefficient is equal to: " << nCr << endl;

    return 0;
}