#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, *a;
    a = new int[50];
    cin >> n;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(i == j)  *(a + n*i + j) = 1;
            else    *(a + n*i + j) = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << *(a + n*i + j) << ' ';
        cout << '\n';
    }
    delete[] a;
    return 0;
}
