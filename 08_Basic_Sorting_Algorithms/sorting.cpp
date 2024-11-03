#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *arr, int n){
    for(int i =0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = false;
            }
        }
        if(!isSwap){
            // array is already swap
            return;
        }
    }
    printArr(arr, n);
}

int main(){
    int arr[6] = {3,  1, 8, 5, 2, 11};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);

    return 0;
}