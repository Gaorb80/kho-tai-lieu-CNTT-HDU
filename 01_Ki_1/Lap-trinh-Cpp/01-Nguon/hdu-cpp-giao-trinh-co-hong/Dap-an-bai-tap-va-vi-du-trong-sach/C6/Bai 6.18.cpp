#include <bits/stdc++.h>
using namespace std;

const int MAX = 105;
int a[MAX], n, d = 0;

// Tìm giá trị nhỏ nhhất
int Min(int a[], int n)
{
    int m = INT_MAX;
    for(int i = 1; i <= n; i++)
        if(a[i] < m)	m = a[i];
    return m;
}

// Tìm giá tri lớn nhất
int Max(int a[], int n)
{
    int m = INT_MIN;
    for(int i = 1; i <= n; i++)
        if(a[i] > m)	m = a[i];
    return m;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    int lon = Max(a, n);
    int nho = Min(a, n);
    for(int i = 1; i <= n; i++)
        if(a[i] == lon) a[i] = nho;
        else if(a[i] == nho) a[i] = lon;
    for(int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    return 0;
}
