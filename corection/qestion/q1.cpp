#include <iostream>
using namespace std;
/*1. Write a program that takes a student's marks in three subjects and prints the total and average.*/
float avage(int sub1, int sub2, int sub3)
{
    float ans = (sub1 + sub2 + sub3) / 3;
    return ans;
}
int main()
{
    int ans = avage(30, 40, 50);
    cout << ans << endl;
    return 0;
}
