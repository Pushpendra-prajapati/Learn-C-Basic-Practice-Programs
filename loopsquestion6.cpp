//Tell if the number in the input is prime or not.

#include<iostream>
using namespace std;

int main(){
    int i=2;

    int n;
    cout<<"Enter number :";
    cin>>n;

    while(n>i){
        if(n%i==0){
            cout<<n<<" is Not Prime number.";
            break;
        }
        i++;
        if(i==n){
            cout<<n<<" is a Prime number.";
            break;
        }
    }
     return 0;
}