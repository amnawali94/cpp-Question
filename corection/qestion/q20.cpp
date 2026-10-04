#include <iostream>
using namespace std;
/*20. Write a simple calculator using a switch statement. The user should enter two numbers and an operator (+, -, *, /).*/
int main()
{
    int num1, num2;
    cout << "enter number1 : ";
    cin >> num1;
    cout << "enter number2 : ";
    cin >> num2;
    char ch;
    cout << "(+,-,*,/)";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;
    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;
    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
    default:
        break;
        cout << "invalid input";
    }
    return 0;
}
