#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, a[] = {-1, 5, 7}, b[] = {5, 4, -1};
    for(i = 0; i < 3; i++)
        a[a[i] - b[2-i]]++;
    for(--i; a[i]; i--)
        cout << a[i] << '\n';
    return 0;
}

/*
Gợi ý trả lời:
Các lần lặp của vòng lặp đầu tiên:
- Lần lặp đầu tiên (i = 0): a[a[0]-b[2]]++ = a[-1-(-1)]++ = a[0]++ = 0.
- Lần lặp thứ hai (i = 1): a[a[1]-b[1]]++ = a[5-4]++ = a[1]++ = 6.
- Lần lặp thứ ba (i = 2): a[a[2]-b[0]]++ = a[7-5]++ = a[2]++ = 8.
Do đó, a[0], a[1] và a[2] lần lượt trở thành 0, 6 và 8.
Trong vòng lặp thứ hai, i đầu tiên giảm và trở thành 2.
Điều kiện tương đương với a[i] != 0.
Vì a[0] bằng 0, vòng lặp đưa ra các giá trị
của a[2] và a[1], tức là 8 và 6, sau đó kết thúc.
*/
