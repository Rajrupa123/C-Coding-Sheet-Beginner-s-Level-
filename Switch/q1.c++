// To create basic calculator using switch statements
#include <iostream>
using namespace std;
int main()
{
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
    int result;
    int operation;
    cout << "1) Addition = +";
    cout << " 2)  Subtraction = -";
    cout << " 3) Multiplication = *";
    cout << " 4)Division = /";
    cin >> operation;
    switch (operation)
    {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;

    default:
        cout << "Over";
        break;
    }
}