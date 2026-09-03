#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long n;
    int cs, m = 0;
    cin >> n;
    while(n > 0)
    {
        cs = n % 10;
        n /= 10;
        if(cs > m)
            m = cs;
    }
    cout << m;
    return 0;
}
