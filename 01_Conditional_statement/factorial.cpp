#include <iostream>
using namespace std;

int main(){
    int num, fact = 1;
    cout << "Enter any number" << endl;
    cin >> num;

    for(int i=1; i<=num; i++){
        fact = fact*i;
    }

    cout<<"Factorial of the number = "<<fact<<endl;

    return 0;
}