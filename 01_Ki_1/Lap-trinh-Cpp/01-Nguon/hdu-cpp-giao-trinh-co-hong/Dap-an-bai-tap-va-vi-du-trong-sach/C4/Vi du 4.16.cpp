#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    for(i = 0; i < 2; i++) // (1)
    {
        cout << "One ";
        for(j = i + 1; j < 2; j++) // (2)
            cout << "Two ";
    }
}
