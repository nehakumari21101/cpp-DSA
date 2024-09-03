#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // Q1-
    // 1 1 1 1
    // 2 2 2 2
    // 3 3 3 3
    // 4 4 4 4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Q2 :-
    //  *
    //  * *
    //  * * *
    //  * * * *
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Q3 :-
    //  * * * *
    //  * * *
    //  * *
    //  *
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Q4 :-
    //  A
    //  B C
    //  D E F
    //  G H I J
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    // Q5 :-
    //  *****
    //  *   *
    //  *   *
    //  *****
    //  METHOD 1
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
        for (int j = 1; j <= n - 1; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }
    cout << endl;

    // METHOD 2
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= n-1; j++)
    //      {
    //          if (i == 1 || i == n ||
    //              j == 1 || j == n-1)
    //              cout << "*";
    //          else
    //              cout << " ";
    //      }
    //      cout << endl;
    //  }

    

    return 0;
}
