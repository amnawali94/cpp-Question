#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter number :";
    cin >> num;
    int range;
    cout << "enter Range :";
    cin >> range;
    int sum = 0;

    for (int i = num; i <= range; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum;

    return 0;
}
