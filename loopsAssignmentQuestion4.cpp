// Q4 - Write a program to reverse a given integer number.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;

    int reverseNum=0;

    while(n>0){
        int digit=n%10;
        reverseNum=(reverseNum*10) + digit;
        n/=10;
    }
    cout<<reverseNum;
    return 0;
}