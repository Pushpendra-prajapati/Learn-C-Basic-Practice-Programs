// Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number :";
    cin >> num;

    int ans = 0;
    for (int i = 1; i <= num; i++)
    {
        ans += i;
    }

    int number = ans;
    int unitDigit;
    int sum = 0;
    int power = 1;
    while (number > 0)
    {
        unitDigit = number % 2;
        sum = sum + (unitDigit * power);

        number /= 2;
        power *= 10;
    }
    cout << sum;
    cout << endl;
    return 0;
}