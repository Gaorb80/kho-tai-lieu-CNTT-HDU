#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b, nho, lon;
    long long s = 0;
    cin >> a >> b;
    if(a < b)
    {
        nho = a;
        lon = b;
    }
    else
    {
        nho = b;
        lon = a;
    }
    for(int i = nho + 1; i < lon; i++)
        s += i;
    cout << s;
    return 0;
}

/*
// Cách khác
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b, nho, lon;
    long long s = 0;
    cin >> a >> b;
    nho = min(a, b);
    lon = max(a, b);
    for(int i = nho + 1; i < lon; i++)
        s += i;
    cout << s;
    return 0;
}
*/
