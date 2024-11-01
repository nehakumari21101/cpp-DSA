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

// max sum subarray (Brute force - o(n^3))
void maxSubarraySum1(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int sum = 0;
            for(int i=start; i<=end; i++){
                sum += arr[i];
            }
            cout<<sum<<", ";
            maxSum = max(sum, maxSum);
        }
        cout<<endl;
    }
    cout << "maximum subarray sum = "<<maxSum<<endl;
}

//max sum subarray - o(n^2)
void maxSubarraySum2(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        int sum = 0;
        for(int i=start; i<n; i++){
            sum += arr[i];
            maxSum = max(sum, maxSum);
        }
        // cout<<endl;
    }
    cout << "maximum subarray sum = "<<maxSum<<endl;
}

// max sum subarray - Kadane's algorithm - o(n)
void maxSubarraySum3(int *arr, int n){
    int maxSum = INT_MIN;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            maxSum = max(sum, maxSum);
            if(sum<0){
                sum=0;
            }
    }
    cout << "maximum subarray sum = "<<maxSum<<endl;
}

//Buy and sell stocks
void maxProfit(int *prices,int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i=1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }

    int maxProfit = 0;
    for(int i=0; i<n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout<<"max Profit = "<<maxProfit<<endl;
}

int main(){
    int arr[]={7, 2, 1, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    printSubarrays(arr, n);
    maxSubarraySum1(arr, n);
    maxSubarraySum2(arr, n);
    maxSubarraySum3(arr, n);
    maxProfit(arr, n);

    return 0;
}