#include <iostream>
using namespace std;

// sum of to number
int add(int a, int b)
{
    return a + b;
}

// factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// check even or odd
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// check prime or not
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// find out the binary coefficient
int binCoeff(int n, int r)
{
    int val1 = factorial(n); // use of factorial funtion
    int val2 = factorial(r);
    int val3 = factorial(n - r);

    int result = val1 / (val2 * val3);
    return result;
}

// Function overloading
int sum(int a, int b, int c)
{
    return a + b + c;
}

// Print all primes
void allPrimes(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main()
{
    //    cout<<"Sum = "<<add(4,5);
    //    cout<<"Factotial = "<<factorial(5)<<"\n";
    //    cout<<isEven(5);
    //    cout << isPrime(21);
    // cout<<binCoeff(4,2);
    // cout << sum(3, 4, 2);
    // cout<<allPrimes(13);
    allPrimes(100);
    return 0;
}