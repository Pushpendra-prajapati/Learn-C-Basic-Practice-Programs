// Q1: Binary to decimal converter program codes ?

#include <iostream>
using namespace std;

int main()
{
    int binaryNumber;
    cout << "Enter Binary number :";
    cin >> binaryNumber;

    int power = 1; // 2 ki power 0 = 1.
    int ans = 0;
    int unitDigit;

    while (binaryNumber > 0)
    {

        unitDigit = binaryNumber % 10;
        ans = ans + (unitDigit * power);

        binaryNumber /= 10;
        power *= 2;
    }
    cout << ans << endl;
    return 0;
}
