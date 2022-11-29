//Q6- Write a program to print alphabet diamond pattern:

#include <iostream>
using namespace std;

int main () {

    int size=5;
    int alpha=65;
    int num=0;
      
    //upside pyramid
    for(int i=1; i<=size; i++){            //printing spaces
        for(int j=1; j<=size-i; j++){
            cout<<" ";
        }
        for(int k=0; k<i*2-1; k++){       //printing alphabets
            cout<<((char)(alpha+num++));
        }
        num=0;
        cout<<endl;
    }
    //downside pyramid
    for(int i=1; i<=size-1; i++){       //printing spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=(size-i)*2-1; k>0; k--){     //printing alphabets
            cout<<((char)(alpha+num++));
        }
        num=0;
        cout<<endl;
    }
return 0;
}