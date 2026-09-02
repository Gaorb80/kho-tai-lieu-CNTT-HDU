---
tags:
  - university
  - Math
---

# Tổng hợp bài tập ôn thi Toán cao cấp

> Tài liệu này tổng hợp nội dung đã số hóa từ các ảnh bài tập. Các phần được sắp theo chủ đề để tiện tra cứu và ôn tập.

## Mục lục

0. [Đại số tuyến tính: Ma trận](#dai-so-tuyen-tinh-ma-tran
1. [Đại số tuyến tính: Hệ phương trình tuyến tính](#dai-so-tuyen-tinh-he-phuong-trình-tuyen-tinh
2. [Giải tích một biến: Giới hạn và liên tục](#giai-tich-một-bien-gioi-han-va-liên-tuc
3. [Giải tích nhiều biến: Hàm nhiều biến và cực trị](#giai-tich-nhieu-bien-ham-nhieu-bien-va-cực-tri
4. [Nguyên hàm và tích phân](#nguyên-ham-va-tich-phan
5. [Tích phân kép](#tich-phan-kép
6. [Phương trình vi phân](#phuong-trình-vi-phan

## Đại số tuyến tính: Ma trận

### TCC-09-24

### Phần 1: Các ma trận cơ bản

Danh sách các ma trận trong ảnh thứ nhất.

$$A_1 = \begin{bmatrix} 1 & 2 \\ 3 & 4 \end{bmatrix}, \quad A_2 = \begin{bmatrix} -5 & 0 \\ 7 & 8 \end{bmatrix}, \quad A_3 = \begin{bmatrix} 9 & -2 \\ -6 & 3 \end{bmatrix}$$

$$A_4 = \begin{bmatrix} 0 & 1 \\ -1 & 0 \end{bmatrix}, \quad A_5 = \begin{bmatrix} 2 & 2 \\ 2 & 2 \end{bmatrix}, \quad A_6 = \begin{bmatrix} \frac{1}{2} & \frac{3}{2} \\ -\frac{5}{2} & 4 \end{bmatrix}$$

---

### Phần 2: Giải phương trình ma trận

Ảnh thứ hai bao gồm 8 bài tập cụ thể với yêu cầu chung là **Tìm ma trận $X$**. Đây là dạng bài tập tìm $X$ trong phương trình $AX = B$ hoặc $XA = B$.

#### Phương pháp giải

- Nếu $AX = B \implies X = A^{-1} \cdot B$ (nhân ma trận nghịch đảo vào bên trái).
    
- Nếu $XA = B \implies X = B \cdot A^{-1}$ (nhân ma trận nghịch đảo vào bên phải).
    

|**STT**|**Ma trận A**|**Ma trận B**|**Phương trình cần giải**|
|---|---|---|---|
|**Bài 1**|$A = \begin{bmatrix} 1 & 2 \\ 0 & 1 \end{bmatrix}$|$B = \begin{bmatrix} 3 & 1 \\ 2 & 4 \end{bmatrix}$|$AX = B$|
|**Bài 2**|$A = \begin{bmatrix} 2 & 1 \\ 1 & 3 \end{bmatrix}$|$B = \begin{bmatrix} 5 & 4 \\ 7 & 6 \end{bmatrix}$|$XA = B$|
|**Bài 3**|$A = \begin{bmatrix} -1 & 2 \\ 0 & 3 \end{bmatrix}$|$B = \begin{bmatrix} 4 & -2 \\ 1 & 5 \end{bmatrix}$|$AX = B$|
|**Bài 4**|$A = \begin{bmatrix} 3 & 0 \\ 2 & 1 \end{bmatrix}$|$B = \begin{bmatrix} 6 & 2 \\ 5 & 3 \end{bmatrix}$|$XA = B$|
|**Bài 5**|$A = \begin{bmatrix} 1 & -1 \\ 2 & 3 \end{bmatrix}$|$B = \begin{bmatrix} 0 & 2 \\ 4 & 1 \end{bmatrix}$|$AX = B$|
|**Bài 6**|$A = \begin{bmatrix} 4 & 1 \\ 0 & 2 \end{bmatrix}$|$B = \begin{bmatrix} 7 & 3 \\ 2 & 1 \end{bmatrix}$|$XA = B$|
|**Bài 7**|$A = \begin{bmatrix} 2 & 0 \\ 1 & 1 \end{bmatrix}$|$B = \begin{bmatrix} 3 & 1 \\ 4 & 2 \end{bmatrix}$|$AX = B$|
|**Bài 8**|$A = \begin{bmatrix} 5 & 2 \\ 1 & 1 \end{bmatrix}$|$B = \begin{bmatrix} 10 & 6 \\ 3 & 2 \end{bmatrix}$|$XA = B$|

---

#### Nội dung cần nắm

1. **Tính toán cơ bản:** Tính tổng, hiệu và tổ hợp tuyến tính của các ma trận ở Phần 1.
    
2. **Tìm ma trận nghịch đảo:** Thành thạo cách tìm $A^{-1}$ cho ma trận cấp $2 \times 2$.
    
3. **Giải hệ phương trình:** Các phương trình ma trận này thực chất là một cách viết khác của hệ phương trình tuyến tính.

---

### TCC-09-25



---

### 1. Dự đoán yêu cầu chung của đề bài

Dựa trên cấu trúc các câu hỏi, mục tiêu chính của thầy bạn là giúp sinh viên rèn luyện các kỹ năng:

1. **Tính toán cơ bản trên ma trận:** Cộng, trừ ma trận, nhân ma trận với một số, nhân ma trận với ma trận.
    
2. **Ma trận nghịch đảo:** Kiểm tra tính khả nghịch và tìm ma trận nghịch đảo ($A^{-1}$).
    
3. **Giải phương trình ma trận:** Đây là nội dung trọng tâm. Bạn cần tìm ma trận $X$ chưa biết dựa trên các biểu thức như:
    
    - Dạng cơ bản: $AX = B$ hoặc $XA = B$.
        
    - Dạng mở rộng: $AX + B = C$, $XA - B = kI$, v.v.
        

---

### 2. Hệ thống hóa các bài tập theo từng ảnh


#### Nhóm 1: Các bài tập về phương trình ma trận cơ bản (Ảnh 1, 4, 5, 6)

Các bài này thường yêu cầu tìm $X$ từ các biểu thức có chứa ma trận đơn vị $I$ hoặc ma trận không $O$.

|**Bài số**|**Ma trận A**|**Ma trận B**|**Phương trình cần giải**|
|---|---|---|---|
|**Bài 1**|$A = \begin{bmatrix} 1 & 2 \\ 0 & 1 \end{bmatrix}$|$B = \begin{bmatrix} 2 & 1 \\ -1 & 0 \end{bmatrix}$|$XA - B = 2I$|
|**Bài 2**|$A = \begin{bmatrix} 0 & 1 \\ -1 & 2 \end{bmatrix}$|$B = \begin{bmatrix} 1 & 0 \\ 0 & -1 \end{bmatrix}$|$AX - 2B = O$|
|**Bài 3**|$A = \begin{bmatrix} 2 & -1 \\ 1 & 3 \end{bmatrix}$|$B = \begin{bmatrix} 0 & 2 \\ 1 & 1 \end{bmatrix}$|$XA + B = I$|
|**Bài 4**|$A = \begin{bmatrix} 1 & 0 \\ 2 & 1 \end{bmatrix}$|$B = \begin{bmatrix} 3 & 1 \\ 0 & 2 \end{bmatrix}$|$AX - B = 3I$|
|**Bài 6**|$A = \begin{bmatrix} 1 & -1 \\ 2 & 0 \end{bmatrix}$|$B = \begin{bmatrix} 2 & 0 \\ 1 & -1 \end{bmatrix}$|$AX + B = 2I$|
|**Bài 7**|$A = \begin{bmatrix} 0 & 2 \\ 1 & 1 \end{bmatrix}$|$B = \begin{bmatrix} 1 & -1 \\ 2 & 0 \end{bmatrix}$|$XA - B = O$|
|**Bài 8**|$A = \begin{bmatrix} 3 & 1 \\ 0 & 2 \end{bmatrix}$|$B = \begin{bmatrix} 2 & 0 \\ -1 & 1 \end{bmatrix}$|$AX - 2B = I$|

#### Nhóm 2: Các bài tập tổng hợp và nâng cao (Ảnh 2, 3, 7)

Nhóm này bao gồm cả việc tìm ma trận nghịch đảo và một số dạng phương trình đặc biệt hơn.

**Mẫu số 2:**

- Cho $A = \begin{bmatrix} 1 & 2 \\ 3 & 4 \end{bmatrix}$, $B = \begin{bmatrix} -2 & 6 \\ 7 & 1 \end{bmatrix}$.
    
- a) Tìm ma trận $2A + B$.
    
- b) Tìm ma trận $X$ thỏa mãn $XA = B$.
    

**Mẫu số 3 (Danh sách đánh số từ 5-8):**

- **Câu 5:** Giải $AX + XA = B$ với $A = \begin{pmatrix} 4 & 2 \\ 2 & 1 \end{pmatrix}, B = \begin{pmatrix} 0 & 0 \\ 1 & -1 \end{pmatrix}$. (Dạng này thường giải bằng cách đặt $X = \begin{pmatrix} a & b \\ c & d \end{pmatrix}$ rồi giải hệ phương trình).
    
- **Câu 6:** Tìm $X$ sao cho $AX = B$ với $A = \begin{pmatrix} 1 & 0 \\ 1 & 1 \end{pmatrix}, B = \begin{pmatrix} 2 & 2 \\ -1 & 0 \end{pmatrix}$.
    
- **Câu 7:** Cho $A = \begin{pmatrix} 2 & 0 \\ 0 & 3 \end{pmatrix}, B = \begin{pmatrix} 5 & 1 \\ 4 & 2 \end{pmatrix}$. a) Tìm $A^{-1}$. b) Tìm $X$ sao cho $AX + B = I$.
    
- **Câu 8:** Tìm $X$ thỏa $AX - B = I$ với $A = \begin{pmatrix} 0 & 2 \\ 1 & 1 \end{pmatrix}, B = \begin{pmatrix} -1 & 3 \\ 2 & 0 \end{pmatrix}$.
    

**Mẫu số 7 (Danh sách đánh số từ 1-4):**

- **Câu 1:** Tìm $A^{-1}$ và giải $AX + B = I$ với $A = \begin{pmatrix} 2 & 1 \\ 1 & 1 \end{pmatrix}, B = \begin{pmatrix} 1 & 0 \\ 2 & 3 \end{pmatrix}$.
    
- **Câu 2:** Giải $AX - 2B = O$ với $A = \begin{pmatrix} 1 & 3 \\ 0 & 2 \end{pmatrix}, B = \begin{pmatrix} 0 & 1 \\ -1 & 4 \end{pmatrix}$.
    
- **Câu 3:** Kiểm tra tính khả nghịch của $A$, tìm $A^{-1}$ và giải $AX = B$ với $A = \begin{pmatrix} 0 & 1 \\ -1 & 0 \end{pmatrix}, B = \begin{pmatrix} 2 & -1 \\ 3 & 1 \end{pmatrix}$.
    
- **Câu 4:** Tìm $X$ biết $XA + B = I$ với $A = \begin{pmatrix} 3 & -1 \\ 2 & 1 \end{pmatrix}, B = \begin{pmatrix} 1 & 2 \\ 0 & 1 \end{pmatrix}$.
    

---

### 3. Lời khuyên để giải quyết các dạng này

Để làm tốt các bài tập này, bạn nên nhớ các công thức chuyển vế sau (với điều kiện ma trận $A$ khả nghịch):

1. Nếu $AX = B \implies X = A^{-1}B$ (Nhân nghịch đảo vào bên **trái**).
    
2. Nếu $XA = B \implies X = BA^{-1}$ (Nhân nghịch đảo vào bên **phải**).
    
3. Ma trận đơn vị $I_2 = \begin{bmatrix} 1 & 0 \\ 0 & 1 \end{bmatrix}$.
    
4. Ma trận không $O = \begin{bmatrix} 0 & 0 \\ 0 & 0 \end{bmatrix}$.
    

> **Lưu ý:** Trong ma trận, tính chất giao hoán không tồn tại ($AX \neq XA$), nên bạn phải cực kỳ cẩn thận khi nhân ma trận nghịch đảo vào bên trái hay bên phải.


---

## Đại số tuyến tính: Hệ phương trình tuyến tính

### TCC-10-02

### 1. Nhóm hệ phương trình tham số $a$

#### Bài toán 1 (Xuất hiện trong ảnh 1, 6, 8)

Đây là hệ phương trình đầy đủ nhất, yêu cầu giải cụ thể và biện luận.

$$\begin{cases} x + y + z = 1 \\ 2x + ay - z = -2 \\ 4x + a^2y + z = 4 \end{cases} \quad (1)$$

Yêu cầu dự đoán:

- **a)** Giải hệ với giá trị cụ thể của $a$ (đề bài yêu cầu $a = -1$ và $a = 2$).
    
- **b)** Tìm điều kiện để hệ có nghiệm duy nhất.
    
- **c)** Giải và biện luận hệ phương trình theo tham số $a$ (xét các trường hợp hệ vô nghiệm hoặc vô số nghiệm).
    

#### Bài toán 2 (Xuất hiện trong ảnh 2, 9)

$$\begin{cases} x + y + z = 1 \\ 2x + ay - z = 2 \\ 4x + a^2y + z = 3 \end{cases}$$

Yêu cầu: Tìm điều kiện của tham số $a$ để hệ phương trình có nghiệm duy nhất.

#### Bài toán 3 (Xuất hiện trong ảnh 3)

$$\begin{cases} x + y + z = 1 \\ x + 2y + az = 1 \\ x + 4y + a^2z = 1 \end{cases}$$

Yêu cầu: Tìm điều kiện của tham số $a$ để hệ phương trình có nghiệm duy nhất.

#### Bài toán 4 (Xuất hiện trong ảnh 4)

$$\begin{cases} x - y + z = -1 \\ x + ay + a^2z = 1 \\ x - 2y + 4z = -2 \end{cases}$$

Yêu cầu: Tìm điều kiện của tham số $a$ để hệ phương trình có nghiệm duy nhất.

---

### 2. Nhóm hệ phương trình tham số $m$

#### Bài toán 5 (Xuất hiện trong ảnh 5)

$$\begin{cases} x + y + z = 1 \\ x + my + z = m \\ mx + y + z = m^2 \end{cases}$$

Yêu cầu: Tìm điều kiện của tham số $m$ để hệ phương trình có nghiệm duy nhất.

#### Bài toán 6 (Xuất hiện trong ảnh 7)

Đây là hệ phương trình thuần nhất (vế phải bằng 0).

$$\begin{cases} x + y + z = 0 \\ x + my + z = 0 \\ mx + y + z = 0 \end{cases}$$

Yêu cầu: Tìm điều kiện của tham số $m$ để hệ có nghiệm không tầm thường (tức là ngoài nghiệm $x=y=z=0$ còn có các nghiệm khác).

---

### 3. Phương pháp giải chung

Với các dạng bài này, cần nắm vững hai công cụ chính:

1. **Sử dụng Định thức (Phương pháp Cramer):** * Tính định thức của ma trận hệ số $A$, ký hiệu là $\det(A)$.
    
    - Hệ có **nghiệm duy nhất** khi và chỉ khi $\det(A) \neq 0$.
        
    - Đối với hệ thuần nhất (Bài 6), hệ có **nghiệm không tầm thường** khi và chỉ khi $\det(A) = 0$.
        
2. **Phương pháp khử Gauss (Biến đổi ma trận bậc thang):** * Lập ma trận bổ sung $\overline{A} = [A|B]$.
    
    - Dùng các phép biến đổi sơ cấp để đưa về dạng bậc thang.
        
    - Biện luận dựa trên hạng của ma trận: $r(A) = r(\overline{A}) = n$ (nghiệm duy nhất), $r(A) < r(\overline{A})$ (vô nghiệm), $r(A) = r(\overline{A}) < n$ (vô số nghiệm).
        

---

---

### TCC-10-08



---

### 1. Bài tập mẫu (Có lời giải)

Đây là bài toán dùng để minh họa phương pháp giải chung cho cả bộ bài tập này.

Đề bài: Giải hệ phương trình tuyến tính bằng phương pháp Gauss:

$$\begin{cases} 3x_1 + 4x_2 + x_3 + 2x_4 = 3 \\ 6x_1 + 8x_2 + 2x_3 + 5x_4 = 7 \\ 9x_1 + 12x_2 + 3x_3 + 10x_4 = 13 \end{cases}$$

**Tóm tắt cách giải từ ảnh:**

1. **Lập ma trận bổ sung $(A|B)$**.
    
2. **Biến đổi sơ cấp dòng** để đưa ma trận về dạng bậc thang.
    
3. **Biện luận số nghiệm:** Hệ này có vô số nghiệm vì số ẩn (4) lớn hơn số phương trình độc lập sau khi biến đổi.
    
4. **Kết quả:** Nghiệm tổng quát phụ thuộc vào các tham số tự do $t, s \in \mathbb{R}$.
    

---

### 2. Danh sách các bài tập thực hành

Các bài tập này đều có cùng cấu trúc: **3 phương trình và 4 ẩn số ($x_1, x_2, x_3, x_4$)**.

#### Nhóm A: Các hệ phương trình cơ bản

- Bài 1:
    
    $$\begin{cases} 2x_1 - x_2 + 3x_3 - 7x_4 = 5 \\ 6x_1 - 3x_2 + x_3 - x_4 = 7 \\ 4x_1 - 2x_2 + 14x_3 - 31x_4 = 18 \end{cases}$$
    
- Bài 2:
    
    $$\begin{cases} x_1 + 6x_2 + 2x_3 + 4x_4 = 2 \\ 2x_1 - 2x_2 - 2x_3 - 2x_4 = -1 \\ 3x_1 + 4x_2 + 4x_3 + 4x_4 = 2 \end{cases}$$
    

#### Nhóm B: Các hệ phương trình có hệ số tương đồng (Dễ nhầm lẫn)

- Bài 3:
    
    $$\begin{cases} 2x_1 + x_2 - x_3 + x_4 = 1 \\ 4x_1 - 2x_2 + x_3 - 3x_4 = -1 \\ -2x_1 + x_2 + x_3 - 2x_4 = -1 \end{cases}$$
    
- Bài 4:
    
    $$\begin{cases} 2x_1 + 2x_2 - x_3 + x_4 = 1 \\ 2x_1 - 4x_2 + x_3 - 3x_4 = -1 \\ -x_1 + 2x_2 + x_3 - 2x_4 = -1 \end{cases}$$
    

#### Nhóm C: Các hệ phương trình biến biến đổi nhẹ ở hệ số ẩn

- Bài 5:
    
    $$\begin{cases} x_1 - 3x_2 + x_3 + 2x_4 = 1 \\ 4x_1 + 2x_2 - 2x_3 - 2x_4 = -1 \\ 3x_1 - 2x_2 + 2x_3 + 2x_4 = 1 \end{cases}$$
    
- Bài 6:
    
    $$\begin{cases} x_1 + 3x_2 + x_3 + x_4 = 1 \\ 4x_1 - 2x_2 - 2x_3 - x_4 = -1 \\ 3x_1 + 2x_2 + 2x_3 + x_4 = 1 \end{cases}$$
    

---

### 3. Dự đoán yêu cầu của đề bài

Dựa trên hình ảnh bài giải mẫu và cấu trúc đề thi thông thường, thầy của bạn chắc chắn sẽ yêu cầu các nội dung sau:

1. **Yêu cầu chính:** Tìm nghiệm của các hệ phương trình trên.
    
2. **Phương pháp bắt buộc:** Sử dụng **phương pháp khử Gauss** (biến đổi ma trận về dạng bậc thang hoặc bậc thang rút gọn).
    
3. **Yêu cầu trình bày:** * Phải viết rõ ma trận bổ sung $(A|B)$.
    
    - Ghi rõ các phép biến đổi sơ cấp trên dòng (ví dụ: $d_2 \to -2d_1 + d_2$).
        
    - Xác định hạng của ma trận hệ số $rank(A)$ và hạng của ma trận bổ sung $rank(\bar{A})$ để kết luận hệ có nghiệm hay không.
        
    - Vì số ẩn (4) > số phương trình (3), đa số các bài này sẽ rơi vào trường hợp **Vô số nghiệm**. Bạn cần chỉ ra ẩn nào là ẩn tự do và viết nghiệm dưới dạng tham số (giống bài mẫu cuối cùng).
        

**Lời khuyên:** Bạn nên bắt đầu làm từ Bài 1 và dùng các phần mềm hoặc máy tính bỏ túi để kiểm tra lại hạng của ma trận trước khi giải chi tiết nhé.


---

### TCC-10-09 nhieu_anh


Các bài toán này thuộc học phần **Đại số tuyến tính**, tập trung vào hai nội dung chính: **Biện luận hệ phương trình theo tham số** và **Giải hệ phương trình tuyến tính tổng quát**.


---

### Nhóm 1: Tìm điều kiện của tham số để hệ có nghiệm

**Yêu cầu dự đoán:** Đây là dạng bài biện luận. Bạn cần tìm giá trị của tham số ($a, b, c$) để hệ phương trình không bị vô nghiệm (có nghiệm duy nhất hoặc vô số nghiệm).

#### Bài VII.2

**a.** $\begin{cases} ax_1 + x_2 + x_3 = 1 \\ x_1 + ax_2 + x_3 = 1 \\ x_1 + x_2 + ax_3 = 1 \end{cases}$

**b.** $\begin{cases} x_1 + ax_2 + a^2x_3 = a^3 \\ x_1 + bx_2 + b^2x_3 = b^3 \\ x_1 + cx_2 + c^2x_3 = c^3 \end{cases}$ _(Đây là hệ có ma trận hệ số Vandermonde)_

---

### Nhóm 2: Giải các hệ phương trình tuyến tính cụ thể

**Yêu cầu dự đoán:** Giải hệ phương trình (tìm $x_1, x_2, ...$). Các hệ này có thể có nghiệm duy nhất, vô số nghiệm (phụ thuộc vào ẩn tự do) hoặc vô nghiệm.

#### 1. Hệ phương trình 3 phương trình

- Hệ 3 ẩn:
    
    $\begin{cases} 2x_1 + 3x_2 + x_3 = 1 \\ 4x_1 + 6x_2 - 5x_3 = 2 \\ 6x_1 + 9x_2 - 4x_3 = 2 \end{cases}$
    
- Hệ 4 ẩn:
    
    $\begin{cases} 3x_1 + 4x_2 + x_3 + 2x_4 = 3 \\ 6x_1 + 8x_2 + 2x_3 + 5x_4 = 7 \\ 9x_1 + 12x_2 + 3x_3 + 10x_4 = 13 \end{cases}$
    
- Hệ 4 ẩn (khác):
    
    $\begin{cases} x_1 - x_2 + x_3 - 2x_4 = 1 \\ x_1 - x_2 + 2x_3 - x_4 = 2 \\ 5x_1 - 5x_2 + 8x_3 - 7x_4 = 3 \end{cases}$
    
- Hệ 5 ẩn:
    
    $\begin{cases} x_1 - 2x_2 - 3x_3 + 2x_4 + 4x_5 = -3 \\ 3x_1 - 5x_2 + x_3 - 3x_4 + 2x_5 = 1 \\ 2x_1 - 3x_2 + 4x_3 - 5x_4 - x_5 = 4 \end{cases}$
    

#### 2. Hệ phương trình 4 phương trình

- Hệ 4 ẩn:
    
    $\begin{cases} x_1 + 2x_2 - 3x_3 - 4x_4 = 1 \\ 2x_1 + 3x_2 + x_3 - x_4 = 2 \\ x_1 + 3x_2 - x_3 + 2x_4 = 1 \\ 4x_1 - 4x_2 - 3x_3 - 3x_4 = -7 \end{cases}$
    
- Hệ 5 ẩn (dạng tam giác/bậc thang):
    
    $\begin{cases} 2x_1 + 3x_2 + 3x_3 - 3x_4 + x_5 = 10 \\ x_1 + x_2 - x_3 - 5x_4 + 7x_5 = 1 \\ x_2 + 2x_3 + 4x_4 - 8x_5 = 2 \\ 4x_3 + x_4 - x_5 = 3 \end{cases}$
    
- Hệ 5 ẩn tổng quát:
    
    $\begin{cases} 3x_1 + x_2 - 2x_3 + x_4 - x_5 = 1 \\ 2x_1 - x_2 + 7x_3 - 3x_4 + 5x_5 = 2 \\ x_1 + 3x_2 - 2x_3 + 5x_4 - 7x_5 = 3 \\ 3x_1 - 2x_2 + 7x_3 - 5x_4 + 8x_5 = 3 \end{cases}$
    

#### 3. Hệ phương trình thiếu (Ít phương trình hơn ẩn)

- Hệ 2 phương trình, 4 ẩn:
    
    $\begin{cases} 2x_1 + 2x_2 - 3x_3 - 4x_4 = 1 \\ 2x_1 - x_2 + x_3 - 3x_4 = 3 \end{cases}$
    
- Hệ 2 phương trình, 5 ẩn:
    
    $\begin{cases} 3x_1 + 2x_2 + x_3 - x_4 - x_5 = 7 \\ 2x_1 + 3x_2 + 2x_3 - 2x_4 - 2x_5 = 8 \end{cases}$
    

---

#### Gợi ý phương pháp giải chung:

1. **Sử dụng phương pháp khử Gauss:** Biến đổi ma trận hệ số bổ sung $[A|B]$ về dạng bậc thang.
    
2. **Định lý Kronecker-Capelli:** * Nếu $rank(A) < rank(A|B)$: Hệ vô nghiệm.
    
    - Nếu $rank(A) = rank(A|B) = n$ (số ẩn): Hệ có nghiệm duy nhất.
        
    - Nếu $rank(A) = rank(A|B) < n$: Hệ có vô số nghiệm (phụ thuộc vào $n - rank(A)$ ẩn tự do).
        


---


---

### Nhóm 1: Giải và biện luận hệ phương trình theo tham số $a$

**Yêu cầu:** Tìm giá trị của $a$ để hệ có nghiệm duy nhất, vô số nghiệm hoặc vô nghiệm. Sau đó tìm nghiệm tương ứng trong từng trường hợp.

#### Bài VII.4

a. Tham số $a$ nằm ở vế phải (hệ số tự do):

$$\begin{cases} 3x_1 + 2x_2 + x_3 = -1 \\ 7x_1 + 6x_2 + 5x_3 = a \\ 5x_1 + 4x_2 + 3x_3 = 2 \end{cases}$$

> **Gợi ý nhanh:** Nếu bạn để ý, dòng 2 của ma trận hệ số bằng dòng 1 cộng dòng 3 nhân với một tỉ lệ nào đó (hoặc tổ hợp tuyến tính). Hệ này sẽ vô nghiệm nếu $a$ không thỏa mãn quy luật tương ứng của vế phải.

b. Tham số $a$ nằm trong ma trận hệ số (hệ đối xứng loại 1):

$$\begin{cases} ax_1 + x_2 + x_3 = 0 \\ x_1 + ax_2 + x_3 = 2 \\ x_1 + x_2 + ax_3 = -3 \end{cases}$$

> **Gợi ý nhanh:** Bạn nên tính định thức của ma trận hệ số $\Delta$ theo $a$. Hệ có nghiệm duy nhất khi $\Delta \neq 0$.

---

### Nhóm 2: Giải hệ phương trình tuyến tính tổng quát

**Yêu cầu:** Đây là các hệ số cụ thể, mục tiêu chính là tìm tập nghiệm $(x_1, x_2, x_3, x_4)$.

#### Bài d

Đây là hệ 4 phương trình, 4 ẩn số:

$$\begin{cases} x_1 + x_2 - x_3 + x_4 = 0 \\ 2x_1 + 2x_2 + 5x_3 - 3x_4 = 0 \\ 7x_3 - 5x_4 = -1 \\ 3x_1 + 3x_2 + 4x_3 - 2x_4 = 3 \end{cases}$$

> **Dự đoán đặc điểm:** Trong hệ này, phương trình thứ 3 đã bị khuyết $x_1$ và $x_2$. Ngoài ra, nếu bạn cộng phương trình 1 và phương trình 2, bạn sẽ thấy nó có mối liên hệ mật thiết với phương trình 4. Điều này có thể dẫn đến việc hệ có vô số nghiệm hoặc vô nghiệm.

---

#### Tổng kết và lời khuyên cho bạn:

- **Với các bài "Giải và biện luận" (Nhóm 1):** Phương pháp an toàn nhất là dùng **phương pháp Gauss** đưa về dạng bậc thang. Khi đó, các điều kiện của $a$ sẽ hiện ra rất rõ ràng ở các dòng cuối cùng.
    
- **Với các bài hệ 4-5 ẩn (Nhóm 2):** Vì bạn có hứng thú với lập trình C++, bạn có thể thử viết một chương trình nhỏ sử dụng thuật toán khử Gauss để giải các hệ này, vừa giúp học tốt Đại số, vừa luyện kỹ năng code đấy!
    

---

## Giải tích một biến: Giới hạn và liên tục

### TCC-10-15



---

### I. Lý thuyết: Các phép tính đại số của hàm có giới hạn

#### 1. Trường hợp giới hạn hữu hạn (Định lý 5.3.8 & Bổ sung)

Giả sử $\lim_{x \to x_0} f(x) = l, \lim_{x \to x_0} g(x) = l_2$ (với $l, l_1, l_2$ là các số thực).

1. $\lim_{x \to x_0} |f(x)| = |l|$.
    
2. $\lim_{x \to x_0} f(x) = 0 \iff \lim_{x \to x_0} |f(x)| = 0$.
    
3. **Tổng:** $\lim_{x \to x_0} [f(x) + g(x)] = l_1 + l_2$.
    
4. **Nhân với hằng số:** $\lim_{x \to x_0} \lambda f(x) = \lambda l$ (với $\lambda \in \mathbb{R}$).
    
5. **Tích với hàm bị chặn:** Nếu $\lim_{x \to x_0} f(x) = 0$ và $g(x)$ bị chặn trong lân cận của $x_0$ ($x \neq x_0$) thì $\lim_{x \to x_0} f(x)g(x) = 0$.
    
6. **Tích:** $\lim_{x \to x_0} f(x)g(x) = l_1 l_2$.
    
7. **Thương:** $\lim_{x \to x_0} \frac{f(x)}{g(x)} = \frac{l_1}{l_2}$ (với $l_2 \neq 0$).
    

---

#### 2. Trường hợp giới hạn là vô hạn (Mệnh đề 5.1)

Các quy tắc này áp dụng khi giới hạn tiến tới $+\infty$ hoặc $-\infty$.

- **Phép cộng:**
    
    - $(+\infty) + l = +\infty$
        
    - $(-\infty) + l = -\infty$
        
    - $(+\infty) + (+\infty) = +\infty$
        
    - $(-\infty) + (-\infty) = -\infty$
        
- **Phép nhân (với $l \neq 0$):**
    
    - $(+\infty) \cdot l = +\infty$ nếu $l > 0$; và bằng $-\infty$ nếu $l < 0$.
        
    - $(-\infty) \cdot l = -\infty$ nếu $l > 0$; và bằng $+\infty$ nếu $l < 0$.
        
    - $(+\infty) \cdot (+\infty) = +\infty$
        
    - $(-\infty) \cdot (-\infty) = +\infty$
        
    - $(+\infty) \cdot (-\infty) = -\infty$
        
- **Phép nghịch đảo:**
    
    - Nếu $\lim_{x \to x_0} f(x) = 0$ và $f(x) > 0$ gần $x_0$ thì $\lim_{x \to x_0} \frac{1}{f(x)} = +\infty$.
        
    - Nếu $\lim_{x \to x_0} f(x) = 0$ and $f(x) < 0$ gần $x_0$ thì $\lim_{x \to x_0} \frac{1}{f(x)} = -\infty$.
        

_(Lưu ý: Mệnh đề trên đúng cho cả giới hạn một bên và giới hạn tại vô cực)._

---

### II. Ví dụ minh họa và Giải chi tiết

#### Ví dụ 5: Tìm các giới hạn

1. **$\lim_{x \to 2} (x + 2)$**
    
    - _Giải:_ Thay trực tiếp $x = 2 \Rightarrow 2 + 2 = 4$.
        
2. **$\lim_{x \to 3} \frac{x^2 - 9}{x - 3}$**
    
    - _Giải:_ Dạng $\frac{0}{0}$. Phân tích tử số: $\lim_{x \to 3} \frac{(x-3)(x+3)}{x-3} = \lim_{x \to 3} (x+3) = 6$.
        
3. **$\lim_{x \to 0} \frac{|x|}{x}$**
    
    - _Giải:_ Xét giới hạn trái và phải:
        
        - $\lim_{x \to 0^+} \frac{x}{x} = 1$
            
        - $\lim_{x \to 0^-} \frac{-x}{x} = -1$
            
    - Vì $1 \neq -1$ nên **không tồn tại** giới hạn.
        
4. **$\lim_{x \to 4} \frac{\sqrt{2x+1} - 3}{\sqrt{x} - 2 - \sqrt{2}}$** _(Lưu ý: Đề bài trong ảnh có thể viết nhầm mẫu số, tôi viết lại theo logic giải)_
    
    - _Giải:_ Nhân liên hợp để khử dạng $\frac{0}{0}$. Kết quả: $\frac{2}{3}\sqrt{2}$.
        
5. **$\lim_{x \to 0} (\sin x \cdot \cos \frac{1}{x})$**
    
    - _Giải:_ Vì $\lim_{x \to 0} \sin x = 0$ và $|\cos \frac{1}{x}| \leq 1$ (bị chặn), theo quy tắc (I.1.5), giới hạn bằng $0$.
        

#### Ví dụ 6: Bài tập tự luyện (Dự đoán yêu cầu)

Dựa trên hình ảnh cuối, đây là các bài tập bạn cần giải:

1. **$\lim_{x \to -\infty} (5x^5 + 2x^3 - 3x + 4)$**
    
    - _Dự đoán kết quả:_ Vì bậc cao nhất là $x^5$ và hệ số dương, khi $x \to -\infty$ thì giới hạn là $-\infty$.
        
2. **$\lim_{x \to 6^+} \frac{4x - 3}{x - 6}$**
    
    - _Dự đoán kết quả:_ Tử số tiến tới $4(6)-3 = 21 > 0$. Mẫu số tiến tới $0$ từ phía dương ($x-6 > 0$). Kết quả là $+\infty$.
        

---

### III. Dự đoán yêu cầu của đề bài

Thông qua nội dung này, thầy của bạn muốn bạn nắm vững:

1. **Ghi nhớ các quy tắc đại số:** Cách cộng, trừ, nhân, chia các giới hạn hữu hạn.
    
2. **Xử lý các dạng vô định cơ bản:** Như $\frac{0}{0}$ bằng cách phân tích nhân tử hoặc nhân liên hợp.
    
3. **Hiểu về giới hạn vô hạn:** Cách xử lý khi mẫu số tiến về $0$ hoặc khi $x$ tiến ra vô cực.
    
4. **Kỹ năng xét giới hạn một bên:** Để chứng minh sự tồn tại (hoặc không tồn tại) của giới hạn tại một điểm.
    


---

### TCC-10-16



---

### 📑 Nội dung các bài tập giới hạn

#### **Ví dụ 9: Tính các giới hạn (Dạng vô định $0/0$)**

Đây là các bài toán giới hạn khi $x$ tiến dần về $0$.

1. $$\lim_{x \to 0} \frac{\sin 2x}{\sin 7x}$$
    
2. $$\lim_{x \to 0} \frac{2x^4 - 3x^3 + 3x^2}{3x^5 - 2x^4 + 3x^3 - 2x^2}$$
    

#### **Ví dụ 10: Tìm các giới hạn (Dạng vô định $\infty/\infty$)**

Đây là bài toán giới hạn của hàm phân thức khi $x$ tiến ra vô cực.

- $$\lim_{x \to -\infty} \frac{x^2 + x - 1}{2x^2 - 2}$$
    

---

### 🔍 Dự đoán yêu cầu và Mục tiêu bài học

Dựa trên các ví dụ này, có vẻ thầy bạn đang muốn ôn tập cho các bạn 3 kỹ năng xử lý dạng vô định quan trọng nhất:

1. **Sử dụng giới hạn cơ bản của hàm lượng giác:** Ở Ví dụ 9.1, mục tiêu là áp dụng công thức $\lim_{u \to 0} \frac{\sin u}{u} = 1$. Thầy muốn bạn biết cách nhân chia thêm bớt để đưa về dạng chuẩn.
    
2. **Khử nhân tử chung tại điểm $x=0$:** Ở Ví dụ 9.2, khi thay $x=0$ vào cả tử và mẫu đều bằng 0. Mục tiêu là bạn phải biết rút gọn lũy thừa thấp nhất của $x$ (ở đây là $x^2$) để triệt tiêu "thành phần gây ra số 0".
    
3. **Quy tắc bậc của đa thức tại vô cực:** Ở Ví dụ 10, đây là giới hạn tại vô cực. Thầy muốn bạn nắm quy tắc: khi $x \to \infty$, giá trị giới hạn phụ thuộc vào tỉ số của các hệ số đứng trước lũy thừa bậc cao nhất.
    

---

### 💡 Gợi ý hướng giải nhanh

Nếu bạn đang cần chuẩn bị bài trước khi lên lớp, bạn có thể tham khảo hướng giải này:

- **Câu 9.1:** Tách thành $\frac{\sin 2x}{2x} \cdot \frac{7x}{\sin 7x} \cdot \frac{2}{7}$. Kết quả sẽ là $\frac{2}{7}$.
    
- **Câu 9.2:** Chia cả tử và mẫu cho $x^2$. Biểu thức trở thành $\frac{2x^2 - 3x + 3}{3x^3 - 2x^2 + 3x - 2}$. Khi thay $x=0$, kết quả là $\frac{3}{-2} = -1.5$.
    
- **Ví dụ 10:** Chia cả tử và mẫu cho $x^2$ (bậc cao nhất). Kết quả sẽ tiến về tỉ số $\frac{1}{2}$.
    

---

### TCC-10-21



---

### 1. Các giới hạn cơ bản & Thay số trực tiếp

_(Nội dung từ ảnh số 3 - Bài 2)_

**Yêu cầu:** Tìm các giới hạn sau:

- **a)** $\lim_{x \to 0} (x^3 + 5x^2 + 10x)$
    
- **b)** $\lim_{x \to 1} \frac{\sqrt{x^2 - 5x + 6}}{x - 2}$
    
- **c)** $\lim_{x \to 3} \sqrt{x - 1}$
    
- **d)** $\lim_{x \to -2} \frac{2x^2 + 3x + 1}{-x^2 + 4x + 2}$
    
- **e)** $\lim_{x \to 1} \left( \frac{1}{1 + x} - \frac{1}{1 - 2x^3} \right)$
    
- **f)** $\lim_{x \to 0} \frac{x^2 - 4}{x^3 - 3x + 2}$
    
- **g)** $\lim_{x \to 1} \frac{\sqrt{1 + x} - \sqrt{1 - x}}{x}$
    
- **h)** $\lim_{x \to \frac{\pi}{2}} \frac{\sin x}{x}$
    
- **i)** $\lim_{x \to 0} \frac{1}{\cos x}$
    
- **j)** $\lim_{x \to 0} \frac{\tan x + \sin 2x}{\cos x}$
    
- **k)** $\lim_{x \to \frac{\pi}{4}} \frac{\tan x}{\pi - x}$
    

---

### 2. Dạng vô định $\frac{0}{0}$

_(Nội dung từ ảnh số 2 - Bài 3)_

**Yêu cầu:** Khử dạng vô định bằng cách phân tích đa thức thành nhân tử hoặc nhân liên hợp.

- **a)** $\lim_{x \to 2} \frac{x^2 - 4}{x^2 - 3x + 2}$
    
- **b)** $\lim_{x \to -1} \frac{x^2 - 1}{x^2 + 3x + 2}$
    
- **c)** $\lim_{x \to 5} \frac{x^2 - 5x}{x^2 - 25}$
    
- **d)** $\lim_{x \to 2} \frac{x^2 - 2x}{-2x^2 + 6x - 4}$
    
- **e)** $\lim_{x \to 1} \frac{x^3 - 3x + 2}{x^4 - 4x + 3}$
    
- **f)** $\lim_{x \to 1} \frac{x^3 - x^2 - x + 1}{-x^2 + 3x - 2}$
    
- **g)** $\lim_{x \to -2} \frac{2x^2 + x - 6}{x^3 + 8}$
    
- **h)** $\lim_{x \to 3} \frac{x^4 - x^2 - 72}{x^2 - 2x - 3}$
    
- **i)** $\lim_{x \to -1} \frac{x^5 + 1}{x^3 + 1}$
    
- **j)** $\lim_{x \to 3} \frac{x^3 - 5x^2 + 3x + 9}{x^4 - 8x^2 - 9}$
    
- **k)** $\lim_{x \to 1} \frac{2x^4 + 8x^3 + 7x^2 - 4x - 4}{3x^3 + 14x^2 + 20x + 8}$
    
- **l)** $\lim_{x \to -2} \frac{x^3 - 3x^2 - 9x + 2}{x^3 - x + 6}$
    
- **m)** $\lim_{x \to 1} \left( \frac{2}{x^2 - 1} - \frac{1}{x - 1} \right)$
    
- **n)** $\lim_{x \to 1} \left( \frac{1}{1 - x} - \frac{3}{1 - x^3} \right)$
    
- **o)** $\lim_{x \to 1} \frac{x - 5x^5 + 4x^6}{(1 - x)^2}$
    

---

### 3. Dạng vô định $\frac{\infty}{\infty}$

_(Nội dung từ ảnh số 1 - Bài 7)_

**Yêu cầu:** Tìm giới hạn tại vô cực bằng phương pháp chia cho số hạng có bậc cao nhất.

- **a)** $\lim_{x \to +\infty} \frac{2x + 1}{x - 1}$
    
- **b)** $\lim_{x \to -\infty} \frac{x^2 + 1}{1 - 3x - 5x^2}$
    
- **c)** $\lim_{x \to +\infty} \frac{x\sqrt{x} + 1}{x^2 + x + 1}$
    
- **d)** $\lim_{x \to -\infty} \frac{3x(2x^2 - 1)}{(5x - 1)(x^2 + 2x)}$
    
- **e)** $\lim_{x \to \pm\infty} \frac{3x^3 - 2x + 2}{-2x^3 + 2x^2 - 1}$
    
- **f)** $\lim_{x \to +\infty} \frac{3x^3 - 2x^2 - 1}{4x^4 + 3x - 2}$
    
- **g)** $\lim_{x \to \pm\infty} \frac{x^3 - 2x^2 - 2}{3x^2 - x - 1}$
    
- **h)** $\lim_{x \to \pm\infty} \frac{x^4 - 3x^2 + 1}{-x^3 + 2x - 2}$
    
- **i)** $\lim_{x \to \pm\infty} \frac{(x - 1)^2(7x + 2)^2}{(2x + 1)^4}$
    
- **j)** $\lim_{x \to \pm\infty} \frac{(2x - 3)^2(4x + 7)^3}{(3x - 4)^2(5x^2 - 1)}$
    
- **k)** $\lim_{x \to \infty} \frac{\sqrt{4x^2 + 1}}{3x - 1}$
    
- **l)** $\lim_{x \to +\infty} \frac{\sqrt{x^2 - 3x} + 2x}{3x - 1}$
    

---

#### 💡 Dự đoán yêu cầu của đề bài

Dựa trên cấu trúc bài tập, mình dự đoán thầy của bạn đang muốn các bạn nắm vững 3 kỹ năng chính sau:

1. **Kỹ năng tính giới hạn cơ bản:** Biết cách thay giá trị $x$ vào hàm số khi hàm số liên tục tại điểm đó.
    
2. **Kỹ năng khử dạng vô định $0/0$:** Đây là trọng tâm. Bạn cần dùng các hằng đẳng thức, lược đồ Horner để chia đa thức, hoặc nhân liên hợp (với các bài có căn thức) để triệt tiêu nhân tử gây ra số 0 ở mẫu.
    
3. **Kỹ năng tính giới hạn tại vô cực ($\infty/\infty$):** Nắm vững quy tắc so sánh bậc của tử và mẫu:
    
    - Bậc tử < Bậc mẫu: Kết quả bằng 0.
        
    - Bậc tử = Bậc mẫu: Kết quả bằng tỉ số của hệ số bậc cao nhất.
        
    - Bậc tử > Bậc mẫu: Kết quả ra vô cực ($\pm\infty$).
        

**Lời khuyên:** Bạn nên bắt đầu làm từ Bài 2 (ảnh 3) để khởi động, sau đó tập trung làm kỹ Bài 3 (ảnh 2) vì đây là dạng bài thường xuất hiện nhất trong các bài kiểm tra.

---

### TCC-10-22



---

### Nhóm 1: Tìm tham số để hàm số liên tục tại một điểm hoặc trên $\mathbb{R}$

Đây là dạng bài phổ biến nhất trong các ảnh bạn gửi. Mục tiêu chung là tìm giá trị của $a$ (hoặc $A$) sao cho:

$$\lim_{x \to 0^+} f(x) = \lim_{x \to 0^-} f(x) = f(0)$$

#### Bài 1 (Từ ảnh 4) - Mức độ cơ bản

Đề bài: Tìm $a$ để hàm số sau liên tục tại $x=0$:

$$f(x) = \begin{cases} \dfrac{\sin 2x}{x} & \text{khi } x > 0 \\ a & \text{khi } x \leq 0 \end{cases}$$

- **Dự đoán yêu cầu:** Sử dụng giới hạn cơ bản $\lim_{x \to 0} \frac{\sin u}{u} = 1$ để tìm giới hạn bên phải và cho nó bằng $a$.
    

#### Bài 2 (Từ ảnh 1 và ảnh 5 - Hai ảnh này nội dung giống hệt nhau)

Đề bài: Tìm $a$ để hàm số sau liên tục tại mọi $x \in \mathbb{R}$:

$$f(x) = \begin{cases} \dfrac{\cos x - 1}{x^2} & \text{khi } x < 0 \\ a(x-1) & \text{khi } x \geq 0 \end{cases}$$

- **Dự đoán yêu cầu:** Bạn cần tính giới hạn tại $0^-$ (thường dùng công thức hạ bậc hoặc L'Hospital) và giá trị tại $f(0)$ để giải tìm $a$.
    

#### Bài 3 (Từ ảnh 2)

Đề bài: Tìm tham số $a$ để hàm số sau liên tục với mọi $x$:

$$f(x) = \begin{cases} \dfrac{\cos x - 1}{x^2} & \text{khi } x > 0 \\ ax + a^2 - 1 & \text{khi } x \leq 0 \end{cases}$$

- **Dự đoán yêu cầu:** Tương tự bài trên, nhưng biểu thức ở nhánh dưới là một phương trình bậc 2 theo $a$. Sau khi tính giới hạn, bạn sẽ giải phương trình bậc 2 để tìm các giá trị của $a$.
    

---

### Nhóm 2: Xét tính liên tục (Có chứa tham số hoặc biểu thức phức tạp)

#### Bài 4 (Từ ảnh 3) - Mức độ nâng cao

Đề bài: Xét sự liên tục của hàm số tại $x = 0$:

$$f(x) = \begin{cases} \dfrac{1 - \cos 2x}{e^x + e^{-x} - 2} & \text{khi } x < 0 \\ A(1 + \sin x) & \text{khi } x \geq 0 \end{cases}$$

- **Dự đoán yêu cầu:** Mặc dù đề ghi là "Xét sự liên tục", nhưng vì có tham số $A$, yêu cầu thực chất thường là **"Tìm $A$ để hàm số liên tục tại $x=0$"**. Bài này khó hơn vì mẫu số có chứa hàm mũ ($e^x$), cần dùng khai triển Taylor hoặc quy tắc L'Hospital để khử dạng vô định $0/0$.
    

#### Bài 5 (Từ ảnh 6) - Xét tính liên tục thuần túy

Đề bài: Xét tính liên tục của hàm số:

$$f(x) = \begin{cases} \dfrac{\sqrt{1+x} - 1}{x} & \text{khi } x > 0 \\ x^3 - 2x + 1 & \text{khi } x \leq 0 \end{cases}$$

- **Dự đoán yêu cầu:** Kiểm tra xem hàm số có liên tục tại điểm nối $x=0$ hay không. Bạn tính giới hạn bên phải bằng cách nhân liên hợp và so sánh với giá trị $f(0)$. Nếu bằng nhau thì kết luận hàm số liên tục, nếu khác nhau thì hàm số gián đoạn.
    

---

#### Tóm tắt phương pháp giải chung cho các bài này:

1. **Bước 1:** Tính $f(x_0)$ (thường là tại $x=0$).
    
2. **Bước 2:** Tính giới hạn bên trái $\lim_{x \to x_0^-} f(x)$ và giới hạn bên phải $\lim_{x \to x_0^+} f(x)$.
    
3. **Bước 3:** * Nếu tìm tham số: Cho 3 giá trị trên bằng nhau để giải tìm $a$ hoặc $A$.
    
    - Nếu xét tính liên tục: So sánh xem chúng có bằng nhau không.
        


---

## Giải tích nhiều biến: Hàm nhiều biến và cực trị

### TCC-10-29



---

### 1. Tìm tập xác định của hàm số

Dựa trên **Ảnh 5**, các biểu thức này thường xuất hiện trong yêu cầu tìm miền xác định (tập xác định $D$).

- **Bài 1:** $z = \sqrt{1 - x^2 - y^2}$
    
    - _Dự đoán:_ Tìm $x, y$ để $1 - x^2 - y^2 \ge 0 \Rightarrow x^2 + y^2 \le 1$ (Hình tròn đơn vị).
        
- **Bài 2:** $z = \ln(x + y)$ (Trong ảnh ghi là $x=...$ nhưng logic hàm số thường là $z$)
    
    - _Dự đoán:_ Tìm $x, y$ để $x + y > 0 \Rightarrow y > -x$.
        
- **Bài 3:** $u = \frac{y}{\sqrt{9 - x^2 - y^2 - z^2}}$
    
    - _Dự đoán:_ Tìm $x, y, z$ để $9 - x^2 - y^2 - z^2 > 0 \Rightarrow x^2 + y^2 + z^2 < 9$ (Phần bên trong khối cầu bán kính bằng 3).
        

---

### 2. Giới hạn và sự liên tục

Dựa trên **Ảnh 2**, đây là các hàm số kinh điển dùng để xét giới hạn tại điểm $(0,0)$.

- **Hàm 1:** $f(x,y) = \frac{x^2y}{x^2 + y^2}$
    
- **Hàm 2:** $f(x,y) = \frac{xy}{x^2 + y^2}$
    
- **Hàm 3:** $f(x,y) = \frac{xy}{\sqrt{x^2 + y^2}}$
    
- _Dự đoán:_ Yêu cầu là **"Tính giới hạn của các hàm số khi $(x, y) \to (0, 0)$"** hoặc **"Xét tính liên tục của hàm số tại $(0,0)$"**.
    

---

### 3. Tính đạo hàm riêng

Dựa trên **Ảnh 1** và **Ảnh 6**, đề bài đã ghi rõ yêu cầu tính đạo hàm riêng.

- **Dạng biểu thức phức hợp (Ảnh 1):**
    
    - $z = e^{xy} \ln(x^2 + y^2)$
        
    - _Yêu cầu:_ Tính $z'_x$ và $z'_y$.
        
- **Dạng tính tại điểm cụ thể (Ảnh 6):**
    
    - 1. $u = x^3y$. Tính đạo hàm riêng $u'_x$ tại điểm $(1,2)$ và $u'_y$ tại điểm $(1,1)$.
            
    - 2. $u = x^y$ (với $x > 0$). Tính các hàm đạo hàm riêng $u'_x(x,y)$ và $u'_y(x,y)$.
            

---

### 4. Tìm cực trị của hàm số

Dựa trên **Ảnh 3** và **Ảnh 4**, đây là các hàm đa thức hai biến bậc cao hoặc bậc hai, thường dùng để tìm điểm dừng và cực trị.

- **Bài 1 (Ảnh 3):** $f(x, y) = x^2 + 2xy + 3xy^2 + 6x - 3y - 10$
    
- **Bài 2 (Ảnh 4):** $f(x, y) = x^2 + xy + y^2 - 2x - y$
    
- _Dự đoán:_ Yêu cầu là **"Tìm các điểm dừng và cực trị (cực đại, cực tiểu) của hàm số"**.
    

---

#### Tóm tắt logic lộ trình học:

Nếu bạn đang ôn tập, lộ trình của các bức ảnh này đi đúng theo trình tự lý thuyết:

1. **Tập xác định** (Ảnh 5)
    
2. **Giới hạn/Liên tục** (Ảnh 2)
    
3. **Cách tính đạo hàm riêng** (Ảnh 1, 6)
    
4. **Ứng dụng đạo hàm riêng để tìm cực trị** (Ảnh 3, 4)
    

---

### TCC-11-05 (1)

#### Dự đoán yêu cầu chung của các đề bài

Tất cả các câu hỏi này đều thuộc chương trình **Toán cao cấp (Giải tích 2)** ở bậc Đại học.

- **Chủ đề:** Tìm cực trị tự do của hàm hai biến $f(x, y)$.
    
- **Mục tiêu:** Bạn cần tìm các điểm dừng (stationary points) và kiểm tra xem tại đó hàm số đạt cực đại, cực tiểu hay không có cực trị (điểm yên ngựa).
    

---

#### Tóm tắt phương pháp giải (Dựa trên Ví dụ 5 bạn gửi)

Để giải các bài tập này, bạn sẽ thực hiện theo 3 bước chính:

1. Tìm điểm dừng: Giải hệ phương trình đạo hàm riêng bậc nhất bằng 0:
    
    $$\begin{cases} f'_x = 0 \\ f'_y = 0 \end{cases} \Rightarrow \text{Tìm các điểm } P_i(x_0, y_0)$$
    
2. **Tính đạo hàm riêng cấp 2:** Tính $A = f''_{x^2}$, $B = f''_{xy}$, $C = f''_{y^2}$.
    
3. **Xét dấu $\Delta = B^2 - AC$ tại từng điểm dừng:**
    
    - Nếu $\Delta < 0$: Hàm có cực trị.
        
        - $A > 0$: Cực tiểu.
            
        - $A < 0$: Cực đại.
            
    - Nếu $\Delta > 0$: Không có cực trị (điểm yên ngựa).
        
    - Nếu $\Delta = 0$: Chưa kết luận được (cần xét thêm).
        

---

#### Danh sách các bài tập trong ảnh

Mình đã phân loại các bài tập từ dạng đa thức đơn giản đến các dạng chứa phân thức và căn thức:

##### Nhóm 1: Hàm đa thức bậc 2 (Cơ bản)

Đây là dạng dễ nhất, đạo hàm cấp 2 thường là hằng số.

1. $f(x, y) = (x-1)^2 + 2y^2$ _(Xuất hiện trong 2 ảnh)_
    
2. $f(x, y) = x^2 + xy + y^2 - 2x - 3y$
    
3. $f(x, y) = x^2 + xy + y^2 - 6x - 9y$
    
4. $f(x, y) = 1 + 6x - x^2 - xy - y^2$
    
5. **Ví dụ mẫu:** $f(x, y) = x^2 + xy + y^2 - 2x - y$ _(Đây là bài đã có lời giải chi tiết trong ảnh của bạn)_.
    

##### Nhóm 2: Hàm đa thức bậc cao (Trung bình)

Dạng này khi đạo hàm bậc nhất sẽ ra hệ phương trình có thể có nhiều nghiệm (nhiều điểm dừng).

6. $f(x, y) = x^3 + y^3 - 3xy$

7. $f(x, y) = 2x^3 + y^2 - x^2$

##### Nhóm 3: Hàm chứa phân thức, căn thức (Nâng cao)

Dạng này cần chú ý điều kiện xác định của biến.

8. $f(x, y) = xy + \frac{50}{x} + \frac{20}{y}$ với điều kiện $(x > 0, y > 0)$.

9. $f(x, y) = x\sqrt{y} - x^2 - y + 6x + 3$ (Điều kiện: $y \ge 0$).

---

---

### TCC-11-05 (2)

#### Dự đoán yêu cầu của đề bài

Tất cả các hình ảnh đều có chung một dòng tiêu đề: **"Tìm cực trị của hàm số"**.

Đối với học phần **Giải tích 2** (hoặc Toán cao cấp cho sinh viên năm nhất), yêu cầu cụ thể của dạng bài này thường là:

1. Tìm các điểm dừng (Critical points) bằng cách giải hệ phương trình đạo hàm riêng bậc nhất bằng 0: $f'_x = 0$ và $f'_y = 0$.
    
2. Tính các đạo hàm riêng bậc hai để lập ma trận Hessian (hoặc tính các giá trị $A = f''_{xx}, B = f''_{xy}, C = f''_{yy}$).
    
3. Xét dấu biệt thức $\Delta = AC - B^2$ để kết luận xem điểm đó là **Cực đại, Cực tiểu** hay **Điểm yên ngựa**.
    

---

#### Danh sách các hàm số (Sắp xếp theo độ phức tạp)


##### Nhóm 1: Các hàm đa thức (Thường xuất hiện trong các bài tập cơ bản)

Đây là nhóm các hàm số chỉ chứa $x$ và $y$ dưới dạng lũy thừa, cách tính đạo hàm tương đối trực tiếp.

1. $f(x, y) = x^2 + xy + y^2 - 3x - 6y$
    
2. $f(x, y) = x^2 + xy + y^2 + x - y + 1$
    
3. $f(x, y) = 4(x - y) - x^2 - y^2$
    
4. $f(x, y) = 2x^3 + y^2 - x^2$
    
5. $f(x, y) = \frac{1}{3}x^3 + \frac{1}{2}y^2 - 2xy$
    
6. $f(x, y) = 3xy - x^3 - y^3$
    
7. $f(x, y) = 2x^4 + y^4 + 4x^2 - 4y$
    

##### Nhóm 2: Các hàm chứa mũ ($e$) và tích hỗn hợp (Mức độ nâng cao hơn)

Nhóm này yêu cầu bạn cẩn thận hơn khi dùng quy tắc đạo hàm tích ($u \cdot v$).

8. $f(x, y) = e^{-2x}(x + y^2 + 2y)$
    
9. $f(x, y) = e^{3x}(x^2 + xy - y)$
    
10. $f(x, y) = x + y - xe^y + 12$
    

---

#### Bảng tổng hợp nhanh cho lớp

|**STT**|**Hàm số f(x,y)**|**Loại hàm**|
|---|---|---|
|01|$x^2 + xy + y^2 - 3x - 6y$|Đa thức bậc 2|
|02|$x^2 + xy + y^2 + x - y + 1$|Đa thức bậc 2|
|03|$4(x - y) - x^2 - y^2$|Đa thức bậc 2|
|04|$2x^3 + y^2 - x^2$|Đa thức bậc 3|
|05|$\frac{1}{3}x^3 + \frac{1}{2}y^2 - 2xy$|Đa thức bậc 3|
|06|$3xy - x^3 - y^3$|Đa thức bậc 3|
|07|$2x^4 + y^4 + 4x^2 - 4y$|Đa thức bậc 4|
|08|$e^{-2x}(x + y^2 + 2y)$|Hàm mũ|
|09|$e^{3x}(x^2 + xy - y)$|Hàm mũ|
|10|$x + y - xe^y + 12$|Hàm mũ hỗn hợp|

---

#### Một vài lưu ý nhỏ cho bạn:

- **Điểm bẫy:** Với các hàm có $e^x$, khi đạo hàm riêng, $e^x$ luôn dương nên thường ta chỉ cần quan tâm đến phần biểu thức trong ngoặc sau khi đã rút gọn.
    
- **Cẩn thận:** Ở bài số 7 ($2x^4 + y^4 + ...$), việc giải hệ phương trình đạo hàm riêng có thể dẫn đến nhiều điểm dừng, lớp mình nên chú ý liệt kê đầy đủ.
    

---

### TCC-11-05 (3)



---

### 1. Nội dung đề bài


- Bài 1: Tìm cực trị của hàm số:
    
    $$f(x, y) = 4(y - x) + x^2 + y^2$$
    
    (Có thể viết lại thành: $f(x, y) = x^2 + y^2 - 4x + 4y$)
    
- Bài 2: Tìm cực trị của hàm số:
    
    $$f(x, y) = \frac{1}{3}x^3 + \frac{1}{2}y^2 - 2xy$$
    

---

### 2. Dự đoán yêu cầu và các bước giải

Yêu cầu chung của dạng bài này là bạn phải xác định xem hàm số đạt **cực đại**, **cực tiểu** tại điểm nào, hoặc điểm đó có phải là **điểm yên ngựa** hay không.

Để giải quyết một cách logic, bạn nên thực hiện theo các bước sau:

#### Bước 1: Tìm các điểm dừng

Bạn cần tính các đạo hàm riêng bậc nhất và giải hệ phương trình:

- $f'_x = 0$
    
- $f'_y = 0$
    
    Kết quả của hệ này sẽ cho bạn các tọa độ $(x_0, y_0)$ gọi là điểm dừng.
    

#### Bước 2: Tính các đạo hàm riêng bậc hai

Tính các giá trị:

- $A = f''_{xx}$
    
- $B = f''_{xy}$
    
- $C = f''_{yy}$
    

#### Bước 3: Xét dấu của biệt thức $\Delta$ (hoặc $D$)

Tại mỗi điểm dừng, tính $\Delta = AC - B^2$:

- **Nếu $\Delta > 0$ và $A > 0$:** Hàm số đạt **cực tiểu** tại điểm đó.
    
- **Nếu $\Delta > 0$ và $A < 0$:** Hàm số đạt **cực đại** tại điểm đó.
    
- **Nếu $\Delta < 0$:** Điểm đó là **điểm yên ngựa** (không có cực trị).
    
- **Nếu $\Delta = 0$:** Chưa thể kết luận (cần xét thêm).
    

---

### 3. Gợi ý hướng giải nhanh

- **Ở bài 1:** Đây là hàm bậc hai đơn giản. Đạo hàm riêng sẽ cho ra một điểm dừng duy nhất. Vì các hệ số của $x^2$ và $y^2$ đều dương, khả năng cao đây là một điểm cực tiểu.
    
- **Ở bài 2:** Do có sự xuất hiện của $x^3$, khi đạo hàm bạn sẽ thu được phương trình bậc hai. Điều này có nghĩa là bài toán có thể có **nhiều điểm dừng** khác nhau (thường là 2 điểm). Bạn sẽ cần xét $\Delta$ cho từng điểm một.
    

---

## Nguyên hàm và tích phân

### TCC-11-25


Các hình ảnh bao gồm: bảng công thức lý thuyết, các bài tập trắc nghiệm tính toán cơ bản và nâng cao. Tôi đã tổng hợp và sắp xếp lại nội dung một cách logic theo lộ trình: **Lý thuyết -> Bài tập Nguyên hàm -> Bài tập Tích phân.**

---

### 1. Hệ thống công thức Nguyên hàm (Tóm tắt từ ảnh 7)

Để làm được các bài tập này, bạn cần nắm vững bảng nguyên hàm của các hàm số sơ cấp và hàm hợp:

|**Nguyên hàm cơ bản**|**Nguyên hàm hàm hợp (u=ax+b)**|
|---|---|
|$\int dx = x + C$|$\int du = u + C$|
|$\int x^\alpha dx = \frac{x^{\alpha+1}}{\alpha+1} + C$|$\int (ax+b)^\alpha dx = \frac{1}{a} \cdot \frac{(ax+b)^{\alpha+1}}{\alpha+1} + C$|
|$\int \frac{1}{x} dx = \ln|x|
|$\int e^x dx = e^x + C$|$\int e^{ax+b} dx = \frac{1}{a} e^{ax+b} + C$|
|$\int \cos x dx = \sin x + C$|$\int \cos(ax+b) dx = \frac{1}{a} \sin(ax+b) + C$|
|$\int \sin x dx = -\cos x + C$|$\int \sin(ax+b) dx = -\frac{1}{a} \cos(ax+b) + C$|

---

### 2. Phần 1: Bài tập Nguyên hàm (Sắp xếp theo độ khó)

#### Dạng 1: Tìm nguyên hàm cơ bản (Đa thức, phân thức đơn giản)

- **Câu 2:** Tìm nguyên hàm của $f(x) = 2x + 6$. (Đáp án: $x^2 + 6x + C$)
    
- **Câu 3:** Tính $\int x^2 dx$. (Đáp án: $\frac{1}{3}x^3 + C$)
    
- **Câu 4:** Tìm nguyên hàm của $f(x) = 3x^2 + 1$. (Đáp án: $x^3 + x + C$)
    
- **Câu 5:** Tìm nguyên hàm của $f(x) = x^3 + x$. (Đáp án: $\frac{1}{4}x^4 + \frac{1}{2}x^2 + C$)
    
- **Câu 11:** Tìm nguyên hàm của $f(x) = x^2 + \frac{2}{x^2}$. (Đáp án: $\frac{x^3}{3} - \frac{2}{x} + C$)
    
- **Câu 14:** Cho $f(x) = x^2 + 4$. Mệnh đề đúng là: $\int f(x)dx = \frac{x^3}{3} + 4x + C$.
    

#### Dạng 2: Nguyên hàm chứa căn thức và hàm số mũ

- **Câu 12:** Tính $\int \sqrt{x\sqrt{x\sqrt{x}}} dx$ (Biến đổi về số mũ: $\int x^{7/8} dx$).
    
- **Câu 15:** Trên $(0; +\infty)$, tìm nguyên hàm của $f(x) = x^{3/2}$. (Đáp án: $\frac{2}{5}x^{5/2} + C$)
    
- **Bài tập tự luận (Ảnh 5):** Tìm nguyên hàm của:
    
    - a) $f(x) = x^3 - 3x + \frac{1}{x}$
        
    - b) $f(x) = 2^x + 3^x$
        

#### Dạng 3: Nguyên hàm hàm hợp và biến đổi tích thành tổng

- **Câu 10:** Tìm nguyên hàm của $f(x) = (5x + 3)^5$. (Đáp án: $\frac{(5x+3)^6}{30} + C$)
    
- **Câu 9:** Tìm nguyên hàm $F(x)$ của $f(x) = (x+1)(x+2)(x+3)$. (Khai triển đa thức trước khi tính).
    
- **Bài tập tự luận (Ảnh 5):** d) $f(x) = \sin^4 x \cos x$ (Sử dụng phương pháp đổi biến số).
    

---

### 3. Phần 2: Bài tập Tích phân (Có giới hạn)

#### Dạng 1: Tính tích phân cơ bản

- **Câu 1:** Tính $I = \int_0^2 (2x + 1) dx$. (Đáp án: 6)
    
- **Câu 2:** Tính $\int_0^1 (3x + 1)(x + 3) dx$. (Đáp án: 9)
    
- **Câu 5:** Tính $\int_0^1 e^{3x+1} dx$.
    
- **Câu 10 (Ảnh 2):** Tính $\int_0^{\pi/2} \sin x dx$. (Đáp án: 1)
    

#### Dạng 2: Tích phân chứa logarit và hàm mũ phức tạp

- **Câu 3:** Tính $I = \int_1^e (\frac{1}{x} - \frac{1}{x^2}) dx$. (Đáp án: $1 - \frac{1}{e}$)
    
- **Câu 4:** Biết $\int_1^3 \frac{x+2}{x} dx = a + b \ln c$. Tính $S = a + b + c$.
    
- **Câu 6 (Ảnh 2):** Biết $\int_0^1 \frac{e^x}{2^x} dx = \frac{e}{a} + b$. Tính $P = a + b$.
    

#### Dạng 3: Tích phân vận dụng (Biến đổi phân thức/hàm mũ)

- **Câu 7 (Ảnh 2):** Tính $I = \int_0^1 \frac{e^{2x} - 4}{e^x + 2} dx$. (Gợi ý: Dùng hằng đẳng thức $a^2 - b^2$ để rút gọn).
    
- **Câu 8 (Ảnh 2):** Tính $I = \int_1^2 e^x (1 - \frac{e^{-x}}{x}) dx$.
    
- **Ảnh 4:** Tính tích phân $\int \frac{dx}{e^x + 1}$. (Gợi ý: Nhân cả tử và mẫu với $e^x$ hoặc dùng phương pháp đổi biến).
    

---

### 4. Dự đoán yêu cầu của thầy bạn

Dựa trên cấu trúc đề bài, tôi dự đoán mục tiêu của tập tài liệu này là:

1. **Kiểm tra kỹ năng nhận diện công thức:** Các câu hỏi đầu tiên (2, 3, 4, 5) rất cơ bản, dùng để thuộc bảng nguyên hàm.
    
2. **Rèn luyện kỹ năng biến đổi:** Các câu chứa căn thức (Câu 12, 13) yêu cầu bạn phải giỏi về lũy thừa.
    
3. **Kỹ năng tính toán tích phân để tìm hệ số $a, b, c$:** Đây là dạng bài rất phổ biến trong đề thi THPT Quốc gia (như câu 4, 6, 8, 9 ở phần tích phân), mục đích là để học sinh không thể bấm máy tính ra ngay đáp án mà phải giải tự luận.
    
4. **Ôn tập tổng hợp:** Từ hàm đa thức, hàm mũ ($e^x$) đến hàm lượng giác ($\sin, \cos$).
    

> **Lời khuyên:** Bạn nên bắt đầu làm từ **Ảnh 3** (Nguyên hàm cơ bản), sau đó sang **Ảnh 1** (Hàm hợp/Căn thức) và cuối cùng là các ảnh về **Tích phân** (Ảnh 6, Ảnh 2).

---

## Tích phân kép

### TCC-11-27 (1)



---

### 1. Lý thuyết: Cách tính tích phân kép

Đây là phần nền tảng để giải quyết tất cả các bài tập còn lại. Mục tiêu là đưa tích phân kép về tích phân lặp.

Cho hàm số $f(x,y)$ liên tục trên miền đóng và bị chặn $D$.

- Trường hợp 1 (Miền loại I - Hình chiếu lên trục Ox):
    
    Nếu $D = \begin{cases} a \le x \le b \\ y_1(x) \le y \le y_2(x) \end{cases}$ thì:
    
    $$I = \iint_D f(x,y) \, dxdy = \int_a^b dx \int_{y_1(x)}^{y_2(x)} f(x,y) \, dy$$
    
- Trường hợp 2 (Miền loại II - Hình chiếu lên trục Oy):
    
    Nếu $D = \begin{cases} c \le y \le d \\ x_1(y) \le x \le x_2(y) \end{cases}$ thì:
    
    $$I = \iint_D f(x,y) \, dxdy = \int_c^d dy \int_{x_1(y)}^{x_2(y)} f(x,y) \, dx$$
    

---

### 2. Ví dụ minh họa (Trong giáo trình)

Đây là các bài toán đã có lời giải hoặc là ví dụ mẫu để bạn hiểu cách áp dụng lý thuyết.

- **Ví dụ 2:** Tính thể tích vật thể.
    
    - Miền $D: \begin{cases} 0 \le x \le 2 \\ 0 \le y \le 2 \end{cases}$
        
    - Tính: $V = \iint_D (16 - x^2 - 2y^2) \, dxdy = 48$.
        
- **Ví dụ 3:** Tính tích phân $I = \iint_D xy \, dxdy$.
    
    - Miền $D$ giới hạn bởi: $y = 2 - x^2$ và $y = x$.
        

---

### 3. Hệ thống Bài tập vận dụng (Các ảnh "Đề")

Tôi đã gom nhóm các bài tập có cùng biểu thức dưới dấu tích phân để bạn dễ theo dõi:

#### Nhóm 1: Hàm số $I = \iint_D (x^2 + 2xy + 2) \, dxdy$

- **Bài A:** Miền $D$ giới hạn bởi: $y = -x; \ x = 0; \ y = -1$.
    
- **Bài B:** Miền $D$ giới hạn bởi: $y = -x; \ x = 0; \ y = 1$.
    
- **Bài C:** Miền $D$ giới hạn bởi: $y = 2x; \ x = 0; \ y = 2$.
    

#### Nhóm 2: Hàm số $I = \iint_D \left( \frac{x^2}{y^2} + xy \right) \, dxdy$

- **Bài D:** Miền $D$ giới hạn bởi: $y = x; \ y = \frac{1}{x}; \ x = -2$.
    
- **Bài E:** Miền $D$ giới hạn bởi: $y = x; \ y = \frac{1}{x}; \ x = 2$.
    

---

### 4. Dự đoán yêu cầu của đề bài

Thông thường, với các dạng bài tập này, thầy giáo sẽ yêu cầu bạn thực hiện các bước sau:

1. **Vẽ miền $D$:** Xác định hình dạng của miền $D$ trên mặt phẳng tọa độ $Oxy$.
    
2. **Tìm giao điểm:** Giải phương trình hoành độ/tung độ giao điểm của các đường biên.
    
3. **Xác định cận tích phân:** Dựa vào hình vẽ để quyết định nên tính theo thứ tự $dy \, dx$ hay $dx \, dy$ cho thuận tiện nhất.
    
4. **Tính toán:** Thực hiện tính tích phân từ trong ra ngoài.
    

**Ví dụ về logic giải bài Nhóm 2 (Bài E):**

- Các đường: $y = x$, $y = 1/x$, $x = 2$.
    
- Giao điểm của $y = x$ và $y = 1/x$ là $x = 1$.
    
- Vậy miền $D$ sẽ chạy từ $x = 1$ đến $x = 2$. Cận của $y$ sẽ từ đường nằm dưới ($y = 1/x$) đến đường nằm trên ($y = x$).
    

---

---

### TCC-11-27 (2)



---

### 1. Nhóm bài toán miền D là hình tròn hoặc một phần hình tròn

_(Thường sử dụng phương pháp Đổi biến sang Tọa độ cực)_

|**STT**|**Đề bài (Tính tích phân I)**|**Miền giới hạn D**|**Đặc điểm miền D**|
|---|---|---|---|
|**01**|$\iint_D (1 + x^2 + y^2) \, dx \, dy$|$x^2 + y^2 \le 1; \, x \ge 0$|Nửa hình tròn bên phải trục tung.|
|**02**|$\iint_D \frac{dx \, dy}{\sqrt{1 + x^2 + y^2}}$|$x^2 + y^2 \le 1; \, x \ge 0; \, y \ge 0$|1/4 hình tròn (Góc phần tư thứ I).|
|**03**|$\iint_D (1 + \sqrt{x^2 + y^2}) \, dx \, dy$|$x^2 + y^2 \le 1; \, x \ge 0; \, y \ge 0$|1/4 hình tròn (Góc phần tư thứ I).|
|**04**|$\iint_D (1 - x^2 - y^2) \, dx \, dy$|$x^2 + y^2 \le 1; \, x \ge 0; \, y \ge 0$|1/4 hình tròn (Góc phần tư thứ I).|

---

### 2. Nhóm bài toán miền D là tam giác

_(Thường tính trực tiếp bằng Tọa độ đề các)_

|**STT**|**Đề bài (Tính tích phân I)**|**Miền giới hạn D**|**Ghi chú**|
|---|---|---|---|
|**05**|$\iint_D (2x^2 - 2xy + 1) \, dx \, dy$|$x + y = 1; \, x = 0; \, y = 0$|Tam giác nằm ở góc phần tư thứ I.|
|**06**|$\iint_D (2x^2 - 2xy + 1) \, dx \, dy$|$x + y + 1 = 0; \, x = 0; \, y = 0$|Tam giác nằm ở góc phần tư thứ III.|

---

### Dự đoán yêu cầu và Mục tiêu của các đề bài này

Vì bạn là sinh viên năm nhất, thầy giáo đưa ra các dạng bài này thường nhằm kiểm tra các kỹ năng sau:

1. **Kỹ năng vẽ miền integration (miền D):** Đây là bước quan trọng nhất. Bạn cần xác định đúng hình dáng của miền $D$ để đặt giới hạn cho tích phân.
    
2. **Kỹ năng chọn hệ tọa độ:**
    
    - Nếu miền $D$ có dạng hình tròn ($x^2 + y^2$) và hàm dưới dấu tích phân cũng chứa $x^2 + y^2$: **Dùng tọa độ cực** ($x = r\cos\varphi, y = r\sin\varphi$) sẽ cực kỳ nhanh.
        
    - Nếu miền $D$ giới hạn bởi các đường thẳng: **Dùng tọa độ Đề các** thông thường.
        
3. **Kỹ năng tính tích phân xác định:** Sau khi đưa về tích phân lặp, bạn sẽ thực hiện tính toán từ trong ra ngoài.
    

**Lời khuyên:** * Với nhóm 1 (Hình tròn), hãy nhớ công thức đổi biến: $dx \, dy = r \, dr \, d\varphi$ và $x^2 + y^2 = r^2$.

- Với nhóm 2 (Tam giác), hãy xác định cận của $x$ trước (ví dụ từ $0$ đến $1$) rồi suy ra cận của $y$ theo $x$.
    


---

### TCC-11-27 (3)



---

### 1. Nhóm tích phân trên miền đa giác (Tọa độ Descartes)

Các bài toán này yêu cầu bạn vẽ miền $D$ dựa trên các đường thẳng cho trước, sau đó xác định cận của $x$ và $y$.

- **Bài 1:** Tính tích phân $I = \iint_D (3x^2 - xy)dxdy$
    
    - Miền $D$ giới hạn bởi: $x + y = 1; x = 0; y = 0$.
        
    - _(Đây là miền tam giác vuông tại gốc tọa độ)_.
        
- **Bài 2:** Tính tích phân $I = \iint_D (x - y - xy)dxdy$
    
    - Miền $D$ giới hạn bởi: $y = x; y = 2x; x = 1$.
        
    - _(Đây là miền tam giác nằm giữa hai đường thẳng đi qua gốc tọa độ)_.
        
- **Bài 3:** Tính tích phân $I = \iint_D (x + y + xy)dxdy$
    
    - Miền $D$ giới hạn bởi: $y = x; x = 2; y = 0; y = 1$.
        
- **Bài 4:** Tính tích phân $I = \iint_D (x + y + xy)dxdy$
    
    - Miền $D$ giới hạn bởi: $y = x; x = -2; y = 0; y = -1$.
        
    - _(Lưu ý: Bài này và bài 3 có hàm dưới dấu tích phân giống nhau nhưng miền $D$ khác nhau)_.
        

---

### 2. Nhóm tích phân trên miền tròn (Tọa độ cực)

Bài này thường được giải nhanh nhất bằng cách chuyển sang hệ tọa độ cực ($x = r\cos\varphi, y = r\sin\varphi$).

- **Bài 5:** Tính tích phân $I = \iint_D \frac{dxdy}{\sqrt{2 - x^2 - y^2}}$
    
    - Miền $D$ giới hạn bởi: $x^2 + y^2 \le 1; x \ge 0; y \ge 0$.
        
    - _(Đây là 1/4 hình tròn đơn vị nằm ở góc phần tư thứ nhất)_.
        

---

#### Dự đoán yêu cầu của đề bài

Dựa trên kinh nghiệm của mình, mục tiêu của thầy giáo khi đưa ra các đề bài này thường là:

1. **Kỹ năng vẽ hình:** Kiểm tra xem sinh viên có phác thảo đúng miền $D$ trên mặt phẳng $Oxy$ hay không.
    
2. **Kỹ năng đổi biến:** Đặc biệt là ở Bài 5, yêu cầu bạn phải biết khi nào dùng tọa độ Descartes, khi nào dùng tọa độ cực.
    
3. **Kỹ năng tính toán:** Thực hiện các bước lấy nguyên hàm hai lớp (tính theo biến này rồi đến biến kia).
    

#### Lời khuyên cho bạn

Nếu bạn đang chuẩn bị cho kỳ thi, hãy tập trung vào bước **"Xác định cận tích phân"**. Đây là bước khó nhất; một khi đã lắp được số vào dấu tích phân $\int_{a}^{b} \int_{g_1(x)}^{g_2(x)} f(x,y) dy dx$ thì việc còn lại chỉ là tính toán cơ bản.

---

## Phương trình vi phân

### TCC-12-17

### 📋 Tổng hợp đề bài phương trình vi phân

#### Nhóm 1: Phương trình vi phân biến số phân ly (Tách biến)

Đây là nhóm các bài toán ở ảnh đầu tiên, nơi bạn có thể đưa $x$ về một vế và $y$ về một vế để lấy tích phân.

1. $(xy^2 + x)dx + (y - x^2y)dy = 0$
    
2. $x + xy + y'(y + xy) = 0$
    
3. $y'\tan x = y$ với điều kiện đầu $y\left(\frac{\pi}{2}\right) = 1$ (Bài toán Cauchy)
    
4. $(1 + e^x)yy' = e^x$
    
5. $xy' - y = y^2$
    
6. $(x^2 - yx^2)y' + y^2 + xy^2 = 0$
    

#### Nhóm 2: Phương trình vi phân toàn phần

Đây là các bài toán ở các ảnh rời phía sau. Đặc điểm chung của nhóm này là có dạng $M(x,y)dx + N(x,y)dy = 0$ và thỏa mãn điều kiện $\frac{\partial M}{\partial y} = \frac{\partial N}{\partial x}$.

7. $e^{-y}dx - (2y + xe^{-y})dy = 0$
    
8. $\frac{2x}{y^3}dx + \left(\frac{y^2 - 3x^2}{y^4}\right)dy = 0$
    
9. $\frac{3x^2 + y^2}{y^2}dx - \frac{2x^3 + 5y}{y^3}dy = 0$
    
10. $2x\left(1 + \sqrt{x^2 - y}\right)dx - \sqrt{x^2 - y}dy = 0$
    
11. $\frac{y}{x^2}dx - \frac{1}{x}dy = 0$
    
12. $\left(2x - \frac{1}{y}\right)dx + \left(1 + \frac{x}{y^2} + \frac{1}{y}\right)dy = 0$
    
13. $(2 - 9xy^2)x dx + (4y^2 - 6x^3)y dy = 0$
    

---

### 🔍 Dự đoán yêu cầu của đề bài

Vì đây là bài tập về nhà hoặc đề cương ôn tập, yêu cầu chính chắc chắn là:

1. **Tìm nghiệm tổng quát:** Giải các phương trình để tìm hàm $y(x)$ hoặc mối liên hệ $U(x, y) = C$.
    
2. **Giải bài toán Cauchy:** Riêng đối với câu số 3, bạn cần tìm một nghiệm cụ thể đi qua điểm $(\frac{\pi}{2}, 1)$.
    
3. **Phân loại phương trình:** Thầy có thể yêu cầu bạn xác định xem phương trình đó thuộc loại nào (tách biến, toàn phần, tuyến tính...) trước khi giải.
    

---

### 💡 Gợi ý nhanh cách giải

- **Với Nhóm 1:** Bạn hãy cố gắng đặt nhân tử chung để đưa về dạng $f(x)dx = g(y)dy$, sau đó lấy tích phân hai vế là xong.
    
- **Với Nhóm 2:** Kiểm tra tính "toàn phần" bằng cách đạo hàm riêng. Nếu đúng là phương trình vi phân toàn phần, bạn sẽ tìm hàm $U(x,y)$ sao cho $dU = Mdx + Ndy$.
    


---

