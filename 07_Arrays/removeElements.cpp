#include <iostream>
#include <vector>
using namespace std;

int removeElement(int arr[], int val, int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != val)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int arr[] = {3, 2, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    int val = 3;
    removeElement(arr, val, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}