// Print Hollow number rectangular pattern ?

#include <iostream>
using namespace std;

int main(){
    int rows,num;
    cout<<"Enter rows and columns ";
    cin>>rows>>num;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=num; j++){
            if(i==1 || j==1 || i==rows || j==num){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}