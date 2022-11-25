#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    int power=1;
    while(n>0){
     
      int unitDigit=n%10;
      ans+=power*unitDigit;
      n/=10;
      power*=2;
    }
    cout<<ans<<endl;
    return 0;
}