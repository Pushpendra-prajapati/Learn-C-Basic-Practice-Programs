// Q4 - Given two numbers a and b, write a program using functions to
//  print all the odd numbers between them.

#include <iostream>
using namespace std;

int oddNum(int a, int b)
{
    for (int i = a; i <= b; i = i+ 2)
    {
        cout << i << " ";
    }
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers :";
    cin >> num1 >> num2;

    oddNum(num1, num2);
    return 0;
}