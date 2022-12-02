// Q1 - Write a function to print squares of the first 5 natural numbers.

#include <iostream>
using namespace std;

int squares(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int numSquare = i * i;
        cout << numSquare << " ";
    }
}

int main()
{
    int num;
    cout << "Enter number :";
    cin >> num;

    squares(num);
    return 0;
}