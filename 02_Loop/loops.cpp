#include <iostream>
using namespace std;

int main(){
   int n = 5;
    //Print N natural numbers
    for(int i=1; i<=n; i++){
        cout<< i <<" ";
    }
    cout<<endl;

    //Sum of N natural numbers
    int sum = 0;
    for(int i =1; i<=n; i++){
        sum +=i;
    }
    cout<<"Sum = "<<sum<<"\n";


    return 0;
}