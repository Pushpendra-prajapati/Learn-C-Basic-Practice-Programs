// Problem 3: Reverse the digits of a number?

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    int lastDigit;
    int ans=0;

    while(n>0){
        lastDigit=n%10;
        ans=(ans*10)+lastDigit;
        n/=10;
    }
    cout<<"Reverse : "<<ans<<endl;
    return 0;
}
