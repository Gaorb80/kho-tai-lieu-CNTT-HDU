//Ví dụ 5.4:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cout << "Nhap 1 so nguyen: "; cin >> n;
        if(n <= 0)  return 0; // Kết thúc chương trình
        cout << "\nSo vua nhap la: " << n;
    }
    return 0;
}
