#include<iostream>
using namespace std;

void multipleBy2(int &a,int &b,int &c){
    a*=2;
    b*=2;
    c*=2;
}

int main(){
    // int a = 10;
    // int *ptr = &a;

    // cout<<ptr<<"\n";
    // cout<<*ptr<<"\n";

    // int *ptr = NULL;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl; //segmentation fault

    // int x;
    // int *ptr;
    // x=7;
    // ptr = &x;
    // cout<<*ptr;

    // int x = 1, y=2, z=3;
    // multipleBy2(x, y, z);
    // cout<<x <<" "<<" "<<y<<" "<<z<<"\n";

    int a = 32;
    int *ptr = &a;

    char ch='A';
    char &cho = ch;

    cho += a;
    *ptr += ch;
    cout<<a<<", "<<ch<<endl;

    return 0;
}