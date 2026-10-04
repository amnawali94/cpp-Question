#include <iostream>
using namespace std;
/*11. Write a program to print all numbers between 1 and N that are divisible by both 3 and 5.*/
int main()
{
    int num;
    cout << "enter number :";
    cin >> num;
    int range;
    cout << "enter Range :";
    cin >> range;
    for (int i = num; i <= range; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {

            cout << i << " ";
        }
    }

    return 0;
}
