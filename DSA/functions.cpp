#include <iostream>
using namespace std;
// sum of n numbers
int SumOfn(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
// Factorial of n
int factorial(int m)
{
    int p = 1;
    if (m > 0)
    {
        for (int i = m; i >= 1; i--)
        {
            p *= i;
        }
        return p;
    }else{
        return 1;
    }
}
int main()
{
    cout << SumOfn(5);
    cout << endl;
    cout << factorial(8) << endl;
    return 0;
}
