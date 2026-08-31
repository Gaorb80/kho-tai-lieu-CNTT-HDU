#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    do
    {
        cin >> n;
        if(n >= 0 && n <= 255)
            cout << n << '\n';
    }while(n >= 0 && n <= 255);
    return 0;
}
