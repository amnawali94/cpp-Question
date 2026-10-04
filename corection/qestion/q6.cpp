#include <iostream>
using namespace std;
/*6. Write a program to calculate the factorial of a given positive integer using a loop*/
int main()
{
    int num = 5;
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {

        factorial = i * factorial;
    }
    cout << "factorial is :" << factorial;

    return 0;
}
