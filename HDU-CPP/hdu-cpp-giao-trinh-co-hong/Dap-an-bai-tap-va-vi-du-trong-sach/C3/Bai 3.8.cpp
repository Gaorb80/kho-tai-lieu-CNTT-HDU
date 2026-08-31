#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  s1, t1, s2, t2;
    cin >> s1 >> t1 >> s2 >> t2;
    if(s1 * t2 > s2 * t1)
        cout << "YES";
    else
        cout << "NO";
}
