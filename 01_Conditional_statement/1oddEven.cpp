#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number"<<"\n";
    cin>>num;

    if(num % 2 == 0){
        cout<<"The number is Even " <<num<<"\n";
    }else{
        cout<<"The number is Odd "<<num<<"\n";
    }

    return 0;
}