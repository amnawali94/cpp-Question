#include <iostream>
using namespace std;
/*12. Write a program to find the largest value in an array of 8 integers.*/
int main()
{
    int arr[8] = {2, 3, 4, 5, 6, 7, 9, 12};
    for (int i = 0; i < 8; i++)
    {

        cout << arr[i] << " ";
    }

    cout << arr[7];

    return 0;
}
