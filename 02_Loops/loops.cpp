#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 3478;
    // Print N natural numbers
    //  for(int i=1; i<=n; i++){
    //      cout<< i <<" ";
    //  }
    //  cout<<endl;

    // Sum of N natural numbers
    //  int sum = 0;
    //  for(int i =1; i<=n; i++){
    //      sum +=i;
    //  }
    //  cout<<"Sum = "<<sum<<"\n";

    // Sum of  digits of a number using while loop
    // int digSum = 0;
    // while (n > 0)
    // {
    //     int rem = n % 10;
    //     digSum = digSum + rem;
    //     n /= 10;
    // }
    // cout << digSum << "\n";

    // Sum of  odd digits of a number using while loop
    // int sumOdd = 0;
    // while (n > 0)
    // {
    //     int rem = n % 10;
    //     if (rem % 2 != 0)
    //     {
    //         sumOdd += rem;
    //     }
    //     n /= 10;
    // }
    // cout << "Sum Of odd digits = " << sumOdd << "\n";

    // Reverse number
    //  int rev = 0;
    //  while(n>0){
    //      int rem = n % 10;
    //      rev = rev*10 + rem;
    //      n /=10;
    //  }
    //  cout<<"reverse = "<<rev;

    // Check if number is prime or not
    int num = 5;
    bool isPrime = true;

  //SOLUTION 1
    for (int i = 2; i <= num - 1; i++){
        if (num % i == 0){ // i is factor of num; i completely devides n; num is not prime;
            isPrime = false;
            break;
        }
    }
    if (isPrime){
        cout << "number is prime" << "\n";
    }else{
        cout << "number is NOT prime" << "\n";
    }

    //SOLUTION 2 (slightly better) #include <cmath> to use square root of any number
    for(int i=2; i<sqrt(num); i++){
        if (num % i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime){
        cout << "number is prime" << "\n";
    }else{
        cout << "number is NOT prime" << "\n";
    }

    return 0;
}