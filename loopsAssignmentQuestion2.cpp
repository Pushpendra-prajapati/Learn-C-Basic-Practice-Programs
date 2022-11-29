// Q2 - Write a program to print all Armstrong numbers between 100 to 500?

#include <iostream>
using namespace std;

int main(){

    int a,b;    // between a(starting) to b(ending).
    cin>>a>>b;

    cout<<"All Armstrong number btween "<<a<<" to "<<b<<":-\n";
    
    for(int i=a; i<=b; i++){

    int sum=0;
    int t=i;    
    while(t != 0){
        int remainder=t%10;
        sum+=remainder*remainder*remainder;
        t/=10;
    }
    if(i==sum){
       
        cout<<i<<endl;;
    }
    }  
    return 0;
}