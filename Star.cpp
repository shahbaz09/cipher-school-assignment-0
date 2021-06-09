/* Q.3 1. You are given a number n.
        2. You've to create a pattern of * and separated by tab as shown in output format. */
        
#include <bits/stdc++.h>
using namespace std;
 
void star(int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n) 
	{
    	
        while (k < (n - i - 1)) 
		{
            cout << "   ";
            k++;
        }
        k = 0;
        while (j <= i)
		 {
            cout << " * ";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}
int main()
{
    int n = 5;
    star(n);
    return 0;
}
