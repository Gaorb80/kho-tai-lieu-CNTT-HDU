#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p, i;
    p = &i;
    *p = 1;
    while(*p <= 10)
    {
        cout << *p << '\n';
        (*p)++;
    }
    return 0;
}
