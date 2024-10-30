#include<iostream>
#include <climits>
// #include <algorithm> 
// #include<cmath>
using namespace std;

void printSubarrays(int *arr, int n){
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            for(int i=start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}

void maxSubarraySum1(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int sum = 0;
            for(int i=start; i<=end; i++){
                sum += arr[i];
            }
            cout<<sum<<", ";
            // if(maxSum < Sum){
            //     maxSum = Sum;
            // }
            maxSum = max(sum, maxSum);
        }
        cout<<endl;
    }
    cout << "maximum subarray sum = "<<maxSum<<endl;
}

int main(){
    int arr[]={1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    printSubarrays(arr, n);
    maxSubarraySum1(arr, n);

    return 0;
}