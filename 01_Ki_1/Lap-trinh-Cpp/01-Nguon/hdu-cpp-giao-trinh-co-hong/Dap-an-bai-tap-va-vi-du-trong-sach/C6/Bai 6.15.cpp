#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool b[32];
    unsigned int n, i = 0;
    cin >> n;
    while(n > 0)
    {
        b[i] = n % 2;
        n /= 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--)
        cout << b[j];
    return 0;
}

/*
//Cách khác
#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool b[32];
    unsigned int n, i = 0;
    cin >> n;
    while(n > 0)
    {
        b[i] = n & 1;
        n >>= 1; // Dịch phải bit, tương đương với n /= 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--)
        cout << b[j];
    return 0;
}
*/
