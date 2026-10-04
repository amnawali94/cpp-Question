#include <iostream>
using namespace std;
/*. Write a program to input a number and determine whether it is positive, negative, or zero.*/
int main()
{
    int number;
    cout << "enter number :";
    cin >> number;
    if (number > 0)
    {
        cout << number << " is positive integer";
    }
    if (number < 0)
    {
        cout << number << " is negative integer";
    }
    else
    {
        cout << " zero ";
    }
    return 0;
}
