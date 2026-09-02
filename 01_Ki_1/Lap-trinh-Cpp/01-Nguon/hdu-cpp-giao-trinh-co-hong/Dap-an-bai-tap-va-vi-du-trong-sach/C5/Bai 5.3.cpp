//Bài 5.3
##include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    double fx;
    if(x < -1)   fx = 2 * x;
    else    if(x > 1)   fx = sin(x) + exp(sqrt(x));
            else    fx = acos(x);
    return fx;
}

int main()
{
    double x;
    cin >> x;
    cout << setprecision(2) << fixed << f(x);
    return 0;
}
