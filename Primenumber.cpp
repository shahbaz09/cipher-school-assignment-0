/* Q.4 1. You've to print all prime numbers between a range.
        2. Take as input "low", the lower limit of range.
        3. Take as input "high", the higher limit of range.
        4. For the range print all the primes numbers between low and high (both included).*/


#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    int low;
    cin >> low;

    int high;
    cin >> high ;

    for (int num = low; num <= high; num++)
	{
        int div = 2;
        while (div * div <= num)
		{
            if (num % div == 0)
			{
                break;
            }
            div++;
        }

        if (div * div > num)
		{
            cout << (num) << endl;
        }
    }
    return 0;
}
