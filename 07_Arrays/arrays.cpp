#include<iostream>
using namespace std;


void printArr(int arr[], int len){
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void findLargest(int arr[], int n){
    int max = arr[0];
    for(int i =0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"max = "<<max<<endl;
}

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(key == arr[i]){
            return i;
        }
        
    }
    return -1;
}

void reverse(int *arr, int n){
    // int start = 0, end = n-1;
    // while(start<end){
    //     swap(start, end);
    //     start++;
    //     end--;
    // }

    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
}

int main(){
    int arr[] = {9, 5, 11, 1, 0, 2};
    int len = sizeof(arr) / sizeof(int);

    printArr(arr, len);
    findLargest(arr, len);
     
    cout<<linearSearch(arr, len, 2)<<endl;

    reverse(arr, len);
     
    
    return 0;
}