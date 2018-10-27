#include <iostream>
#include <algorithm>
using namespace std;
unsigned int getUglyNo(unsigned int n)
{
    unsigned int ugly[n];
    unsigned int i2 = 0,i3 = 0, i5 = 0;
    unsigned int next_multiple_of_2 = 2;
    unsigned int next_multiple_of_3 = 3;
    unsigned int next_multiple_of_5 = 5;
    unsigned int next_ugly = 1;
    ugly[0] = 1;
    for(int i = 1;i<n;i++)
    {
        next_ugly = min(next_multiple_of_2,min(next_multiple_of_3, next_multiple_of_5));
        ugly[i] = next_ugly;
        if(next_ugly == next_multiple_of_2)
        {
            i2++;
            next_multiple_of_2 = ugly[i2]*2;
        }
        if(next_ugly == next_multiple_of_3)
        {
            i3++;
            next_multiple_of_3 = ugly[i3]*3;
        }
        if(next_ugly == next_multiple_of_5)
        {
            i5++;
            next_multiple_of_5 = ugly[i5]*5;
        }
    }
    return next_ugly;
}
int main()
{
    cout<<getUglyNo(10);
    return 0;
}
