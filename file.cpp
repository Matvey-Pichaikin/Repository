#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    double first_number;
    double second_number;
    char math_operation;

    cout << "Enter first number: ";
    while (!(cin >> first_number))
    {
        cin.clear();
        if (x == 0)
        {
            cout << "Enter a number!\n";
            x = 1;
        }
        cin.get();
    }

    cout << "Enter second number: ";
    while (!(cin >> second_number))
    {
        cin.clear();
        if (x == 0)
        {
            cout << "Enter a number!\n";
            x = 1;
        }
        cin.get();
    }

    cout << "Enter a mathematical operation ('+', '-', '*', '/'): ";
    cin >> math_operation;
    
    return 0;
}