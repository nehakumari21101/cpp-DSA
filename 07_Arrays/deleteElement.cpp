#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 9, 11, 23};
    int n = sizeof(arr) / sizeof(int);

    int num = 9, pos = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            pos = i;
            break;
        }
    }

    // If element found, shift elements
    if (pos != -1)
    {
        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--; // reduce size after deletion

        // Print updated array
        cout<<"Updated array: ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        cout<<"Element "<<num<<" not found in the array.\n";
    }

    return 0;
}