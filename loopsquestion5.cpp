#include<iostream>
using namespace std;

int main(){
    int value=0;
    int index=0;

    double tableNum;
    cout<<"Enter table number :";
    cin>>tableNum;   

    while(true){

       value+=tableNum;
       index+=1;
       cout<<value<<" ";

       if(index==10) break;
    }
    return 0;
}