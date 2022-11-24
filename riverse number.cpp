#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number :";
    cin>>n;

    int rnum=0;

    while(n>0){
    int ramainder=n%10;
      rnum=rnum*10+ramainder ;
      n/=10;

    }
    cout<<rnum;
    return 0;
}