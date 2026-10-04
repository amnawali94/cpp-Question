#include <iostream>
using namespace std;
/*15. Write a program to search for a given number in an array and display its position if found.*/
int main()
{
    int arr[3] = {1, 2, 3};
    int num;
    cout << "enter number :";
    cin >> num;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] = num)
        {
            cout << arr[i];
        }
    }

    return 0;
}
