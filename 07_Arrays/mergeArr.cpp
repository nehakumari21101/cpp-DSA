#include<iostream>
using namespace std;

void mergeArr(int *arr1, int n, int *arr2, int m, int *arr3){
    int k=0;

    for(int i=0; i<n;i++){
        arr3[k++] = arr1[i];
    }
    for(int j=0; j<n;j++){
        arr3[k++] = arr2[j];
    }
}

int main(){
    int arr1[] = {1,2,4};
    int arr2[] = {5, 6, 7};
    int n = 3;
    int m=3;
    int arr3[3+3];

    mergeArr(arr1, n, arr2, m, arr3);

    for(int i=0; i<6;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}