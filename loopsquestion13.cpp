// Problem 2: Find the sum of digits in a given number n.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    int sum=0;
    
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    cout<<"All digits sum : ";
    cout<<sum<<endl;
    return 0;
}
