#include <iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n;
    cin>>m;

    int ans1=0;
    int ans2=0;
    int power=1;
    while(n>0){
        int parity=n%10;
        int parity1=m%10;
        ans1+=parity*power;
        ans2+=parity1*power;
        n/=10;
        m/=10;
        power*=2;
    }
    cout<<ans1<<endl;
    cout<<ans2<<endl;

    cout<<"Gretest binary number :";
    if(ans1>ans2){
        cout<<ans1;
    }
    else{
        cout<<ans2;
    }
    return 0;
}