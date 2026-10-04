#include <iostream>
using namespace std;
/*7. Write a program to count how many digits are present in an integer*/
int main()
{
    int num = 13388;
    int count=0;
    if(num==0)
    {
        count=1;
    }
    for (int i = 0; i < num; i++)
    {
        num=num %10;
        count++;
    }
    cout<<"digit =" << count;


    return 0;
}
