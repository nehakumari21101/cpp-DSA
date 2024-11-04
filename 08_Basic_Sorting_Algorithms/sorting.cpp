#include<iostream>
#include<climits>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printArr(char arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Bubble sort
void bubbleSort(int *arr, int n){

    for(int i =0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            // array is already swap
            break;
        }
    }
    printArr(arr, n);
}

// Selection sort
void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }

    printArr(arr, n);
}

//insertion sort
void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        //sorted part loop - backwards
        while(prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }

        //swap
        swap(arr[prev+1], curr);
    }
    
     printArr(arr, n);
}

//counting sort
void countSort(int arr[], int n) {
    int range = INT_MIN;
    for(int i=0; i<n; i++) {
        range = max(range, arr[i]);
    }

    int freqArr[100001];
    for(int i=0; i<n; i++) {
        freqArr[arr[i]]++;
    }

    for(int i=0; i<range; i++) {
        while(freqArr[i] > 0) {
            arr[i] = i;
            freqArr[i]--;
        }
    }

    printArr(arr, n);
}

// Sorting charaters array
void sortChars(char arr[], int n) {
    for(int i=1; i<n; i++) {
        char curr = arr[i];
        int prev = i-1;
        
        while(prev >= 0 && arr[prev] < curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }

        swap(arr[prev+1], curr);
    }
    
     printArr(arr, n);
}

int main(){
    int arr[] = {3,  1, 8, 5, 2, 11};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    selectionSort(arr, n);
    insertionSort(arr, n);
    countSort(arr, n);

    char ch[] = { 'f', 'b', 'a', 'e', 'c', 'd'};
    sortChars(ch, 6);

    return 0;
}