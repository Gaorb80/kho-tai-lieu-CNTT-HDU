//Ví dụ 3.6:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double bmi, cao, nang;
    cout << "Nhap chieu cao (m): "; cin >> cao;
    cout << "Nhap can nang (kg): "; cin >> nang;
    bmi = nang/(cao*cao);
    cout << "BMI: " << bmi << '\n';
    if(bmi < 20)    cout << "Gay";
    else    if(bmi <= 25)     cout << "Binh thuong";
            else    if(bmi <= 30)    cout << "Thua can";
                    else    if(bmi <= 40)    cout << "Beo";
                            else    cout << "Beo phi";
    return 0;
}
