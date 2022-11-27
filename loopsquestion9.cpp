
//Question : Print the first 10 natural numbers ?

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    int i=1;
    while(n>=i){
        cout<<i<<" ";
        i++;

    }
    return 0;
}