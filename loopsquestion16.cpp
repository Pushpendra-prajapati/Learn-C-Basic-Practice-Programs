// Problem 2:Given two numbers a and b as input. Find a raise to the power b.

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two number :";
    cin>>a>>b;

    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    cout<<ans<<endl;
    return 0;
}