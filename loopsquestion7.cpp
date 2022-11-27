// Print all values between 1 and 100, except if it’s a multiple of 3.

#include <iostream>
using namespace std;

int main(){
    int i=1;
    for(i=1;i<=100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<" ";
        i++;
    }
    
    return 0;
}