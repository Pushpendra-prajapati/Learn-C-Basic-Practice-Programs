//  Print the first k multiples of a number n.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=10; j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}