#include <iostream>
using namespace std;
/*18. Write a function named isPrime() that receives an integer and returns true if the number is prime, otherwise false.*/
int isPrime(int num)
{
    if (num < 2)
    {
        cout << "not a prime number";
        return 0;
    }
    else
    {

        for (int i = 0; i <= num; i++)
        {
            /* code */
            if (num % i == 0)
            {
                cout << "not a prime number ";
                return 0;
            }
            else
            {
                cout << "is a prime numbe";
                return 0;
            }
        }

        return 0;
    }
}
int main()
{

    int ans = isPrime(12);
    cout << ans;

    return 0;
}
