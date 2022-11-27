/*
 Question : Print the sum of the first ‘n’ natural
numbers using a while loop where n is the inLut.A */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int i=1;
    int sum=0;
    while(i<=n){
       sum+=i;
       i++;
    }
    cout<<"Sum of "<<n<<" natural numbers = "<<sum<<endl;

    return 0;
}

