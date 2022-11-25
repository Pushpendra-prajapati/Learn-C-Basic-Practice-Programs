#include <iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter your array size :";
    cin>>a;
    int arr[a];

    int sum=0;
    int multi=1;
    cout<<"Enter your array values : ";
    for(int i=0; i<a; i++){
       cin>>arr[i];
       sum+=arr[i];
       multi*=arr[i];
    }
    cout<<"sum of your all values : ";
    cout<<sum <<endl;
    cout<<"multiple of your all values :";
    cout<<multi<<endl;

    return 0;
}