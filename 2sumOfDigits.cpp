#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, sumOdd = 0;
    cout << "Enter any number" << endl;
    cin >> num;

    // Sum Of Digits
    // while (num > 0)
    // {
    //     int rem = num % 10;
    //     sum = sum + rem;
    //     num = num / 10;
    // }

    // cout << "Sum of the digits = " << sum << endl;

    // Sum Of Odd Digits
    while (num > 0)
    {
        int rem = num % 10;
        if (rem % 2 != 0)
        {
            sumOdd = sumOdd + rem;
        }
        num /= 10;
    }
    cout << "Sum of odd digits = " << sumOdd << endl;

    return 0;
}