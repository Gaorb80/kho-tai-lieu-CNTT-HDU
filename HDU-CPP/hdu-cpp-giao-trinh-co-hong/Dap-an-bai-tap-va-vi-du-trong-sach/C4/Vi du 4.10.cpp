#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n ;
    int dem = 0;
    cout << "Nhap so nguyen duong n: "; cin >> n;
    while(n != 0)
    {
        dem++;
        n /= 10;
    }
    cout << "So luong chu so la: " << dem;
    return 0;
}
