#include <iostream>
using namespace std;
/*19. Write a function that receives three integers and returns the largest value.*/
int findlarge(int a, int b, int c)
{
    int large = c;
    c = a;
    a = b;
    cout << c;
    return large;
}
int main()
{
    int ans = findlarge(14, 12, 10);
    cout << ans;
    return 0;
}
