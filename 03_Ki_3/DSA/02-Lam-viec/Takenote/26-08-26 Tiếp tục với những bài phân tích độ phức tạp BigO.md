---
tags:
  - university
  - DSA
---
# Bài tập trên lớp:
**BÀI TẬP**
**Bài 6:** Xác định độ phức tạp tính toán của đoạn chương trình sau:

```cpp
for (i= 1;i<=n;i++)
    for (j= 1;j<=m;j++) {
        for (k= 1;k<=x;k++)
            //lệnh
        for (h= 1;h<=y;h++)
            //lệnh
    }

```


**Bài 7:** Xác định độ phức tạp tính toán của đoạn chương trình sau:

```cpp
for (i= 1;i<=n;i++)
    for (u= 1;u<= m;u++)
        for (v= 1;v<=n;v++)
            //lệnh

for (j= 1;j<=x;j++)
    for (k= 1;k<=z;k++)
        //lệnh

```

---
  
**Bài 6**
**Lời giải:**
Xét các vòng lặp từ trong ra ngoài:
1. **Các vòng lặp trong cùng (cấp 3):**
    - Vòng lặp theo biến $k$ chạy từ $1$ đến $x$: thực hiện $x$ lần lệnh.
    - Vòng lặp theo biến $h$ chạy từ $1$ đến $y$: thực hiện $y$ lần lệnh.
    - Hai vòng lặp này nằm **nối tiếp** nhau bên trong thân vòng lặp $j$, do đó tổng số lần thực hiện lệnh trong một chu kỳ của vòng lặp $j$ là:
        $$T_1 = x + y$$
2. **Vòng lặp giữa (cấp 2):**
    - Vòng lặp theo biến $j$ chạy từ $1$ đến $m$: lặp $m$ lần.
    - Số lần thực hiện khối lệnh bên trong vòng lặp $i$ là:
    - $$T_2 = m \cdot T_1 = m \cdot (x + y)$$
3. **Vòng lặp ngoài cùng (cấp 1):**
    - Vòng lặp theo biến $i$ chạy từ $1$ đến $n$: lặp $n$ lần.
    - Tổng số lần thực hiện các lệnh cơ bản của toàn bộ đoạn chương trình là:
        $$T(n, m, x, y) = n \cdot T_2 = n \cdot m \cdot (x + y)$$
**Kết luận:**
Độ phức tạp tính toán (thời gian) của đoạn chương trình là:
$$O(n \cdot m \cdot (x + y))$$
_(Trường hợp đặc biệt: Nếu giả định $n = m = x = y$, độ phức tạp sẽ là $O(n^3)$)._

**Bài 7**
**Lời giải:**
Đoạn chương trình gồm **2 khối vòng lặp độc lập (nối tiếp nhau)**. Ta tính số lần thực hiện lệnh của từng khối:
1. **Khối vòng lặp thứ nhất:**
    - Vòng lặp $v$ chạy từ $1$ đến $n$ ($n$ lần).
    - Vòng lặp $u$ chạy từ $1$ đến $m$ ($m$ lần).
    - Vòng lặp $i$ chạy từ $1$ đến $n$ ($n$ lần).
    - Do 3 vòng lặp này **lồng nhau**, tổng số lần thực hiện lệnh trong khối 1 là:
        $$T_1 = n \cdot m \cdot n = n^2 \cdot m$$
        
2. **Khối vòng lặp thứ hai:**
    
      
    - Vòng lặp $k$ chạy từ $1$ đến $z$ ($z$ lần).
        
          
        
    - Vòng lặp $j$ chạy từ $1$ đến $x$ ($x$ lần).
    - Do 2 vòng lặp này **lồng nhau**, tổng số lần thực hiện lệnh trong khối 2 là:
        $$T_2 = x \cdot z$$
1. **Tổng số lần thực hiện của toàn bộ chương trình:**
    Do hai khối lặp nằm **nối tiếp nhau**, tổng số phép tính là:
    $$T = T_1 + T_2 = n^2 \cdot m + x \cdot z$$
**Kết luận:**

Độ phức tạp tính toán (thời gian) của đoạn chương trình là:

$$O(n^2 \cdot m + x \cdot z)$$

_(Trường hợp đặc biệt: Nếu coi tất cả các biến kích thước dữ liệu $n, m, x, z$ đều bằng $n$, độ phức tạp sẽ là $O(n^3)$)._

