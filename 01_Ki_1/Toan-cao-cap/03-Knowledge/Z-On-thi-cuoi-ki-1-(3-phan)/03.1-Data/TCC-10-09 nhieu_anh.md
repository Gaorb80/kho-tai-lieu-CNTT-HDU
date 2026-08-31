---
tags:
  - university
  - Math
---
Chào bạn, dựa trên 11 bức ảnh bạn gửi, mình đã tổng hợp và sắp xếp lại các bài toán một cách logic theo từng nhóm yêu cầu.

Các bài toán này thuộc học phần **Đại số tuyến tính**, tập trung vào hai nội dung chính: **Biện luận hệ phương trình theo tham số** và **Giải hệ phương trình tuyến tính tổng quát**.

Dưới đây là nội dung chi tiết đã được trình bày lại:

---

## Nhóm 1: Tìm điều kiện của tham số để hệ có nghiệm

**Yêu cầu dự đoán:** Đây là dạng bài biện luận. Bạn cần tìm giá trị của tham số ($a, b, c$) để hệ phương trình không bị vô nghiệm (có nghiệm duy nhất hoặc vô số nghiệm).

### Bài VII.2

**a.** $\begin{cases} ax_1 + x_2 + x_3 = 1 \\ x_1 + ax_2 + x_3 = 1 \\ x_1 + x_2 + ax_3 = 1 \end{cases}$

**b.** $\begin{cases} x_1 + ax_2 + a^2x_3 = a^3 \\ x_1 + bx_2 + b^2x_3 = b^3 \\ x_1 + cx_2 + c^2x_3 = c^3 \end{cases}$ _(Đây là hệ có ma trận hệ số Vandermonde)_

---

## Nhóm 2: Giải các hệ phương trình tuyến tính cụ thể

**Yêu cầu dự đoán:** Giải hệ phương trình (tìm $x_1, x_2, ...$). Các hệ này có thể có nghiệm duy nhất, vô số nghiệm (phụ thuộc vào ẩn tự do) hoặc vô nghiệm.

### 1. Hệ phương trình 3 phương trình

- Hệ 3 ẩn:
    
    $\begin{cases} 2x_1 + 3x_2 + x_3 = 1 \\ 4x_1 + 6x_2 - 5x_3 = 2 \\ 6x_1 + 9x_2 - 4x_3 = 2 \end{cases}$
    
- Hệ 4 ẩn:
    
    $\begin{cases} 3x_1 + 4x_2 + x_3 + 2x_4 = 3 \\ 6x_1 + 8x_2 + 2x_3 + 5x_4 = 7 \\ 9x_1 + 12x_2 + 3x_3 + 10x_4 = 13 \end{cases}$
    
- Hệ 4 ẩn (khác):
    
    $\begin{cases} x_1 - x_2 + x_3 - 2x_4 = 1 \\ x_1 - x_2 + 2x_3 - x_4 = 2 \\ 5x_1 - 5x_2 + 8x_3 - 7x_4 = 3 \end{cases}$
    
- Hệ 5 ẩn:
    
    $\begin{cases} x_1 - 2x_2 - 3x_3 + 2x_4 + 4x_5 = -3 \\ 3x_1 - 5x_2 + x_3 - 3x_4 + 2x_5 = 1 \\ 2x_1 - 3x_2 + 4x_3 - 5x_4 - x_5 = 4 \end{cases}$
    

### 2. Hệ phương trình 4 phương trình

- Hệ 4 ẩn:
    
    $\begin{cases} x_1 + 2x_2 - 3x_3 - 4x_4 = 1 \\ 2x_1 + 3x_2 + x_3 - x_4 = 2 \\ x_1 + 3x_2 - x_3 + 2x_4 = 1 \\ 4x_1 - 4x_2 - 3x_3 - 3x_4 = -7 \end{cases}$
    
- Hệ 5 ẩn (dạng tam giác/bậc thang):
    
    $\begin{cases} 2x_1 + 3x_2 + 3x_3 - 3x_4 + x_5 = 10 \\ x_1 + x_2 - x_3 - 5x_4 + 7x_5 = 1 \\ x_2 + 2x_3 + 4x_4 - 8x_5 = 2 \\ 4x_3 + x_4 - x_5 = 3 \end{cases}$
    
- Hệ 5 ẩn tổng quát:
    
    $\begin{cases} 3x_1 + x_2 - 2x_3 + x_4 - x_5 = 1 \\ 2x_1 - x_2 + 7x_3 - 3x_4 + 5x_5 = 2 \\ x_1 + 3x_2 - 2x_3 + 5x_4 - 7x_5 = 3 \\ 3x_1 - 2x_2 + 7x_3 - 5x_4 + 8x_5 = 3 \end{cases}$
    

### 3. Hệ phương trình thiếu (Ít phương trình hơn ẩn)

- Hệ 2 phương trình, 4 ẩn:
    
    $\begin{cases} 2x_1 + 2x_2 - 3x_3 - 4x_4 = 1 \\ 2x_1 - x_2 + x_3 - 3x_4 = 3 \end{cases}$
    
- Hệ 2 phương trình, 5 ẩn:
    
    $\begin{cases} 3x_1 + 2x_2 + x_3 - x_4 - x_5 = 7 \\ 2x_1 + 3x_2 + 2x_3 - 2x_4 - 2x_5 = 8 \end{cases}$
    

---

### Gợi ý phương pháp giải chung:

1. **Sử dụng phương pháp khử Gauss:** Biến đổi ma trận hệ số bổ sung $[A|B]$ về dạng bậc thang.
    
2. **Định lý Kronecker-Capelli:** * Nếu $rank(A) < rank(A|B)$: Hệ vô nghiệm.
    
    - Nếu $rank(A) = rank(A|B) = n$ (số ẩn): Hệ có nghiệm duy nhất.
        
    - Nếu $rank(A) = rank(A|B) < n$: Hệ có vô số nghiệm (phụ thuộc vào $n - rank(A)$ ẩn tự do).
        


---
Chào bạn, mình đã nhận thêm hai ảnh mới từ bạn. Các bài toán này hoàn thiện thêm danh sách bài tập về **Hệ phương trình tuyến tính** mà bạn đang có.

Dưới đây là nội dung đã được mình biên tập lại, sắp xếp logic và dự đoán yêu cầu cụ thể cho từng bài để bạn dễ theo dõi nhé:

---

## Nhóm 1: Giải và biện luận hệ phương trình theo tham số $a$

**Yêu cầu:** Tìm giá trị của $a$ để hệ có nghiệm duy nhất, vô số nghiệm hoặc vô nghiệm. Sau đó tìm nghiệm tương ứng trong từng trường hợp.

### Bài VII.4

a. Tham số $a$ nằm ở vế phải (hệ số tự do):

$$\begin{cases} 3x_1 + 2x_2 + x_3 = -1 \\ 7x_1 + 6x_2 + 5x_3 = a \\ 5x_1 + 4x_2 + 3x_3 = 2 \end{cases}$$

> **Gợi ý nhanh:** Nếu bạn để ý, dòng 2 của ma trận hệ số bằng dòng 1 cộng dòng 3 nhân với một tỉ lệ nào đó (hoặc tổ hợp tuyến tính). Hệ này sẽ vô nghiệm nếu $a$ không thỏa mãn quy luật tương ứng của vế phải.

b. Tham số $a$ nằm trong ma trận hệ số (hệ đối xứng loại 1):

$$\begin{cases} ax_1 + x_2 + x_3 = 0 \\ x_1 + ax_2 + x_3 = 2 \\ x_1 + x_2 + ax_3 = -3 \end{cases}$$

> **Gợi ý nhanh:** Bạn nên tính định thức của ma trận hệ số $\Delta$ theo $a$. Hệ có nghiệm duy nhất khi $\Delta \neq 0$.

---

## Nhóm 2: Giải hệ phương trình tuyến tính tổng quát

**Yêu cầu:** Đây là các hệ số cụ thể, mục tiêu chính là tìm tập nghiệm $(x_1, x_2, x_3, x_4)$.

### Bài d

Đây là hệ 4 phương trình, 4 ẩn số:

$$\begin{cases} x_1 + x_2 - x_3 + x_4 = 0 \\ 2x_1 + 2x_2 + 5x_3 - 3x_4 = 0 \\ 7x_3 - 5x_4 = -1 \\ 3x_1 + 3x_2 + 4x_3 - 2x_4 = 3 \end{cases}$$

> **Dự đoán đặc điểm:** Trong hệ này, phương trình thứ 3 đã bị khuyết $x_1$ và $x_2$. Ngoài ra, nếu bạn cộng phương trình 1 và phương trình 2, bạn sẽ thấy nó có mối liên hệ mật thiết với phương trình 4. Điều này có thể dẫn đến việc hệ có vô số nghiệm hoặc vô nghiệm.

---

### Tổng kết và lời khuyên cho bạn:

- **Với các bài "Giải và biện luận" (Nhóm 1):** Phương pháp an toàn nhất là dùng **phương pháp Gauss** đưa về dạng bậc thang. Khi đó, các điều kiện của $a$ sẽ hiện ra rất rõ ràng ở các dòng cuối cùng.
    
- **Với các bài hệ 4-5 ẩn (Nhóm 2):** Vì bạn có hứng thú với lập trình C++, bạn có thể thử viết một chương trình nhỏ sử dụng thuật toán khử Gauss để giải các hệ này, vừa giúp học tốt Đại số, vừa luyện kỹ năng code đấy!
    
