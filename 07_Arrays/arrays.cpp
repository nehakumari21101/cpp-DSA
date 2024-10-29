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

void reverseArr(int *arr, int n){
    int start = 0, end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
}

int binarySearch(int *arr, int n, int key){
    int st=0, end = n-1;
    while(st<=end){
        int mid = (st + end) / 2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            st = mid + 1;
        }else{
            end = mid-1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {2, 4, 8, 10, 12, 16};
    int len = sizeof(arr) / sizeof(int);

    printArr(arr, len);
    findLargest(arr, len);
     
    cout<<"idx = "<<linearSearch(arr, len, 12)<<endl;
    cout<<"idx = " <<binarySearch(arr, len, 12)<<endl; // Work on sorted array 

    reverseArr(arr, len);
    return 0;
}