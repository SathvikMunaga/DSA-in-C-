#include <iostream>
#include <cmath>
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
    }
    else
    {
        return 1;
    }
}
// sum of digits of number
int sumofdig(int num)
{
    int digsum = 0;
    while (num > 0)
    {
        int lastdig = num % 10;
        num = num / 10;
        digsum += lastdig;
    }
    return digsum;
}
// finding nCr for a binomial epression
// this nCr function uses the above factorial function
int ncr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);
    return fact_n / (fact_r * fact_nmr);
}
// finding whether a number is prime or not
int prime(int n)
{
    if (n <= 1)
    {
        // cout<< "The given number is not a PRIME NUMBER"<<endl;
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            // cout<<"The given number is not a PRIME NUMBER"<<endl;
            return 0;
        }
    }
    // cout<<"It's a PRIME NUMBER"<<endl;
    return 1;
}
// printing all the prime numbers from 2 to n
void primeupton(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (prime(i))
        {
            cout << i << " " << endl;
        }
    }
}
// reversing number
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int lastdig = n % 10;
        rev = rev * 10 + lastdig;
        n = n / 10;
    }
    return rev;
}
// trying palindrome number
void palindrome(int n)
{
    if(n == reverse(n)){
        cout<<"It is a palindrom";
    }else{
        cout<<"It is not a palindrome";
    }
    return;
}
int isArmstrong(int n) {
    int original = n;
    int digits = 0;
    
    // Count digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits^digits
    int sum = 0;
    temp = n;  // reset temp
    while (temp > 0) {
        int lastDigit = temp % 10;
        sum += pow(lastDigit, digits);
        temp /= 10;
    }

    // Compare
    if (sum == original)
        cout<< "YES";  // Armstrong
    else
        cout<< "NO";  // Not Armstrong
}
int main()
{
    // cout << SumOfn(5);
    // cout << endl;
    // cout << factorial(8) << endl;
    // cout << "sum = " << sumofdig(2356)<<endl;
    // cout << ncr(8, 2)<<endl ;
    // prime(10);
    // primeupton(10);
    // cout << reverse(89) << endl;
    // palindrome(1241);
    isArmstrong(656);
    return 0;
}
