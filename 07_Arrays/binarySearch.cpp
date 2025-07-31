#include <iostream>
using namespace std;

int search(int nums[], int target, int n)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int n = sizeof(nums) / sizeof(int);
    int target = 9;

    int result = search(nums, target, n);
    cout << "Index of target is: " << result << endl;

    return 0;
}