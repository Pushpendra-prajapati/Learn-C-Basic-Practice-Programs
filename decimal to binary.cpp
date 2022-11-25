#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    int ans=0;
    int power=1;

    while(n>0){
        int digit=n%2;
        ans=ans+(power*digit);
        power*=10;
        n/2;
    }
    cout<<ans<<endl;
    return 0;
}