#include <iostream>
using namespace std;

/* 9. Write a program to check whether a number is a palindrome.
   Example: 1221 is a palindrome. */

int main()
{
    int num = 1221;
    int ans = 0;
    int reverse = 0;
    while (num > 0)
    {
        reverse = num % 10;
        ans = ans * 10 + reverse;
        num = num / 10;
    }
    if (num == reverse)
    {
        cout << " is a palindrom ";
    }

    return 0;
}
