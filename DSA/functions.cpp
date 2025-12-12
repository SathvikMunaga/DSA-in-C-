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
//finding whether a number is prime or not
int prime(int n){
    if(n <= 1){
        // cout<< "The given number is not a PRIME NUMBER"<<endl;
        return 0;
    }
    for(int i = 2; i*i<=n; i++){
        if( n % i == 0){
            // cout<<"The given number is not a PRIME NUMBER"<<endl;
            return 0;
        }
    }
    // cout<<"It's a PRIME NUMBER"<<endl;
    return 1;
}
//printing all the prime numbers from 2 to n
void primeupton(int n){
    for(int i = 2; i<=n; i++){
        if(prime(i)){
            cout<<i<<" "<<endl;
        }
    }
}
int main()
{
    // cout << SumOfn(5);
    // cout << endl;
    // cout << factorial(8) << endl;
    // cout << "sum = " << sumofdig(2356)<<endl;
    // cout << ncr(8, 2)<<endl ;
    // prime(10);
    primeupton(10);
    return 0;
}
