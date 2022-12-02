// Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.

#include <iostream>
using namespace std;

double circle(int r)
{
    cout << "Area : " << 3.14 * r * r << endl;
    cout << "Circumference : " << 2 * 3.14 * r << endl;
}

int main()
{
    int radius;
    cout << "Enter radius :";
    cin >> radius;

    circle(radius);
    return 0;
}