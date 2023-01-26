// Implement a Simple Calculator using Switch

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "What do you wanna perform?" << endl;
    cout << "1 for Addition" << endl;
    cout << "2 for Subtraction" << endl;
    cout << "3 for Multiplication" << endl;
    cout << "4 for Division" << endl;
    cin >> num;

    float a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;

    switch (num)
    {
    case 1:
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
        break;
    case 2:
        cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
        break;
    case 3:
        cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
        break;
    case 4:
        cout << "Division of " << a << " and " << b << " is " << a / b << endl;
        break;
    default:
        cout << "This is not the case. Please Watch the instructions carefully" << endl;
        break;
    }
    return 0;
}