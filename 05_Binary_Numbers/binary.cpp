#include<iostream>
using namespace std;

// Convert binary to decimal
void binToDec(int binNum){
    int n = binNum;
    int res = 0 ;
    int pow =1;
    while(n>0){
        int lastDig = n%10;
        res += lastDig*pow;
        pow=pow*2;
        n /= 10;
    }
    cout<<"Decimal form = "<<res<<"\n";
}

void decToBin(int n){
    int pow = 1;
    int res = 0;
    while(n>0){
         int rem = n%2;
         res += rem*pow;
         pow = pow *10;
         n/=2;
        }
        cout<<"Binary form = "<<res <<"\n";
}



int main(){
    binToDec(1011);
    decToBin(56);
    return 0;
}