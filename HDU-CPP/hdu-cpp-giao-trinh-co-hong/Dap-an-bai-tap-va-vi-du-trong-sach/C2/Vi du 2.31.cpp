//Ví dụ 2.31:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    bitset<4> x { 0b0100 };
    x >>= 1;
    cout << x;
    return 0;
}
