#include<iostream>
using namespace std;

int main(){
    int arr[5] = {9, 5, 11, 1, 0};
    int len = sizeof(arr) / sizeof(int);
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Largest in an array
    int max = arr[0];
    for(int i =0; i<len; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"max = "<<max<<endl;
    return 0;
}