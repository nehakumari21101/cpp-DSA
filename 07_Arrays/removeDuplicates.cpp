#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
    int i=0;
    for(int j=0; j<n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){
    int arr[] = {1,1, 2, 3,3,4};
    int n = sizeof(arr)/sizeof(int);

    int res = removeDuplicates(arr, n);
    cout<<res<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}