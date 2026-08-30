#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tmp, mamoi1, mamoi2;
    cout << "Nhap ma pin: "; cin >> tmp;
    if(tmp == 1234)
    {
        cout << "Nhap ma moi: "; cin >> mamoi1;
        cout << "Nhap lai ma moi: "; cin >> mamoi2;
        if(mamoi1 == mamoi2)  cout << "\nSave";
        else  cout << "\nWrong";
    }
    else  cout << "\nWrong";
    return 0;
}
