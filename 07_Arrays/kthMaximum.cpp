#include<iostream>
// #include <algorithm>
using namespace std;

int main(){
    int arr[] = {6,4,8,9};
    int n = sizeof(arr)/sizeof(int);
    int k = 3;
     
    // sort(arr, arr+n);

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout<<"\n"<<k<<"th maximum number "<<arr[k-1];

    
    return 0;
}