//Bài 5.15
#include <bits/stdc++.h>
using namespace std;

long long giaithua(int n)
{
    if(n == 1 || n == 0)  return 1;
    return n * giaithua(n-1);
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << giaithua(n)/(giaithua(k)*giaithua(n-k));
}
