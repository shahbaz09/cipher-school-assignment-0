/* Q.1 Given a number x, determine whether the given number is Armstrong number or not. A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.
abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + .... */

#include<bits/stdc++.h>
using namespace std;

int power(int x, unsigned int y)
{
    if( y == 0)
        return 1;
    if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    return x*power(x, y/2)*power(x, y/2);
}

int order(int x)
{
    int n = 0;
    while (x)
    {
        n++;
        x = x/10;
    }
    return n;
}

bool isArmstrong(int x)
{
    int n = order(x);
    int temp = x, sum = 0;
    while (temp)
    {
        int r = temp%10;
        sum += power(r, n);
        temp = temp/10;
    }

    return (sum == x);
}
int main()
{
    int x = 1253;
    cout << isArmstrong(x) << endl;
    x = 1634;
    cout << isArmstrong(x) << endl;
    return 0;
}
