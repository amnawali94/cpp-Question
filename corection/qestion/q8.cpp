#include <iostream>
using namespace std;

int main()
{
    int num = 364;
    int ans = 0;
    while (num > 0)
    {
        int reverse = num % 10;
        ans = ans * 10 + reverse;
        num = num / 10;
    }
    cout << ans;
    return 0;
}
