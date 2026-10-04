#include <iostream>
using namespace std;
/* Write a program that takes a number and prints its multiplication table from 1 to 10.*/
int main()
{

    cout << " Table Of 3 " << endl;
    int number = 3;
    for (int i = 1; i <= 10; i++)
    {
        int multiple = 0;
        multiple = i * number;
        cout << i << " x " << number << " = " << multiple << endl;
    }

    return 0;
}
