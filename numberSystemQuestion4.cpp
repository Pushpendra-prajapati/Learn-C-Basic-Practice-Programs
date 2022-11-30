// Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.
// Note: Don’t count the preceding zeros.
// For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros.

#include <iostream>
using namespace std;

int main()
{
    int Num;
    cout << "Enter number :";
    cin >> Num;

    int count = 0;
    while (Num > 0)
    {
        int unitDigit = Num % 2;
        if (unitDigit == 0)
        {
            count++;
        }
        Num /= 2;
    }
    cout << "The number of zeros is : " << count << endl;
    return 0;
}