#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    if(a != 10)
    {
        if(a < 30)    cout << "1\n";
        else    cout << "2\n";
    }
    else    cout << "3\n";
    return 0;
}
/*
Chương trình in ra: 3
Vì a = 10 nên biểu thức điều kiện trong lệnh if đầu tiên không đúng
nên sẽ chuyển sang thực hiện lệnh else của if tức là in ra 3
*/
