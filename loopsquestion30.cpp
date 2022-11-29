// Given n, Print a number triangular pattern ?

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :"; 
    cin>>n;
    
    int i,j,k,l;
    
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(k=n-i+1; k<=n; k++){
            cout<<i;
        }
        for(l=1; l<i; l++){
            cout<<i;
        }
    cout<<endl;    
    }
    return 0;
}