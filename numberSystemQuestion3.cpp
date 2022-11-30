// Q3 - Given two binary numbers, return the greatest of these numbers in decimal format.

#include <iostream>
using namespace std;

int main()
{
    int binaryNum1, binaryNum2;
    cout << "Enter two binary numbers :";
    cin >> binaryNum1 >> binaryNum2;

    int ans;
    if (binaryNum1 > binaryNum2)
    {
        ans = binaryNum1;
    }
    else
    {
        ans = binaryNum2;
    }
    int ans1 = ans;
    int power = 1;
    int decimalNum = 0;
    while (ans1 > 0)
    {
        int unitDigit = ans1 % 10;
        decimalNum += (unitDigit * power);

        ans1 /= 10;
        power *= 2;
    }
    cout << decimalNum << endl;
    return 0;
}