#include <iostream>
using namespace std;

int main()
{

    // Robot having some buttons that
    // you are gonna press and he is gonna greet you
    char button;
    cout << "Enter the button: " << endl;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Asslam o Alaikum" << endl;
        break;
    case 'c':
        cout << "Hola" << endl;
        break;
    case 'd':
        cout << "Namaste" << endl;
        break;
    case 'e':
        cout << "ciao" << endl;
        break;
    default:
        cout << "I am still learning more" << endl;
        break;
    }

    return 0;
}