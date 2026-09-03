---
tags:
  - DSA
  - giai-thuat
  - do-phuc-tap-thuat-toan
  - big-o
  - de-quy
related:
  - "[[CHUONG 1- Khai_quat_cau_truc_du_lieu_va_giai_thuat]]"
  - "[[CHUONG 1-Giai- Khai_quat_cau_truc_du_lieu_va_giai_thuat]]"
  - "[[gemini_deep_research_danh-gia-do-phuc-tap-thuat-toan]]"
---

# Đánh Giá Độ Phức Tạp Thuật Toán (Time Complexity) — Kiến Thức Nền Tảng DSA

> Tài liệu dành cho người mới bắt đầu học Cấu trúc dữ liệu & Giải thuật (DSA)

---

## 1. Tại sao cần đánh giá độ phức tạp thuật toán?

Khi giải một bài toán, thường có **nhiều thuật toán khác nhau** có thể giải được. Câu hỏi đặt ra là: thuật toán nào **tốt hơn**?

Ta không thể chỉ chạy thử rồi đo thời gian bằng đồng hồ, vì:

- Thời gian chạy phụ thuộc vào **máy tính** (CPU nhanh/chậm), **ngôn ngữ lập trình**, **trình biên dịch**...
- Với dữ liệu nhỏ, thuật toán tệ vẫn có thể chạy nhanh; nhưng khi dữ liệu lớn lên, sự khác biệt mới bộc lộ rõ.

➡️ Vì vậy, ta cần một cách đánh giá **độc lập với phần cứng**, chỉ dựa vào **số bước tính toán cơ bản** mà thuật toán thực hiện, theo **kích thước đầu vào (n)**. Đó chính là **độ phức tạp thuật toán (algorithm complexity)**.

Độ phức tạp thời gian trả lời câu hỏi:

> "Nếu kích thước dữ liệu đầu vào là `n`, thuật toán cần khoảng bao nhiêu bước để chạy xong?"

---

## 2. Độ phức tạp thời gian là gì?

**Độ phức tạp thời gian (Time Complexity)** là một hàm số biểu diễn **số lượng phép toán cơ bản** (so sánh, gán, cộng trừ...) mà thuật toán thực hiện, tính theo kích thước đầu vào `n`.

Ví dụ đơn giản:

```python
def tong(arr):
    s = 0                  # 1 phép gán
    for x in arr:           # lặp n lần (n = len(arr))
        s += x               # 1 phép cộng + 1 phép gán mỗi lần lặp
    return s                # 1 phép trả về
```

Số phép toán ≈ `1 + 2n + 1 = 2n + 2`.

Khi `n` càng lớn, phần **2n** quyết định tốc độ tăng trưởng, còn hằng số `2` gần như không đáng kể. Ta nói thuật toán này có độ phức tạp **O(n)**.

👉 Điểm mấu chốt: Ta chỉ quan tâm đến **tốc độ tăng trưởng** khi `n → ∞`, không quan tâm hằng số hay các số hạng bậc thấp.

---

## 3. Ký hiệu Big O (O-lớn)

**Big O** là ký hiệu toán học dùng để mô tả **giới hạn trên (worst case / cận trên)** của độ phức tạp — tức là thuật toán **không chậm hơn** mức này khi `n` đủ lớn.

### Định nghĩa (trực quan)

`f(n) = O(g(n))` nếu tồn tại hằng số `c > 0` và `n₀` sao cho:

```
f(n) ≤ c · g(n)   với mọi n ≥ n₀
```

Nói đơn giản: `f(n)` **không tăng nhanh hơn** `g(n)` một cách "về bản chất" (bỏ qua hằng số nhân).

### Ví dụ

- `f(n) = 3n + 5` → `O(n)` (bỏ hằng số 5 và hệ số 3)
- `f(n) = 5n² + 2n + 100` → `O(n²)` (chỉ giữ số hạng bậc cao nhất)
- `f(n) = 100` (không đổi theo n) → `O(1)`

### Hai ký hiệu khác (nên biết, không bắt buộc nhớ sâu lúc mới học)

| Ký hiệu | Ý nghĩa | Ví dụ dùng khi nào |
|---|---|---|
| **Big O (O)** | Cận **trên** — trường hợp xấu nhất | "Thuật toán chạy **không quá** ..." |
| **Big Omega (Ω)** | Cận **dưới** — trường hợp tốt nhất | "Thuật toán chạy **ít nhất** ..." |
| **Big Theta (Θ)** | Cận **chặt** — cả trên lẫn dưới | "Thuật toán chạy **đúng bằng cỡ** ..." |

> Trong thực tế phỏng vấn và học tập, **Big O** được dùng phổ biến nhất vì ta thường quan tâm đến **trường hợp xấu nhất** để đảm bảo thuật toán "không tệ hơn mức nào đó".

---

## 4. Ba trường hợp cần phân biệt

Với cùng một thuật toán, thời gian chạy có thể khác nhau tùy vào **dữ liệu đầu vào cụ thể**:

| Trường hợp | Ý nghĩa | Ví dụ: Tìm kiếm tuyến tính (Linear Search) |
|---|---|---|
| **Best case (Ω)** | Dữ liệu thuận lợi nhất | Phần tử cần tìm ở vị trí đầu tiên → O(1) |
| **Average case** | Trung bình trên mọi khả năng | Phần tử ở giữa mảng → O(n) |
| **Worst case (O)** | Dữ liệu bất lợi nhất | Phần tử ở cuối hoặc không tồn tại → O(n) |

📌 **Quy ước chung**: Khi nói "độ phức tạp của thuật toán X là O(...)" mà không nói rõ, **mặc định là worst case**.

---

## 5. Quy tắc tính toán độ phức tạp (Big O)

### Quy tắc 1 — Bỏ hằng số nhân

```
O(5n) = O(n)
O(100) = O(1)
```

### Quy tắc 2 — Chỉ giữ số hạng tăng nhanh nhất (bỏ số hạng bậc thấp)

```
O(n² + n + 1) = O(n²)
O(n log n + n) = O(n log n)
```

### Quy tắc 3 — Cộng dồn khi các đoạn code **tuần tự** (nối tiếp nhau)

```python
for i in range(n):     # O(n)
    ...
for j in range(n):     # O(n)
    ...
# Tổng: O(n) + O(n) = O(2n) = O(n)
```

### Quy tắc 4 — Nhân khi vòng lặp **lồng nhau**

```python
for i in range(n):        # chạy n lần
    for j in range(n):    # mỗi lần lại chạy n lần
        ...
# Tổng: O(n) * O(n) = O(n²)
```

### Quy tắc 5 — Lấy độ phức tạp lớn nhất khi có nhánh rẽ (if/else)

```python
if dieu_kien:
    lam_viec_A()     # O(n)
else:
    lam_viec_B()     # O(n²)
# Worst case: O(n²)
```

---

## 6. Các lớp độ phức tạp thường gặp (từ nhanh → chậm)

| Độ phức tạp | Tên gọi | Ví dụ thuật toán |
|---|---|---|
| **O(1)** | Hằng số (Constant) | Truy cập phần tử mảng theo chỉ số, push/pop stack |
| **O(log n)** | Logarit | Tìm kiếm nhị phân (Binary Search) |
| **O(n)** | Tuyến tính (Linear) | Duyệt mảng, tìm kiếm tuần tự |
| **O(n log n)** | Tuyến tính-logarit | Merge Sort, Quick Sort (trung bình), Heap Sort |
| **O(n²)** | Bậc hai (Quadratic) | Bubble Sort, Selection Sort, Insertion Sort |
| **O(n³)** | Bậc ba (Cubic) | Nhân ma trận (thuật toán cơ bản) |
| **O(2ⁿ)** | Mũ (Exponential) | Đệ quy tính dãy Fibonacci không tối ưu, duyệt tất cả tập con |
| **O(n!)** | Giai thừa (Factorial) | Bài toán người bán hàng (brute-force), hoán vị toàn bộ |

### Trực quan tốc độ tăng trưởng (khi n tăng)

```
O(1)     < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)
(nhanh nhất)                                          (chậm nhất)
```

Ví dụ minh họa khi `n = 1.000`:

| Độ phức tạp | Số phép toán ước lượng |
|---|---|
| O(1) | 1 |
| O(log n) | ~10 |
| O(n) | 1.000 |
| O(n log n) | ~10.000 |
| O(n²) | 1.000.000 |
| O(2ⁿ) | một số cực lớn (không khả thi) |

➡️ Đây là lý do vì sao chọn đúng thuật toán quan trọng hơn nhiều so với việc "tối ưu code cho nhanh hơn một chút" khi dữ liệu lớn.

---

## 7. Ví dụ phân tích cụ thể

### Ví dụ 1: O(1) — Truy cập trực tiếp

```python
def lay_phan_tu_dau(arr):
    return arr[0]   # luôn 1 phép toán, không phụ thuộc n
```

### Ví dụ 2: O(n) — Vòng lặp đơn

```python
def tim_max(arr):
    max_val = arr[0]
    for x in arr:          # lặp n lần
        if x > max_val:
            max_val = x
    return max_val
```

### Ví dụ 3: O(n²) — Vòng lặp lồng nhau

```python
def co_trung_lap(arr):
    n = len(arr)
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] == arr[j]:
                return True
    return False
```

Dù vòng lặp trong không chạy đủ `n` lần ở mọi bước, tổng số phép so sánh vẫn tỉ lệ với `n²` (cụ thể là `n(n-1)/2`) → vẫn là **O(n²)**.

### Ví dụ 4: O(log n) — Tìm kiếm nhị phân

```python
def tim_kiem_nhi_phan(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1
```

Mỗi bước, phạm vi tìm kiếm **giảm một nửa** → số bước cần thiết là `log₂(n)`.

### Ví dụ 5: O(2ⁿ) — Đệ quy Fibonacci không tối ưu

```python
def fib(n):
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)   # mỗi lời gọi tạo ra 2 lời gọi con
```

Cây đệ quy phân nhánh 2 mỗi tầng, độ sâu `n` → tổng số lời gọi ≈ `O(2ⁿ)`.

---

## 8. Cách tiếp cận khi phân tích một đoạn code

Các bước gợi ý cho người mới:

1. **Xác định biến n** là gì (kích thước mảng, số phần tử, độ dài chuỗi...).
2. **Đếm số vòng lặp** và xem chúng **lồng nhau** hay **tuần tự**.
3. Với **đệ quy**: xác định số lời gọi con và cách bài toán thu nhỏ dần (có thể dùng công thức truy hồi, ví dụ `T(n) = 2T(n/2) + O(n)` → O(n log n) theo Master Theorem — kiến thức nâng cao hơn).
4. **Bỏ qua hằng số và số hạng bậc thấp**, chỉ giữ lại số hạng tăng nhanh nhất.
5. Kết luận theo **Big O** (thường là worst case, trừ khi đề bài yêu cầu khác).

---

## 9. Một số lưu ý quan trọng cho người mới

- ✅ Big O đo **tốc độ tăng trưởng**, không phải thời gian chạy thực tế tính bằng giây.
- ✅ Hai thuật toán cùng O(n) có thể có tốc độ thực tế khác nhau (do hằng số ẩn), nhưng khi `n` rất lớn thì thuật toán có độ phức tạp thấp hơn **luôn thắng**.
- ✅ Độ phức tạp **không gian (Space Complexity)** — bộ nhớ sử dụng — cũng quan trọng không kém, nhưng là chủ đề riêng (có thể tìm hiểu sau khi nắm vững Time Complexity).
- ❌ Đừng nhầm lẫn: "code ngắn hơn" không có nghĩa là "độ phức tạp thấp hơn". Ví dụ một dòng code đệ quy có thể ẩn chứa O(2ⁿ).
- ❌ Big O không quan tâm ngôn ngữ lập trình — cùng thuật toán viết bằng Python hay C++ đều có cùng độ phức tạp Big O (dù tốc độ thực tế khác nhau).

---

## 10. Bài tập tự luyện (gợi ý)

Hãy thử xác định độ phức tạp thời gian (Big O) của các đoạn code sau:

1. In ra tất cả các cặp `(i, j)` trong mảng có `n` phần tử với `i < j`.
2. Vòng lặp `while` giảm `n` đi một nửa mỗi lần lặp cho đến khi `n <= 1`.
3. Hai vòng lặp `for` **không lồng nhau**, mỗi vòng chạy `n` lần.
4. Hàm đệ quy chia bài toán thành 2 bài toán con kích thước `n/2`, cộng thêm O(n) công việc ở mỗi lần gọi (gợi ý: đây chính là công thức của Merge Sort).

<details>
<summary>Gợi ý đáp án (bấm để xem)</summary>

1. O(n²)
2. O(log n)
3. O(n)
4. O(n log n)

</details>

---

## 11. Tóm tắt

- Độ phức tạp thời gian giúp đánh giá thuật toán **độc lập với phần cứng**, dựa trên cách thời gian chạy tăng theo `n`.
- **Big O** mô tả **cận trên** (worst case) — ký hiệu phổ biến nhất.
- Quy tắc cốt lõi: **bỏ hằng số**, **giữ số hạng tăng nhanh nhất**, **cộng dồn khi tuần tự, nhân khi lồng nhau**.
- Thứ tự tăng dần thường gặp: `O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)`.
- Đây là nền tảng bắt buộc trước khi học sâu hơn về các cấu trúc dữ liệu và thuật toán cụ thể (sắp xếp, tìm kiếm, cây, đồ thị...).
