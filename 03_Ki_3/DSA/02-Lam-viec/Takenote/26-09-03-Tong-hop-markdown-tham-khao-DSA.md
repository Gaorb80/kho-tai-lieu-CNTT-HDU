---
tags:
  - DSA
  - reference
---

# TỔNG HỢP KIẾN THỨC DSA — ĐÁNH GIÁ ĐỘ PHỨC TẠP THUẬT TOÁN

> Tài liệu tham khảo tổng hợp từ các ghi chú trong thư mục Takenote (08-19 → 08-26).
> Chủ đề chính: **đánh giá độ phức tạp thời gian (Time Complexity)** và ký hiệu Big O.

---

## 1. Vì sao cần đánh giá độ phức tạp thuật toán?

Khi giải một bài toán, thường có **nhiều thuật toán khác nhau** cùng giải được. Cần biết thuật toán nào **tốt hơn**. Không thể chỉ chạy rồi đo thời gian bằng đồng hồ, vì:

- Thời gian chạy phụ thuộc vào **máy tính** (CPU), **ngôn ngữ lập trình**, **trình biên dịch**...
- Với dữ liệu nhỏ, thuật toán tệ vẫn chạy nhanh; khi dữ liệu lớn, sự khác biệt mới bộc lộ rõ.

➡️ Cần một cách đánh giá **độc lập với phần cứng**, chỉ dựa vào **số bước tính toán cơ bản** theo **kích thước đầu vào `n`** — đó chính là **độ phức tạp thuật toán**.

> **Định nghĩa:** Độ phức tạp thời gian (Time Complexity) là hàm biểu diễn **số lượng phép toán cơ bản** (so sánh, gán, cộng trừ...) thuật toán thực hiện, tính theo `n`.

---

## 2. Ký hiệu Big O (O-lớn)

**Big O** mô tả **giới hạn trên (worst case)** — thuật toán **không chậm hơn** mức này khi `n` đủ lớn.

### Định nghĩa trực quan

`f(n) = O(g(n))` nếu tồn tại hằng số `c > 0` và `n₀` sao cho:

```
f(n) ≤ c · g(n)   với mọi n ≥ n₀
```

Nghĩa là: `f(n)` **không tăng nhanh hơn** `g(n)` "về bản chất" (bỏ qua hằng số nhân).

### Ví dụ

- `f(n) = 3n + 5` → `O(n)` (bỏ hằng số 5 và hệ số 3)
- `f(n) = 5n² + 2n + 100` → `O(n²)` (chỉ giữ số hạng bậc cao nhất)
- `f(n) = 100` (không đổi theo `n`) → `O(1)`

### Ba ký hiệu tiệm cận cần phân biệt

| Ký hiệu | Ý nghĩa | Dùng khi nào |
|---|---|---|
| **Big O (O)** | Cận **trên** — trường hợp xấu nhất | "Chạy **không quá** ..." |
| **Big Omega (Ω)** | Cận **dưới** — trường hợp tốt nhất | "Chạy **ít nhất** ..." |
| **Big Theta (Θ)** | Cận **chặt** — cả trên lẫn dưới | "Chạy **đúng bằng cỡ** ..." |

> Trong học tập và phỏng vấn, **Big O** dùng phổ biến nhất vì quan tâm đến **trường hợp xấu nhất**.

---

## 3. Ba trường hợp của thuật toán

Với cùng một thuật toán, thời gian chạy khác nhau tùy **dữ liệu đầu vào cụ thể**.

Ví dụ: tìm kiếm tuyến tính.

| Trường hợp | Ý nghĩa | Ví dụ Linear Search |
|---|---|---|
| **Best case (Ω)** | Dữ liệu thuận lợi nhất | Phần tử ở đầu → O(1) |
| **Average case** | Trung bình mọi khả năng | Phần tử ở giữa → O(n) |
| **Worst case (O)** | Dữ liệu bất lợi nhất | Phần tử cuối/không tồn tại → O(n) |

📌 **Quy ước:** Khi nói "độ phức tạp là O(...)" mà không nói rõ → mặc định là **worst case**.

---

## 4. Quy tắc tính độ phức tạp

### Quy tắc 1 — Bỏ hằng số nhân

```
O(5n) = O(n)
O(100) = O(1)
```

### Quy tắc 2 — Chỉ giữ số hạng tăng nhanh nhất

```
O(n² + n + 1) = O(n²)
O(n log n + n) = O(n log n)
```

### Quy tắc 3 — Cộng dồn khi đoạn code **tuần tự**

```text
for i in range(n):   # O(n)
for j in range(n):   # O(n)
→ Tổng: O(n) + O(n) = O(n)
```

### Quy tắc 4 — Nhân khi vòng lặp **lồng nhau**

```text
for i in range(n):      # chạy n lần
    for j in range(n):  # mỗi lần n lần
→ Tổng: O(n) × O(n) = O(n²)
```

### Quy tắc 5 — Lấy độ phức tạp lớn nhất khi có nhánh rẽ (if/else)

```text
if điều_kiện:
    # O(n)
else:
    # O(n²)
→ Worst case: O(n²)
```

### Đại số tiệm cận

- **Cộng (tuần tự):** `T₁(n) + T₂(n) = O(max(f(n), g(n)))`
- **Nhân (lồng nhau):** `T₁(n) × T₂(n) = O(f(n) × g(n))`
- Mọi hằng số nhân `k > 0` đều bị triệt tiêu.

---

## 5. Các lớp độ phức tạp thường gặp (nhanh → chậm)

| Độ phức tạp | Tên gọi | Ví dụ thuật toán |
|---|---|---|
| **O(1)** | Hằng số | Truy cập mảng theo chỉ số, push/pop stack |
| **O(log n)** | Logarit | Tìm kiếm nhị phân, cây AVL / Red-Black tree |
| **O(n)** | Tuyến tính | Duyệt mảng, tìm kiếm tuyến tính, BFS/DFS, tìm max/min |
| **O(n log n)** | Tuyến tính-logarit | Merge Sort, Quick Sort (trung bình), Heap Sort |
| **O(n²)** | Bậc hai | Bubble / Selection / Insertion Sort, duyệt mảng 2 chiều |
| **O(n³)** | Bậc ba | Nhân ma trận (thuật toán cơ bản) |
| **O(2ⁿ)** | Mũ | Đệ quy Fibonacci không tối ưu, liệt kê tập con |
| **O(n!)** | Giai thừa | Bài toán người bán hàng (TSP) vét cạn, hoán vị |

```
O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)
```

Ví dụ với `n = 1.000`:

| Độ phức tạp | Số phép toán ước lượng |
|---|---|
| O(1) | 1 |
| O(log n) | ~10 |
| O(n) | 1.000 |
| O(n log n) | ~10.000 |
| O(n²) | 1.000.000 |
| O(2ⁿ) | cực lớn, không khả thi |

**Giới hạn mở rộng dữ liệu thực tế:**

- `O(n²)`: chỉ khả thi khi `n ≤ 10⁴`
- `O(2ⁿ)`: chỉ khả thi khi `n ≤ 30`
- `O(n!)`: bất khả thi khi `n > 12`

---

## 6. Phân tích thuật toán lặp (Iterative)

### Vòng lặp đơn O(n)

```cpp
for (int i = 1; i <= n; i++)
    if (i % 2 == 0) c++;
```

- Vòng lặp chạy `n` lần, mỗi lần chi phí O(1).
- Phép kiểm tra `i % 2 == 0` luôn thực hiện ở **mọi lần lặp** dù nhánh có chạy hay không.
- Kết quả: **O(n)**.

### Vòng lặp lồng nhau O(n²)

```cpp
for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
        c++;
```

- Vòng trong chạy `n` lần cho mỗi `i` → tổng `n × n = n²`.
- Kết quả: **O(n²)**.

### Vòng lặp lồng nhau có điều kiện O(n²)

```cpp
for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
        for (int j = 1; j <= n; j++) c++;
    }
}
```

- Vòng ngoài chạy `n` lần, nhưng vòng trong chỉ chạy khi `i` chẵn (khoảng `n/2` lần).
- Tổng số lần `c++`: `T(n) = ⌊n/2⌋ × n ≈ n²/2`.
- Dù chỉ một nửa số `i` kích hoạt vòng trong, hằng số 1/2 không ảnh hưởng bậc tiệm cận → **O(n²)**.

### Vòng lặp đôi dạng tam giác O(n²)

```cpp
for (int i = 1; i <= n - 1; i++)
    for (int j = i + 1; j <= n; j++)
        d++;
```

- Vòng trong với `i` cố định chạy `(n − i)` lần.
- Tổng: `T(n) = Σ(n − i) = (n−1) + (n−2) + ... + 1 = n(n−1)/2`.
- Kết quả: **O(n²)** — đây chính là số cặp `(i, j)` với `i < j` (tam giác Gauss).

### Vòng lặp 3 lớp dạng tổ hợp O(n³)

```cpp
for (int i = 1; i <= n - 2; i++)
    for (int j = i + 1; j <= n - 1; j++)
        for (int k = j + 1; k <= n; k++)
            d++;
```

- Sinh ra mọi bộ `(i, j, k)` với `1 ≤ i < j < k ≤ n`.
- Số bộ ba = tổ hợp chập 3 của n: `T(n) = C(n,3) = n(n−1)(n−2)/6`.
- Kết quả: **O(n³)**.

### Vòng lặp chia đôi O(log n) — câu bẫy kinh điển

```cpp
int i = n;
while (i > 0) { i--; d += i; }   // giảm 1 đơn vị → O(n)

d = 0;
while (n > 0) { n = n / 2; d++; }  // chia đôi mỗi bước → O(log n)
```

- Vòng giảm **1 đơn vị** → chạy `n` lần → **O(n)**.
- Vòng giảm **1 nửa** (chia đôi) → số lần lặp `≈ log₂(n)` → **O(log n)**.
- Tránh nhầm: nhìn thấy `while` không có nghĩa là O(n), phải xem **biến giảm theo cấp số cộng hay cấp số nhân**.

### do-while O(n)

```cpp
int i = 0, d = 0;
do {
    i++;
    if (i % 3 == 0) d += i;
} while (i <= n);
```

- `do-while` kiểm tra điều kiện **sau**, thực hiện ít nhất 1 lần.
- `i` tăng từ 1 đến `n+1` → số lần lặp `n+1 ≈ n`.
- Kết quả: **O(n)**.

---

## 7. Vòng lặp nhiều biến độc lập (`m`, `x`, `y`, `z`)

Khi vòng lặp chạy theo nhiều biến kích thước khác nhau, giữ nguyên các biến trong kết quả.

**Ví dụ 1 — lồng nhau nhiều tầng:**

```cpp
for (i = 1; i <= n; i++)
    for (j = 1; j <= m; j++) {
        for (k = 1; k <= x; k++) ...   // x lần
        for (h = 1; h <= y; h++) ...   // y lần
    }
```

- Vòng `k` và `h` nối tiếp nhau bên trong `j`: `T₁ = x + y`.
- Vòng `j` lặp `m` lần: `T₂ = m(x + y)`.
- Vòng `i` lặp `n` lần: `T = n·m·(x + y)`.
- **Kết luận: `O(n·m·(x + y))`.** (Nếu `n = m = x = y` thì `O(n³)`.)

**Ví dụ 2 — hai khối nối tiếp:**

```cpp
for (i=1; i<=n; i++)
    for (u=1; u<=m; u++)
        for (v=1; v<=n; v++) ...   // khối 1: n·m·n = n²m

for (j=1; j<=x; j++)
    for (k=1; k<=z; k++) ...       // khối 2: x·z
```

- Hai khối nối tiếp → cộng dồn.
- **Kết luận: `O(n²·m + x·z)`.** (Nếu mọi biến bằng `n` thì `O(n³)`.)

---

## 8. Phân tích thuật toán đệ quy

### Mô hình chia để trị (Divide and Conquer)

Chia bài toán kích thước `n` thành **a** bài toán con, mỗi con kích thước `n/b`, thêm chi phí `f(n)` để chia và tổng hợp:

```
T(n) = a·T(n/b) + f(n)
```

### Ba phương pháp giải hệ thức truy hồi

1. **Phương pháp cây đệ quy:** biểu diễn phân nhánh dưới dạng cây; chiều cao `h = log_b(n)`, số lá `a^(log_b n) = n^(log_b a)`.
2. **Phương pháp thế:** dùng quy nạp toán học để chứng minh dạng nghiệm.
3. **Định lý Master (CLRS):** so sánh `f(n)` với `n^(log_b a)`:
   - Nếu `f(n) = O(n^(log_b a − ε))` → `T(n) = Θ(n^(log_b a))`.
   - Nếu `f(n) = Θ(n^(log_b a)·log^k n)` → `T(n) = Θ(n^(log_b a)·log^(k+1) n)`.
   - Nếu `f(n) = Ω(n^(log_b a + ε))` và `a·f(n/b) ≤ c·f(n)`, `c < 1` → `T(n) = Θ(f(n))`.

> Ví dụ Merge Sort: `T(n) = 2T(n/2) + O(n)` → **O(n log n)**.

### Đệ quy Fibonacci — câu phân loại giỏi/khá

```python
def fib(n):
    if n <= 1: return n
    return fib(n-1) + fib(n-2)   # 2 lời gọi con mỗi đệ quy
```

- Cây đệ quy phân nhánh 2/tầng, độ sâu `n` → **O(2ⁿ)** (không tối ưu).
- Áp dụng **Quy hoạch động** (Memoization / Tabulation): mỗi bài toán con tính 1 lần → **O(n)**.

---

## 9. Phân tích hoàn phí (Amortized Analysis) — mở rộng

Khi một thao tác đơn lẻ tốn rất lớn ở worst case nhưng không xảy ra liên tục:

- **Aggregate method:** giới hạn trên `T(k)/k` cho chuỗi `k` thao tác.
- **Accounting method:** gán "tín dụng" vượt mức cho thao tác rẻ để trả cho thao tác đắt.
- **Potential method:** dùng hàm thế năng `Φ` biểu diễn trạng thái cấu trúc dữ liệu.

---

## 10. Giới hạn lý thuyết (Lower Bounds) — mở rộng

- Mọi thuật toán sắp xếp dựa trên **phép so sánh** đều cần ít nhất **Ω(n log n)**: chứng minh bằng mô hình **cây quyết định**.
- Tìm phần tử lớn nhất trong `n` phần tử cần tối thiểu **n − 1** phép so sánh (kỹ thuật đối thủ/Adversary Arguments).

---

## 11. Bảng tổng hợp bài tập phân tích

Bảng kết quả 10 đoạn code kinh điển (đề kiểm tra trên lớp):

| Đoạn | Cấu trúc chính | Độ phức tạp |
|---|---|---|
| 1 | 1 vòng `for` + `if` đếm số chẵn | **O(n)** |
| 2 | 1 vòng `for` + `if-else` | **O(n)** |
| 3 | Vòng lồng có điều kiện `i%2==0` | **O(n²)** |
| 4 | 1 vòng `for` với 3 phép toán | **O(n)** |
| 5 | `while` giảm biến 1 đơn vị | **O(n)** |
| 6 | `do-while` tăng biến 1 đơn vị | **O(n)** |
| 7 | 2 vòng lồng (tổ hợp chập 2) | **O(n²)** |
| 8 | 3 vòng lồng (tổ hợp chập 3) | **O(n³)** |
| 9 | `while` chia đôi (cấp số nhân) | **O(log n)** |
| 10 | 1 vòng `for` phép tính số học | **O(n)** |

**Bài nâng cao — `count_1(int N)`:**

```cpp
int count_1(int N) {
    sum = 0;
    for (i = 1; i <= N; i++)
        for (j = i; j <= N; j++)
            sum++;
    return sum;
}
```

- Vòng trong với `i` cố định chạy `(N − i + 1)` lần.
- `T(n) = Σ(N − i + 1) = n(n+1)/2`.
- **Kết luận: O(n²)** (thực chất Θ(n²)).

---

## 12. Cách tiếp cận khi phân tích một đoạn code

1. **Xác định biến `n`** là gì (kích thước mảng, số phần tử, độ dài chuỗi...).
2. **Đếm số vòng lặp**, xem chúng **lồng nhau** (nhân) hay **tuần tự** (cộng).
3. Với vòng lặp trong có cận **phụ thuộc biến ngoài** (dạng tam giác như bài 7, 8, count_1) → **bắt buộc viết tổng Σ** và biến đổi ra công thức đóng (closed-form) trước khi kết luận. Không được nói bừa "n×n".
4. Với **đệ quy**: xác định số lời gọi con và cách bài toán thu nhỏ dần (dùng công thức truy hồi / Định lý Master).
5. **Bỏ hằng số và số hạng bậc thấp**, giữ số hạng tăng nhanh nhất.
6. Kết luận theo **Big O** (thường là worst case trừ khi đề bài yêu cầu khác).
7. Trình bày rõ **các bước biến đổi chuỗi/tổng** với các bài 3, 7, 8, 9 để đạt điểm tối đa.

---

## 13. Những lưu ý quan trọng

- ✅ Big O đo **tốc độ tăng trưởng**, không phải thời gian chạy tính bằng giây.
- ✅ Hai thuật toán cùng O(n) có tốc độ thực tế khác nhau (hằng số ẩn), nhưng khi `n` rất lớn, thuật toán có độ phức tạp thấp hơn **luôn thắng**.
- ✅ Độ phức tạp **không gian (Space Complexity)** cũng quan trọng không kém, là chủ đề riêng.
- ❌ "Code ngắn hơn" ≠ "độ phức tạp thấp hơn" — một dòng đệ quy có thể ẩn O(2ⁿ).
- ❌ Big O **không phụ thuộc ngôn ngữ lập trình** — cùng thuật toán Python hay C++ đều cùng Big O.
- ❌ Vòng `while` chưa chắc là O(n) — phải xem biến giảm theo cấp số cộng hay cấp số nhân (câu 9 là lỗi thường gặp nhất).

---

## 14. Tóm tắt

- Độ phức tạp thời gian đánh giá thuật toán **độc lập với phần cứng**, dựa trên cách thời gian chạy tăng theo `n`.
- **Big O** mô tả **cận trên (worst case)** — ký hiệu phổ biến nhất.
- Quy tắc cốt lõi: **bỏ hằng số**, **giữ số hạng tăng nhanh nhất**, **cộng khi tuần tự, nhân khi lồng nhau**.
- Thứ tự tăng dần: `O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)`.
- Đây là nền tảng bắt buộc trước khi học các cấu trúc dữ liệu cụ thể (sắp xếp, tìm kiếm, cây, đồ thị...).
