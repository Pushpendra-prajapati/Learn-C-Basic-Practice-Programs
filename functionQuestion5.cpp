// Q5 - Given two numbers a and b, write a program to print all the prime numbers present between
// a and b.
// Sample Input: 2 10
// Sample Output: 2 3 5 7

#include <iostream>
using namespace std;

bool primeNum(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers :";
    cin >> num1 >> num2;

    for (int i = num1; i <= num2; i++)
    {
        if (primeNum(i) && i !=1)
        {
            cout << i << " ";
        }
    }
}
