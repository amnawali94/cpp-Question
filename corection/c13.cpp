#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &ref = x;
    ref = x;
    cout << ref;
    return 0;
}
