#include <iostream>
using namespace std;

int main()
{
    // int num = 13;

    // while (true)
    // {
    //     // cout << "Enter num: ";
    //     // cin >> num;
    //     if (num % 10 == 0)
    //     {
    //         break;
    //     }

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
            cout << curr << " ";
        }
    }
    cout << endl;

    return 0;
}