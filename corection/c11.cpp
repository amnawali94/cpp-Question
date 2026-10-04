#include <iostream>
using namespace std;

int square(int n)
{
    return n * n;
}

int main()
{
    int n = 3;
    int ans = square(n);
    cout << ans;
    return 0;
}
