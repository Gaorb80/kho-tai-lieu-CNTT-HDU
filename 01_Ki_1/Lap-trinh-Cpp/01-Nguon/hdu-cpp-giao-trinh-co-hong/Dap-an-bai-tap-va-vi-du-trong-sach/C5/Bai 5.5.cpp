//Bài 5.5
#include <bits/stdc++.h>
using namespace std;

double s(int n)
{
    double t = 0.0;
    for(int i = 0; i <= n; i++)
        t += (double)1 / (2 * i + 1);
    return t;
}

int main ()
{
    int n;
    cin >> n;
    cout << setprecision(3) << fixed << s(n) << '\n';
    return 0;
}
