#include <bits/stdc++.h>
using namespace std;

double s1(int n)
{
    double t = 0.0;
    for(int i = 1; i <= n; i++)
        t = sqrt(2 + t);
    return t;
}

double s2(int n)
{
    double t = 0.0;
    for(int i = 1; i <= n; i++)
        t = sqrt(i + t);
    return t;
}

int main()
{
    int n;
    #define name "BAI2"
    if(fopen(name".INP", "r"))
    {
        freopen(name".INP", "r", stdin);
        freopen(name".OUT", "w", stdout);
    }
    cin >> n;
    cout << setprecision(3) << fixed << s1(n) << '\n';
    cout << setprecision(3) << fixed << s1(n) << '\n';
    return 0;
}
