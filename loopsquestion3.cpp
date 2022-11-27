//Print the sum of the first 10 natural numbers using do while loop.

#include <iostream>
using namespace std;

int main(){
    int n=10;

    int sum=0;
    int i=1;
    do{
        sum+=i;
        i++;
    } while(i<=10);
    
    cout<<"Sum : "<<sum<<endl;
    return 0;
}