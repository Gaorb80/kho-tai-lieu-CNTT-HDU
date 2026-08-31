#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = -1, b = 0, c = 1;
    if(a < b && b < c)
    {
        if(!b)
            if(-a == c)    cout << "One\n";
            else    cout << "Two\n";
    }
    else   cout << "Three\n";
    return 0;
}

/*
Chương trình in ra: One
Biểu thức điều kiện trong lệnh if đầu tiên là đúng
vì a < b (-1 < 0) và b < c (0 < 1)
nên khối lệnh trong lệnh if đầu tiên được thực hiện
Biểu thức điều kiện trong lệnh if thứ 2 đúng vì -a == c ( -(-1) == 1)
nên lệnh cout << "One\n"; được thực hiện tức chương trình in ra: One
*/
