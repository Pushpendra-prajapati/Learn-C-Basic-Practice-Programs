// Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.

#include <iostream>
using namespace std;

void person(int age)
{
    if (age >= 18)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    int age;
    cout << "Please enter your age :";
    cin >> age;

    person(age);
    return 0;
}
