#include<iostream>
using namespace std;

//Check number is palindrom or not
void palindrom(int n){
    int num = n;
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 +rem;
        n /=10;
    }
    if(num == rev){
        cout<<"Palindrom number";
    }else{
        cout<<"not palindrom number";
    }
}

int SumOfDigits(int n){
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum +=rem;
        n/=10;
    }
    return sum;
}

int abSquare(int a, int b){
    return a*a +b*b + 2*a*b;  
}

char getNextChar(char ch){
    if(ch == 'z'){
        return 'a';
    }else{
        return ch+1;
    }
}

int main(){
    // palindrom(321);
    // cout<<SumOfDigits(436);
    // cout<<abSquare(4, 2);
    cout<<getNextChar('m');
    return 0;
}