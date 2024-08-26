#include <iostream>
using namespace std;

int main(){
    int num, rev = 0;
    cout << "Enter any number" << endl;
    cin >> num;

    while(num>0){
        int rem = num % 10;
        rev = rev*10 + rem;
        num/=10;
    }
    cout<<"Reverse of The number = "<<rev<<endl;

    return 0;
}