---
tags:
  - DSA
---
# Prompt
```txt
Hãy đóng vai một Giảng viên chấm thi môn Lập trình & Cấu trúc dữ liệu - Giải thuật khắt khe. Trình bày lời giải cho câu hỏi dưới đây theo **phong cách tự luận chuẩn thi cử trên môi trường đại học** để đạt điểm 9-10
```
# Note linh tinh

## BT - đánh gia độ phức tạp: // 1. Phân tích thời gian thực hiện của các đoạn chương trình sau:
```cpp
// 1. Phân tích thời gian thực hiện của các đoạn chương trình sau:

// 1/
for (int i = 1; i <= n; i++)
    if (i % 2 == 0)
        c++;

cout << "2.1. c = " << c << endl;

c = 0;


// 2/
for (int i = 1; i <= n; i++) {
    if (i % 2 != 0)
        c1++;
    else
        c2++;
}
cout << "2.2. c1 = " << c1 << ", c2 = " << c2 << endl;


// 3/
c = 0;
for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
        for (int j = 1; j <= n; j++)
            c++;
    }
}
cout << "2.3. c = " << c << endl;


// 4/
a = 0; b = 0; c = 0;
for (int i = 1; i <= n; i++) {
    a++;
    b += i;
    c += i * i;
}
cout << "2.4. a = " << a << ", b = " << b << ", c = " << c << endl;


// 5/
int i = n;
d = 0;
while (i > 0) {
    i--;
    d += i;
}
cout << "2.5. d = " << d << endl;


// 6/
i = 0; d = 0;
do {
    i++;
    if (i % 3 == 0)
        d += i;
} while (i <= n);
cout << "2.6. d = " << d << endl;


// 7/
d = 0;
for (int i = 1; i <= n - 1; i++) {
    for (int j = i + 1; j <= n; j++) {
        d++;
    }
}
cout << "2.7. d = " << d << endl;


// 8/
d = 0;
for (int i = 1; i <= n - 2; i++) {
    for (int j = i + 1; j <= n - 1; j++) {
        for (int k = j + 1; k <= n; k++) {
            d++;
        }
    }
}
cout << "2.8. d = " << d << endl;


// 9/
d = 0;
while (n > 0) {
    n = n / 2;
    d++;
}
cout << "2.9. d = " << d << endl;


// 10/
cout << "Nhap x: ";
cin >> x;
s = 1; p = 1;
for (int i = 1; i <= n; i++) {
    p = p * x / i;
    s += p;
}
cout << "2.10. s = " << s << endl;
```
**Giải:**

## 2.1. Phân tích vòng lặp đếm số chẵn

```cpp
for (int i = 1; i <= n; i++)
    if (i % 2 == 0)
        c++;
```

- Vòng lặp chạy từ `i = 1` đến `i = n`, tổng cộng `n` lần.
- Bên trong vòng lặp chỉ có 1 phép so sánh `i % 2 == 0` và 1 phép gán `c++`, đây là thao tác hằng số O(1).
- Không có vòng lặp nào lồng bên trong.
- Tổng số phép thực hiện: n × O(1) = O(n).

**Kết quả: O(n)**

---

## 2.2. Phân tích vòng lặp chẵn/lẻ

```cpp
for (int i = 1; i <= n; i++) {
    if (i % 2 != 0)
        c1++;
    else
        c2++;
}
```

- Vòng lặp chạy từ `i = 1` đến `i = n`, tổng cộng `n` lần.
- Bên trong chỉ có 1 phép chia lấy dư `% 2` và 1 phép gán, đều là thao tác hằng số O(1).
- Dù `i` chẵn hay lẻ, mỗi lần lặp đều thực hiện đúng 1 nhánh `if` hoặc `else`, không có vòng lặp con.
- Tổng số phép thực hiện: n × O(1) = O(n).

**Kết quả: O(n)**

---

## 2.3. Phân tích vòng lặp lồng nhau có điều kiện

```cpp
for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
        for (int j = 1; j <= n; j++)
            c++;
    }
}
```

- Vòng lặp ngoài chạy từ `i = 1` đến `i = n`, tổng cộng `n` lần.
- Trong mỗi lần lặp ngoài, kiểm tra `i % 2 == 0`: nếu `i` chẵn thì chạy vòng lặp trong, nếu `i` lẻ thì bỏ qua.
- Số lần `i` chẵn trong khoảng 1..n là khoảng n/2 lần.
- Mỗi lần vòng lặp trong chạy, nó chạy từ `j = 1` đến `j = n`, tức n lần thao tác O(1).
- Tổng số phép thực hiện: (n/2) × n × O(1) = O(n²).

**Kết quả: O(n²)**

---

## 2.4. Phân tích 3 biến cộng dồn

```cpp
a = 0; b = 0; c = 0;
for (int i = 1; i <= n; i++) {
    a++;
    b += i;
    c += i * i;
}
```

- Vòng lặp chạy từ `i = 1` đến `i = n`, tổng cộng `n` lần.
- Mỗi lần lặp thực hiện 3 thao tác: `a++`, `b += i`, `c += i * i`. Cả 3 đều là phép toán trên số nguyên, mỗi phép là O(1).
- Không có vòng lặp con hay phép lặp nào ở trong.
- Tổng số phép thực hiện: n × 3 × O(1) = O(n).

**Kết quả: O(n)**

---

## 2.5. Phân tích while chia đôi

```cpp
int i = n;
d = 0;
while (i > 0) {
    i--;
    d += i;
}
```

- Biến `i` bắt đầu bằng `n`.
- Mỗi lần lặp: `i` giảm đi 1 đơn vị (`i--`), `d` cộng thêm `i`.
- Vòng lặp chạy cho đến khi `i = 0`, tổng cộng `n` lần.
- Mỗi lần lặp là thao tác hằng số O(1).
- Tổng số phép thực hiện: n × O(1) = O(n).

**Kết quả: O(n)**

---

## 2.6. Phân tích do-while

```cpp
i = 0; d = 0;
do {
    i++;
    if (i % 3 == 0)
        d += i;
} while (i <= n);
```

- Vòng `do-while` luôn chạy ít nhất 1 lần.
- Biến `i` bắt đầu từ 0, tăng lên 1 đơn vị mỗi lần (`i++`).
- Điều kiện dừng là `i > n`, nghĩa là vòng lặp chạy từ `i = 1` đến `i = n+1`, tổng cộng `n+1` lần.
- Mỗi lần lặp: 1 phép tăng `i++`, 1 phép chia dư `% 3`, và possibly 1 phép cộng `d += i`. Tất cả đều O(1).
- Tổng số phép thực hiện: (n+1) × O(1) = O(n).

**Kết quả: O(n)**

---

## 2.7. Phân tích vòng lặp đôi

```cpp
d = 0;
for (int i = 1; i <= n - 1; i++) {
    for (int j = i + 1; j <= n; j++) {
        d++;
    }
}
```

- Vòng lặp ngoài chạy từ `i = 1` đến `i = n-1`, tổng cộng `n-1` lần.
- Vòng lặp trong chạy từ `j = i+1` đến `j = n`, mỗi lần lặp ngoài có số lần lặp trong khác nhau.
- Cụ thể: khi `i=1` thì vòng trong chạy n-1 lần, khi `i=2` chạy n-2 lần, ..., khi `i=n-1` chạy 1 lần.
- Tổng số lần `d++` thực hiện: (n-1) + (n-2) + ... + 1 = n(n-1)/2.
- Phép nhân và chia với hằng số không ảnh hưởng đến bậc của đa thức.
- Tổng số phép thực hiện: n(n-1)/2 = O(n²).

**Kết quả: O(n²)**

---

## 2.8. Phân tích vòng lặp 3 lớp

```cpp
d = 0;
for (int i = 1; i <= n - 2; i++) {
    for (int j = i + 1; j <= n - 1; j++) {
        for (int k = j + 1; k <= n; k++) {
            d++;
        }
    }
}
```

- Đây là vòng lặp 3 lớp lồng nhau, mỗi vòng chạy phụ thuộc vào vòng ngoài.
- Vòng ngoài chạy từ `i=1` đến `n-2`, vòng giữa chạy từ `j=i+1` đến `n-1`, vòng trong chạy từ `k=j+1` đến `n`.
- Mỗi tổ hợp `(i, j, k)` thỏa mãn `1 ≤ i < j < k ≤ n` chỉ được đếm đúng 1 lần.
- Số tổ hợp như vậy bằng "chọn 3 từ n" = n(n-1)(n-2)/6.
- Phép chia cho hằng số 6 không ảnh hưởng đến bậc đa thức.
- Tổng số phép thực hiện: n(n-1)(n-2)/6 = O(n³).

**Kết quả: O(n³)**

---

## 2.9. Phân tích while chia đôi n

```cpp
d = 0;
while (n > 0) {
    n = n / 2;
    d++;
}
```

- Biến `n` bắt đầu bằng giá trị ban đầu, mỗi lần lặp chia cho 2.
- Giá trị `n` giảm dần: n → n/2 → n/4 → n/8 → ... → 1 → 0.
- Số lần chia cho 2 để `n` về 0 là ⌊log₂(n)⌋ + 1.
- Mỗi lần lặp là thao tác hằng số O(1) (chia integer và tăng biến đếm).
- Tổng số phép thực hiện: (log₂(n) + 1) × O(1) = O(log n).

**Kết quả: O(log n)**

---

## 2.10. Phân tích công thức lũy thừa

```cpp
cin >> x;
s = 1; p = 1;
for (int i = 1; i <= n; i++) {
    p = p * x / i;
    s += p;
}
```

- Vòng lặp chạy từ `i = 1` đến `i = n`, tổng cộng `n` lần.
- Mỗi lần lặp: 1 phép nhân `p * x`, 1 phép chia `/ i`, 1 phép cộng `s += p`. Tất cả đều là phép toán trên số thực, mỗi phép là O(1).
- Không có vòng lặp con hay phép lặp nào ở trong.
- Tổng số phép thực hiện: n × 3 × O(1) = O(n).

**Kết quả: O(n)**

---

## BT附加 - Thuật toán count_1 (Nguồn youtube)

```cpp
int count_1(int N) {
    sum = 0;
    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j++) {
            sum++;
        }
    }
    return sum;
}
```

- Vòng lặp ngoài chạy từ `i = 1` đến `i = n`, tổng cộng `n` lần.
- Vòng lặp trong chạy từ `j = i` đến `j = n`, mỗi lần lặp ngoài có số lần lặp trong khác nhau.
- Cụ thể: khi `i=1` thì vòng trong chạy n lần, khi `i=2` chạy n-1 lần, ..., khi `i=n` chạy 1 lần.
- Tổng số lần `sum++` thực hiện: n + (n-1) + ... + 1 = n(n+1)/2.
- Phép nhân và chia với hằng số không ảnh hưởng đến bậc đa thức.
- Tổng số phép thực hiện: n(n+1)/2 = O(n²).
- Giá trị trả về sum = n(n+1)/2.

**Kết quả: O(n²)**
```cpp
// Phân tích thời gian thực hiện của các đoạn chương trình sau:
int count_1(int N)
{
  sum = 0
  for (i=1; i<=n; i++) {
    for (j=i; j<=n; j++) {
      sum++
    }
  }
  return sum
}
```