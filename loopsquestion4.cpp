#include <iostream>
using namespace std;

int main(){
    int value=0;
    int index=0;
    while(true){
        value+=2;
        index+=1;
        cout<<value<<" ";
        if(index==10) break;
    }
    return 0;
}