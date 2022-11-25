#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int>&a){
    int n=a.size();
    int max=0;
    int secondMax=0;

    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]>secondMax && a[i] != max){
            secondMax=a[i];
        }
    }
    return secondMax;
}
int main(){
    vector<int>a={1,2,3,4,7,8,9,5};
    cout<<secondLargest(a)<<endl;
    return 0;
}