#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int sum = 0;
    int avg = 1;
    for (int i = 0; i < 4; i++)
    {
        sum = arr[i] + sum;
        avg = sum / 3;
    }
    cout << sum << endl;
    cout << avg;
    return 0;
}
