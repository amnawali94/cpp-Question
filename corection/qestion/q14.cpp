#include <iostream>
using namespace std;
/*14. Write a program to count how many even and odd numbers are present in an array.*/
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int countevan = 0;
    int countodd = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countevan++;
        }
    }
    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            /* code */
            countodd++;
        }
    }
    cout << "sum of odd :" << countodd << endl;
    cout << "sum of even :" << countevan << endl;
    return 0;
}
