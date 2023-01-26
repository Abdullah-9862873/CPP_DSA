// Write a program to output whether a number is
// divisible by 2 or 3 or both

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << "The number is divisible by both 2 and 3" << endl;
    }
    else if (num % 2 == 0)
    {
        cout << "The number is divisible by 2 only" << endl;
    }
    else if (num % 3 == 0)
    {
        cout << "The number is divisible by 3 only" << endl;
    }
    else
    {
        cout << "The number is neither divisible by 2 nor 3" << endl;
    }

    return 0;
}