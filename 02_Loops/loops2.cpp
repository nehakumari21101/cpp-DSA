#include <iostream>
using namespace std;

int main()
{
    // Q1 - find the factorial of the number
    int n = 7;
    // int fact = 1;
    // for(int i = 1; i<=n; i++){
    //     fact = fact*i;
    // }
    // cout<<"Factorial of "<<n<<" = "<<fact<<"\n";

    // Q2 - print mutilication table of a number
    //  for(int i=1; i<=10; i++){
    //      cout<<" "<<n * i;
    //  }

    // Q3 - Check for Armstrong number
    //  n = 370;
    //  int num = n;
    //  int cubeSum = 0;
    //  while(num>0){
    //      int lastDig = num % 10;
    //      cubeSum += lastDig * lastDig * lastDig;
    //      num /= 10;
    //  }

    // if(n == cubeSum){
    //     cout<<"Armstrong number"<<"\n";
    // }else{
    //     cout<<"NOT Armstrong number"<<endl;
    // }

    // Q4 - print all primes from 2 to N
     int N = 20;
     for (int i = 2; i <= N; i++)
     {
         int curr = i; // current number to check for
         bool isPrime = true;
         for (int j = 2; j * j <= i; j++)
         {
             if (curr % j == 0)
             {
                 isPrime = false;
             }
         }

        if (isPrime)
        {
            cout<< curr << " ";
        }
    }
    cout<<endl;

    // Q5 - Print N fibonacci numbers
    n = 10;
    int first = 0; 
    int sec = 1;
    cout << first << " " << sec << " ";
    for (int i = 2; i < n; i++)
    {
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }
    cout << "\n";

    return 0;
}