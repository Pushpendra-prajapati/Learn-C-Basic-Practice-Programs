#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    int sum=0;
    do{
        int i;
        cin>>i;
        sum+=i;
        n--;
    } while(n>0);

    cout<<"Sum : "<<sum<<endl;
    return 0;
}