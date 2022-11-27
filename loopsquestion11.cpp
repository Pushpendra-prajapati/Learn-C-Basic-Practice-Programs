/*Question:Write a short Lrogram that Lrints each number from * to *00 on a new line.
 For each multiLle of 3B Lrint "Fizz" instead of the number.
 For each multiLle of "B Lrint "Buzz" instead of the number.
 For numbers which are multiLles of both 3 and "B Lrint "FizzBuzz" instead of the number*/

 #include <iostream>
 using namespace std;

 int main(){
    int n=100;
    int i=0;
    while(i<=100){
        if(i%3==0){
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0){
            cout<<"Buzz"<<endl;
        }
        else if(i%3==0 && i%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
 }