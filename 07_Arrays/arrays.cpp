#include<iostream>
using namespace std;


void printArr(int arr[], int len){
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {9, 5, 11, 1, 0};
    int len = sizeof(arr) / sizeof(int);
    printArr(arr, len);

    // Largest in an array
    int max = arr[0];
    for(int i =0; i<len; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"max = "<<max<<endl;
    return 0;
}