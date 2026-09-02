#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 10;
    while (k <= 20)
    {
        if (k%3 == 0 || k%5 == 0)  continue;
        cout << k << " ";
        k++;
    }
    return 0;
}
