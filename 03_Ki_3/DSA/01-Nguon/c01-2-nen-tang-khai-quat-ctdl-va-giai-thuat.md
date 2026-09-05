---
title: "Kiến thức nền tảng - Chương 1: Khái quát Cấu trúc dữ liệu và Giải thuật"
tags:
  - DSA
  - kien-thuc-nen-tang
  - cau-truc-du-lieu
  - giai-thuat
  - do-phuc-tap-thuat-toan
  - chuong-1
related:
  - "[[c01-1-bt-khai-quat-ctdl-va-giai-thuat]]"
  - "[[c01-3-giai-khai-quat-ctdl-va-giai-thuat]]"
  - "[[c02-1-bt-cac-kieu-du-lieu-truu-tuong-co-ban]]"
  - "[[c02-2-nen-tang-cac-kieu-du-lieu-truu-tuong-co-ban]]"
  - "[[c02-3-giai-cac-kieu-du-lieu-truu-tuong-co-ban]]"
date_created: 2026-09-05
chapter: 1
---

# Kiến Thức Nền Tảng - Chương 1: Khái Quát Cấu Trúc Dữ Liệu và Giải Thuật

Tài liệu này hệ thống hóa toàn bộ lý thuyết cốt lõi, công thức toán học và phương pháp giải tích cần thiết để hiểu sâu và giải quyết trọn vẹn các bài tập lý thuyết cũng như thực hành trong **Chương 1: Khái quát cấu trúc dữ liệu và giải thuật**.

---

## 1. Mối Quan Hệ Giữa Cấu Trúc Dữ Liệu và Giải Thuật

### 1.1. Khái niệm cơ bản
- **Thuật toán (Algorithm):** Một dãy hữu hạn các chỉ thị rõ ràng, không mâu thuẫn, có thể thực thi được trên máy tính nhằm biến đổi dữ liệu đầu vào (Input) thành kết quả đầu ra mong muốn (Output).
- **Cấu trúc dữ liệu (Data Structure - CTDL):** Cách thức tổ chức, quản lý và lưu trữ dữ liệu trong bộ nhớ máy tính sao cho các thao tác trên dữ liệu (tìm kiếm, chèn, xóa, cập nhật) có thể thực hiện một cách hiệu quả.
- **Phương trình kinh điển của Niklaus Wirth (1976):**
  $$\text{Chương trình (Program)} = \text{Cấu trúc dữ liệu (Data Structures)} + \text{Giải thuật (Algorithms)}$$

### 1.2. Mối quan hệ tương hỗ
- CTDL là đối tượng tác động của giải thuật.
- Cùng một bài toán, việc lựa chọn CTDL khác nhau sẽ dẫn đến các thuật toán khác nhau với hiệu năng hoàn toàn khác biệt:
  - **Ví dụ 1 (Tìm kiếm phần tử):**
    - Mảng chưa có thứ tự: Chỉ có thể dùng tìm kiếm tuần tự (Linear Search) với chi phí $O(n)$.
    - Mảng đã sắp xếp: Cho phép áp dụng tìm kiếm nhị phân (Binary Search) với chi phí $O(\log n)$.
    - Bảng băm (Hash Table): Cho phép tìm kiếm với thời gian trung bình $O(1)$.
  - **Ví dụ 2 (Biểu diễn đồ thị):**
    - Ma trận kề (Adjacency Matrix): Kiểm tra hai đỉnh kề nhau trong $O(1)$, nhưng tốn $O(V^2)$ bộ nhớ (không tốt cho đồ thị thưa).
    - Danh sách kề (Adjacency List): Tiết kiệm bộ nhớ $O(V + E)$, tối ưu cho các giải thuật duyệt BFS/DFS.

---

## 2. Phân Biệt Kiểu Dữ Liệu Tiên Định, Cấu Trúc Dữ Liệu & Cấu Trúc Lưu Trữ

### 2.1. Kiểu dữ liệu tiên định (Primitive / Built-in Data Types)
- Là các kiểu dữ liệu do trình biên dịch hoặc ngôn ngữ lập trình định nghĩa sẵn ở mức cơ sở: `int`, `float`, `double`, `char`, `bool`, con trỏ.
- **Hạn chế:** Chỉ biểu diễn các giá trị đơn nguyên vô hướng, không thể phản ánh trực tiếp các thực thể đa thuộc tính phức tạp trong thế giới thực (ví dụ: Nhân viên, Chuyến tàu, Đa thức, Ma trận).
- **Sự cần thiết của Kiểu dữ liệu có cấu trúc do người dùng định nghĩa (User-Defined Types):**
  - Cho phép gom nhóm nhiều trường dữ liệu thuộc các kiểu khác nhau thành một thực thể logic duy nhất (`struct` trong C/C++, `class` trong C++/Java/C#, `record` trong Pascal).
  - Đảm bảo tính đóng gói, dễ đọc, dễ bảo trì và ánh xạ trực tiếp mô hình bài toán thực tế vào mã nguồn.

### 2.2. Cấu trúc dữ liệu (Logical Data Structure) vs Cấu trúc lưu trữ (Storage / Physical Structure)
| Đặc điểm | Cấu trúc dữ liệu (Logic) | Cấu trúc lưu trữ (Vật lý) |
| :--- | :--- | :--- |
| **Bản chất** | Mô hình toán học trừu tượng mô tả mối quan hệ giữa các phần tử dữ liệu và các phép toán hợp lệ trên đó. | Cách bố trí thực tế các phần tử dữ liệu trong bộ nhớ RAM hoặc trên thiết bị lưu trữ thứ cấp (ổ cứng/file). |
| **Tính độc lập** | Độc lập với kiến trúc phần cứng và ngôn ngữ lập trình cụ thể. | Phụ thuộc cơ chế quản lý bộ nhớ, con trỏ, địa chỉ ô nhớ. |
| **Quan hệ ánh xạ** | **Một - Nhiều (1 - $n$):** Một CTDL logic có thể được cài đặt bằng nhiều cấu trúc lưu trữ khác nhau.<br>• *Ví dụ:* Danh sách tuyến tính (List) có thể cài đặt bằng mảng tuần tự (Sequential allocation) hoặc danh sách liên kết (Linked allocation).<br>• *Ví dụ:* Hàng đợi (Queue) có thể cài đặt bằng mảng xoay vòng (Circular array) hoặc danh sách liên kết đơn. | **Nhiều - Một ($n$ - 1):** Một cấu trúc lưu trữ có thể dùng để biểu diễn nhiều CTDL logic khác nhau.<br>• *Ví dụ:* Cấu trúc mảng 1 chiều liên tục trong RAM có thể dùng để biểu diễn: Vector, Ngăn xếp (Stack), Hàng đợi (Queue), Cây nhị phân hoàn chỉnh (Heap), hoặc Ma trận 2 chiều qua công thức ánh xạ chỉ số $i \times C + j$. |

---

## 3. Đánh Giá Độ Phức Tạp Thuật Toán (Asymptotic Analysis)

### 3.1. Các ký pháp tiệm cận chuẩn (Big-O, Big-$\Omega$, Big-$\Theta$)
Giả sử $T(n)$ và $g(n)$ là các hàm số dương xác định trên tập số nguyên dương $\mathbb{N}^*$:

1. **Ký pháp $O$ (Big-O - Chặn trên tiệm cận):**
   $$T(n) = O(g(n)) \iff \exists c > 0, n_0 > 0 \text{ sao cho } 0 \le T(n) \le c \cdot g(n), \quad \forall n \ge n_0$$
   *Ý nghĩa:* Thuật toán chạy không vượt quá thời gian $c \cdot g(n)$ trong trường hợp xấu nhất (Worst-case).

2. **Ký pháp $\Omega$ (Big-Omega - Chặn dưới tiệm cận):**
   $$T(n) = \Omega(g(n)) \iff \exists c > 0, n_0 > 0 \text{ sao cho } 0 \le c \cdot g(n) \le T(n), \quad \forall n \ge n_0$$
   *Ý nghĩa:* Thuật toán tốn ít nhất thời gian $c \cdot g(n)$ trong trường hợp tốt nhất (Best-case).

3. **Ký pháp $\Theta$ (Big-Theta - Chặn chặt tiệm cận):**
   $$T(n) = \Theta(g(n)) \iff T(n) = O(g(n)) \text{ và } T(n) = \Omega(g(n))$$
   $$\iff \exists c_1, c_2 > 0, n_0 > 0 \text{ sao cho } c_1 \cdot g(n) \le T(n) \le c_2 \cdot g(n), \quad \forall n \ge n_0$$

### 3.2. Thứ tự tăng dần của các hàm thời gian phổ biến
$$O(1) < O(\log n) < O(\sqrt{n}) < O(n) < O(n \log n) < O(n^2) < O(n^3) < O(2^n) < O(n!) < O(n^n)$$

### 3.3. Các quy tắc phân tích đoạn mã tuần tự và lặp
1. **Quy tắc cộng (Dãy câu lệnh tuần tự):**
   $$T_1(n) = O(f(n)), \ T_2(n) = O(g(n)) \implies T_1(n) + T_2(n) = O(\max(f(n), g(n)))$$
2. **Quy tắc nhân (Vòng lặp lồng nhau):**
   - Vòng lặp ngoài lặp $n$ lần, mỗi lần khối lệnh trong lặp $m$ lần:
     $$T(n, m) = \sum_{i=1}^n \sum_{j=1}^m O(1) = O(n \cdot m)$$
   - Nhân 2 ma trận vuông cấp $n$ ($C = A \times B$):
     $$\sum_{i=1}^n \sum_{j=1}^n \sum_{k=1}^n O(1) = n \cdot n \cdot n \cdot O(1) = O(n^3)$$

---

## 4. Phương Pháp Giải Phương Trình Đệ Quy (Recurrence Relations)

Để tính độ phức tạp của các giải thuật đệ quy (Chia để trị - Divide and Conquer, Đệ quy lùi), ta thiết lập phương trình đệ quy biểu diễn thời gian $T(n)$ và giải bằng các phương pháp sau:

### 4.1. Định lý Thợ (Master Theorem)
Áp dụng cho các phương trình đệ quy chia bài toán kích thước $n$ thành $a$ bài toán con kích thước $n/b$, với chi phí phân chia và kết hợp là $f(n)$:
$$T(n) = a T(n/b) + f(n) \quad (a \ge 1, \ b > 1)$$

So sánh hàm $f(n)$ với hàm ngưỡng chuẩn $n^{\log_b a}$:

| Trường hợp | Điều kiện | Nghiệm tiệm cận $T(n)$ | Bản chất trực giác |
| :---: | :--- | :---: | :--- |
| **Trường hợp 1** | $f(n) = O(n^c)$ với $c < \log_b a$ | $T(n) = \Theta(n^{\log_b a})$ | Chi phí ở các nút lá chiếm ưu thế tuyệt đối (Leaf-heavy). |
| **Trường hợp 2** | $f(n) = \Theta(n^c \log^k n)$ với $c = \log_b a$ ($k \ge 0$) | $T(n) = \Theta(n^{\log_b a} \log^{k+1} n)$ | Chi phí phân bố đều qua tất cả $\log_b n$ tầng đệ quy. |
| **Trường hợp 3** | $f(n) = \Omega(n^c)$ với $c > \log_b a$<br>và thỏa mãn điều kiện đều: $a f(n/b) \le d \cdot f(n)$ với $d < 1$ | $T(n) = \Theta(f(n))$ | Chi phí ở nút gốc (bước chia/gộp ngoài cùng) chiếm ưu thế (Root-heavy). |

#### Ví dụ minh họa áp dụng Định lý Thợ:
- **Bài toán 1:** $T(n) = 3T(n/2) + n$
  - $a = 3, b = 2 \implies \log_b a = \log_2 3 \approx 1.585$.
  - $f(n) = n = O(n^1)$. Vì $1 < \log_2 3$, rơi vào **Trường hợp 1** $\implies T(n) = \Theta(n^{\log_2 3})$.
- **Bài toán 2:** $T(n) = 3T(n/2) + n^2$
  - $a = 3, b = 2, \log_2 3 \approx 1.585$.
  - $f(n) = n^2 = \Omega(n^2)$. Vì $2 > \log_2 3$ và $3(n/2)^2 = \frac{3}{4}n^2 \le \frac{3}{4} f(n)$, rơi vào **Trường hợp 3** $\implies T(n) = \Theta(n^2)$.
- **Bài toán 3:** $T(n) = 8T(n/2) + n^3$
  - $a = 8, b = 2 \implies \log_2 8 = 3$.
  - $f(n) = n^3 = \Theta(n^3 \log^0 n)$. Vì $c = 3 = \log_b a$, rơi vào **Trường hợp 2** ($k=0$) $\implies T(n) = \Theta(n^3 \log n)$.

---

### 4.2. Phương pháp lặp và đoán nghiệm quy nạp (Substitution / Guessing Method)
Áp dụng cho các phương trình đệ quy dạng suy giảm kích thước theo phép trừ (ví dụ: $T(n) = a T(n-1) + g(n)$):

#### Kỹ thuật triển khai mở rộng (Back-substitution):
1. **Dạng $T(n) = 2T(n-1) + 1$, $T(1) = 2$:**
   $$\begin{aligned}
   T(n) &= 2T(n-1) + 1 \\
        &= 2[2T(n-2) + 1] + 1 = 2^2 T(n-2) + 2 + 1 \\
        &= 2^k T(n-k) + \sum_{i=0}^{k-1} 2^i
   \end{aligned}$$
   Khi $n-k = 1 \implies k = n-1$:
   $$T(n) = 2^{n-1} T(1) + (2^{n-1} - 1) = 2^{n-1} \cdot 2 + 2^{n-1} - 1 = 3 \cdot 2^{n-1} - 1 = O(2^n)$$

2. **Dạng $T(n) = 2T(n-1) + n$, $T(1) = 1$:**
   - Triển khai liên tiếp:
     $$\begin{aligned}
     T(n) &= 2T(n-1) + n \\
          &= 2[2T(n-2) + (n-1)] + n = 2^2 T(n-2) + 2(n-1) + n \\
          &= 2^k T(n-k) + \sum_{i=0}^{k-1} 2^i (n-i)
     \end{aligned}$$
   - Tại $k = n-1$:
     $$T(n) = 2^{n-1} \cdot 1 + \sum_{j=2}^n j \cdot 2^{n-j} = 2^{n+1} - n - 2 = \Theta(2^n)$$
   - *Chứng minh quy nạp:* Đặt $T(n) = c \cdot 2^n - n - 2$. Với $c=2$, ta có $T(1) = 2^2 - 1 - 2 = 1$ (đúng). Giả sử đúng đến $n-1$, thay vào ta thu được điều phải chứng minh.

---

## 5. Phân Tích Các Giải Thuật Đệ Quy Kinh Điển

### 5.1. Tìm kiếm tuần tự vs Tìm kiếm nhị phân
| Tiêu chí | Tìm kiếm tuần tự (Linear Search) | Tìm kiếm nhị phân (Binary Search) |
| :--- | :--- | :--- |
| **Yêu cầu dữ liệu** | Mảng bất kỳ (không cần thứ tự) | Mảng đã được sắp xếp tăng/giảm |
| **Giải thuật đệ quy** | Xét phần tử $A[n]$, nếu không bằng thì gọi đệ quy trên mảng con $n-1$ phần tử:<br>$T(n) = T(n-1) + O(1)$ | So sánh với phần tử ở giữa $A[mid]$: nếu nhỏ hơn thì tìm nửa trái, lớn hơn tìm nửa phải:<br>$T(n) = T(n/2) + O(1)$ |
| **Thời gian Worst-case** | $T(n) = O(n)$ | $T(n) = O(\log_2 n)$ |
| **Thời gian Best-case** | $O(1)$ (nằm ngay ở đầu mảng) | $O(1)$ (nằm ngay tại vị trí chính giữa) |

### 5.2. Bài toán Tháp Hà Nội (Tower of Hanoi)
- **Mô tả giải thuật:** Để chuyển $n$ đĩa từ cọc nguồn $A$ sang cọc đích $C$ dùng cọc trung gian $B$:
  1. Chuyển $n-1$ đĩa từ $A$ sang $B$ (mất $T(n-1)$ bước).
  2. Chuyển 1 đĩa lớn nhất từ $A$ sang $C$ (mất 1 bước di chuyển).
  3. Chuyển $n-1$ đĩa từ $B$ sang $C$ (mất $T(n-1)$ bước).
- **Phương trình thời gian:**
  $$T(n) = 2T(n-1) + 1, \quad T(1) = 1$$
- **Nghiệm:**
  $$T(n) = 2^n - 1 \implies O(2^n)$$

### 5.3. Bài toán Tính số tổ hợp chập $k$ của $n$ ($C_n^k$)
- **Hệ thức đệ quy Pascal:**
  $$C_n^k = C_{n-1}^{k-1} + C_{n-1}^k \quad (0 < k < n); \quad C_n^0 = C_n^n = 1$$
- **Chi phí thời gian:**
  $$T(n, k) = T(n-1, k-1) + T(n-1, k) + O(1)$$
  Cây đệ quy có số nút lá chính bằng giá trị của $C_n^k$. Do đó, độ phức tạp thời gian khi cài đặt đệ quy trực tiếp không nhớ (memoization) là:
  $$T(n, k) = \Theta(C_n^k) = O\left(\frac{n!}{k!(n-k)!}\right) \le O(2^n)$$
- **Nhược điểm & Hướng cải tiến:** Các bài toán con bị tính toán lặp lại theo cấp số nhân (Overlapping subproblems). Để khắc phục, cần áp dụng **Quy hoạch động (Dynamic Programming)** lưu trữ tam giác Pascal bằng mảng 2 chiều với chi phí giảm xuống chỉ còn $O(n \cdot k)$.

---

## 6. Tài Liệu Tham Khảo (References & Citations)

1. **Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein (2009).**
   *Introduction to Algorithms (CLRS)*, 3rd Edition, MIT Press.
   - Chapter 3: *Growth of Functions* (Ký pháp tiệm cận $O, \Omega, \Theta$).
   - Chapter 4: *Divide-and-Conquer* (Định lý Thợ - Master Theorem, Cây đệ quy, Quy nạp toán học).
2. **Robert Sedgewick, Kevin Wayne (2011).**
   *Algorithms*, 4th Edition, Addison-Wesley.
   - Analysis of Algorithms, Orders-of-Growth, Mathematical Models.
3. **Đỗ Xuân Lôi (2007).**
   *Cấu trúc dữ liệu và giải thuật*, Nhà xuất bản Đại học Quốc gia Hà Nội.
   - Chương 1: *Khái niệm về cấu trúc dữ liệu và giải thuật*.
4. **Nguyễn Đức Nghĩa (2008).**
   *Giáo trình Cấu trúc dữ liệu và Giải thuật*, Nhà xuất bản Bách Khoa Hà Nội.
   - Đánh giá thời gian thực hiện giải thuật, Các phương pháp giải hệ thức đệ quy.
5. **Niklaus Wirth (1976).**
   *Algorithms + Data Structures = Programs*, Prentice-Hall.
