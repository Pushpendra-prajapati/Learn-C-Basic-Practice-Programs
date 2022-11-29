// Given n, Print a star triangular pattern ?

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i; j++){
            cout<<" ";
        }   
        for(int k=n-i+1; k<=n; k++){
            cout<<"*";
        } 
        for(int l=2; l<=i; l++){
            cout<<"*";
        }
    cout<<endl;
    }
    return 0;
}