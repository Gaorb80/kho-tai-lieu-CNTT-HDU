#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long n;
    int cs, d = 0;
    cin >> n;
    while(n > 0)
    {
        cs = n % 10;
        n /= 10;
        if(cs % 2 != 0)
            d++;
    }
    cout << d;
    return 0;
}
