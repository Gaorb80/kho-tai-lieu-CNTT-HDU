//Ví dụ 3.1:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, m;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    m = a;
    if(b > m)
    {
        m = b;
    }
    cout << "So lon = " << m;
    return 0;
}

