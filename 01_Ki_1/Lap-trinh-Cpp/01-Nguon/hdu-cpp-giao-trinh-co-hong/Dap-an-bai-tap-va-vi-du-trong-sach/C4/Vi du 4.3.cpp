#include <bits/stdc++.h>
using namespace std;

int main()
{
   	int n;
    	cin >> n;
   	for ( ; n % 5 != 0; )
        	n--;
	for (int i = n; i >= 5; i -= 5)
    	{
       	cout << i << ' ';
    	}
}



