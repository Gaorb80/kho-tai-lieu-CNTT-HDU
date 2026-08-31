// Cách 1: chậm
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, m, a, b;
    cin >> n >> m;
    a = n;
    b = m;
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout << a << ' ' << m*n / a;
    return 0;
}

/*
// Cách 2: nhanh hơn
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, m, a, b;
    cin >> n >> m;
    a = n;
    b = m;
    while(b != 0)
    {
      int r = a % b;
      a = b;
      b = r;
    }
    cout << a << ' ' << m*n / a;
    return 0;
}
/*

/*
//Cách 3:
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, m;
    cin >> n >> m;
    cout << __gcd(n, m) << ' ' << m*n / __gcd(n, m);
    return 0;
}
*/
