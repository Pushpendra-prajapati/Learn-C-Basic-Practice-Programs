//  Print all factors of the number in the input.

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Number :";
    cin>>n;

    for(int i=1; i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        } 
    }
    return 0;
}
