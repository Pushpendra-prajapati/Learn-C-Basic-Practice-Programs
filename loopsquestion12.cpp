//Problem : Count the number of digits in the given number n.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    int count=0;
    while(n>0){
        count+=1;
        n/=10;
    }
    cout<<"Total number of digits : ";
    cout<<count<<endl;
    return 0;
}
