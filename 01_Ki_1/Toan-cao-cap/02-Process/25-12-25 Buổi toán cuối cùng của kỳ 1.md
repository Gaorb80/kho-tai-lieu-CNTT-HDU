---
tags:
  - Math
  - university
source:
forward: "[[26-01-01 Tiếp tục hoàn thành bài 2-3-4 buổi toán cuối cùng - tìm tham số đề hàm có nghiệm duy nhất]]"
---
# Tổng hợp kiến thức quan trong cho bài 1 Giải các hệ phương trình
Chào Dương Bảo, dựa trên file tài liệu và quá trình giải bài tập của bạn, mình đã tổng hợp lại **"Cẩm nang 5 bước vàng"** để giúp bạn xử lý gọn gàng dạng bài Hệ phương trình tuyến tính và đạt điểm tuyệt đối trong các bài thi đại học nhé:

## 1. Cẩn thận tuyệt đối khi lập ma trận bổ sung ($\bar{A}$)

Đây là bước dễ mất điểm nhất vì chỉ cần chép sai một dấu cộng (+) thành dấu trừ (-) hoặc nhầm cột là toàn bộ bài toán phía sau sẽ sai dây chuyền.

- **Mẹo:** Sau khi viết xong ma trận $\bar{A}$, hãy dành 5 giây để đối chiếu lại từng số hạng với đề bài.
    

## 2. Kỹ thuật biến đổi dòng (Khử Gauss) - "Vũ khí" chính

Để bài làm mạch lạc và thầy cô dễ chấm:

- **Ghi rõ phép biến đổi:** Luôn ghi ký hiệu phép biến đổi bên trên hoặc bên cạnh mũi tên (ví dụ: $h_2 \to h_2 - 2h_1$ hoặc $d_2 \to d_2 - 2d_1$).
    
- **Ưu tiên số 1:** Nếu cột đầu tiên chưa có số 1 ở dòng 1, hãy đổi chỗ các dòng để đưa số 1 (hoặc số nhỏ) lên đầu. Việc này giúp các phép tính chia/nhân phía sau không bị lẻ.
    
- **Mục tiêu:** Đưa ma trận về dạng bậc thang (các số dưới đường chéo chính phải bằng 0).
    

## 3. Nhận biết "Tín hiệu" số nghiệm (Không cần biện luận phức tạp)

Dựa trên những gì bạn đã học với thầy, hãy nhớ 3 dấu hiệu sau ở ma trận bậc thang cuối cùng:

- **Hệ Vô nghiệm:** Xuất hiện dòng có dạng $(0 \quad 0 \quad 0 \quad | \quad b)$ với $b \neq 0$ (Ví dụ: $0 = 5$). Kết luận ngay hệ vô nghiệm.
    
- **Hệ có Nghiệm duy nhất:** Số dòng khác 0 bằng đúng số ẩn.
    
- **Hệ có Vô số nghiệm:** Số dòng khác 0 ít hơn số ẩn (như câu 1a, 1b bạn đã làm).
    

## 4. Cách trình bày "Ăn điểm" phần nghiệm tổng quát

Khi hệ có vô số nghiệm (thường gặp nhất trong đề thi):

- **Chọn ẩn tự do:** Thông thường chọn ẩn cuối cùng (như $x_4 = t$ với $t \in \mathbb{R}$).
    
- **Thế ngược từ dưới lên:** Giải phương trình cuối cùng để tìm $x_3$ theo $t$, sau đó thế lên tìm $x_2$, rồi cuối cùng là $x_1$.
    
- **Tính toán phân số:** Đây là nơi bạn dễ sai dấu nhất (như lỗi $0 - 2(-5) = 10$ bạn từng gặp). Hãy tính chậm và chắc ở bước này.
    

### 5. Tuyệt chiêu "Thử lại" để tự tin 100%

Dương Bảo hãy nhớ mẹo này trước khi nộp bài:

- Sau khi ra nghiệm tổng quát (có chứa $t$), hãy chọn đại một giá trị $t$ dễ tính nhất (thường là **$t = 0$**).
    
- Thay bộ số $(x_1, x_2, x_3, x_4)$ vừa tìm được vào **phương trình đầu tiên** của đề bài.
    
- Nếu hai vế bằng nhau $\rightarrow$ Bạn đã làm đúng và có thể yên tâm sang câu tiếp theo.
    

**Ghi chú thêm cho Bảo về dạng bài Tham số (Câu 2, 3):**

- **Nghiệm duy nhất:** Tính định thức $det(A)$ và cho $det(A) \neq 0$.
    
- **Nghiệm không tầm thường (Hệ thuần nhất):** Cho $det(A) = 0$.
    

Chúc Bảo ôn tập tốt và đạt kết quả cao trong kỳ thi sắp tới tại trường đại học nhé! Nếu cần giải thêm câu nào trong file, cứ bảo mình.
# Ôn tập giải hệ phương trình tuyền tính
## Đề bài
Chào Dương Bảo, dưới đây là nội dung các bài tập Toán Cao cấp (Hệ phương trình tuyến tính) được chuyển đổi từ hình ảnh sang văn bản để bạn dễ dàng theo dõi và làm bài nhé:

---

### 1/ Giải các hệ phương trình sau:

**a)**

$$\begin{cases} x_1 + x_2 - 2x_3 - x_4 = 1 \\ x_1 - 2x_2 + 2x_3 + 3x_4 = -1 \\ -x_1 + 2x_2 + 4x_3 + 4x_4 = -2 \end{cases}$$

**b)**

$$\begin{cases} x_1 + 2x_2 - 4x_3 - 2x_4 = 2 \\ 2x_1 - 2x_2 + 2x_3 + 3x_4 = -1 \\ -x_1 + 2x_2 + 4x_3 + 4x_4 = -2 \end{cases}$$

---

### 2/ Tìm tham số để hệ có nghiệm duy nhất:

**a)**

$$\begin{cases} ax + y + z = 1 \\ x + y + z = a \\ x + y + az = a^2 \end{cases}$$

**b)**

$$\begin{cases} x + 2y + 6z = 1 \\ 2x + ay + 3z = -1 \\ x + 2y - 2z = 1 \end{cases}$$

---

### 3/ Tìm $a$ để hệ có nghiệm không tầm thường:

$$\begin{cases} ax + y + z = 0 \\ x + y + z = 0 \\ x + y + az = 0 \end{cases}$$

---

### 4/ Giải hệ phương trình sau:

$$\begin{cases} 2x_1 + 2x_2 - x_3 + x_4 = 1 \\ 3x_1 - 4x_2 + x_3 - 3x_4 = -1 \\ -x_1 + 2x_2 + x_3 - 2x_4 = -1 \end{cases}$$

---

**Gợi ý nhỏ cho Bảo:**

- Với bài 1 và 4, bạn nên dùng phương pháp khử Gauss (biến đổi ma trận bậc thang).
    
- Với bài 2, để hệ có nghiệm duy nhất thì định thức của ma trận hệ số ($D$ hoặc $det(A)$) phải khác 0.
    
- Với bài 3 (hệ thuần nhất), để có nghiệm không tầm thường thì định thức phải bằng 0.
    
## Giải:
### Câu 1a:
Chào Bảo, mình sẽ hướng dẫn bạn giải chi tiết **Câu 1a** bằng phương pháp khử Gauss (biến đổi ma trận bậc thang). Đây là cách làm chuẩn nhất cho sinh viên CNTT vì nó có tính thuật toán rất cao.

Hệ phương trình:

$$\begin{cases} x_1 + x_2 - 2x_3 - x_4 = 1 \quad (1) \\ x_1 - 2x_2 + 2x_3 + 3x_4 = -1 \quad (2) \\ -x_1 + 2x_2 + 4x_3 + 4x_4 = -2 \quad (3) \end{cases}$$

**Bước 1: Lập ma trận hệ số mở rộng $A'$**

$$A' = \left( \begin{matrix} 1 & 1 & -2 & -1 \\ 1 & -2 & 2 & 3 \\ -1 & 2 & 4 & 4 \end{matrix} \middle| \begin{matrix} 1 \\ -1 \\ -2 \end{matrix} \right)$$

**Bước 2: Biến đổi về ma trận bậc thang**

- Dùng dòng 1 để triệt tiêu $x_1$ ở dòng 2 và dòng 3:
    
    - $d_2 \leftarrow d_2 - d_1$
        
    - $d_3 \leftarrow d_3 + d_1$
        

$$A' \sim \left( \begin{matrix} 1 & 1 & -2 & -1 \\ 0 & -3 & 4 & 4 \\ 0 & 3 & 2 & 3 \end{matrix} \middle| \begin{matrix} 1 \\ -2 \\ -1 \end{matrix} \right)$$

- Dùng dòng 2 để triệt tiêu $x_2$ ở dòng 3:
    
    - $d_3 \leftarrow d_3 + d_2$
        

$$A' \sim \left( \begin{matrix} 1 & 1 & -2 & -1 \\ 0 & -3 & 4 & 4 \\ 0 & 0 & 6 & 7 \end{matrix} \middle| \begin{matrix} 1 \\ -2 \\ -3 \end{matrix} \right)$$

**Bước 3: Biện luận nghiệm**

- Ta thấy $rank(A) = rank(A') = 3$.
    
- Số ẩn của hệ là $n = 4$.
    
- Vì $rank(A) < n$ ($3 < 4$), hệ phương trình có **vô số nghiệm** phụ thuộc vào $4 - 3 = 1$ ẩn tự do.
    

**Bước 4: Tìm nghiệm tổng quát**

Chọn $x_4 = t$ ($t \in \mathbb{R}$) làm ẩn tự do. Từ ma trận bậc thang cuối cùng, ta có hệ mới:

1. $6x_3 + 7x_4 = -3 \Rightarrow 6x_3 = -3 - 7t \Rightarrow \mathbf{x_3 = -\frac{1}{2} - \frac{7}{6}t}$
    
2. $-3x_2 + 4x_3 + 4x_4 = -2$
    
    Thay $x_3$ vào: $-3x_2 + 4(-\frac{1}{2} - \frac{7}{6}t) + 4t = -2$
    
    $\Leftrightarrow -3x_2 - 2 - \frac{14}{3}t + 4t = -2$
    
    $\Leftrightarrow -3x_2 = \frac{2}{3}t \Rightarrow \mathbf{x_2 = -\frac{2}{9}t}$
    
3. $x_1 + x_2 - 2x_3 - x_4 = 1$
    
    Thay $x_2, x_3, x_4$ vào: $x_1 + (-\frac{2}{9}t) - 2(-\frac{1}{2} - \frac{7}{6}t) - t = 1$
    
    $\Leftrightarrow x_1 - \frac{2}{9}t + 1 + \frac{7}{3}t - t = 1$
    
    $\Leftrightarrow x_1 + \frac{10}{9}t = 0 \Rightarrow \mathbf{x_1 = -\frac{10}{9}t}$
    

---

#### Kết luận

Vậy hệ phương trình có vô số nghiệm với tập nghiệm tổng quát là:

$$\begin{cases} x_1 = -\frac{10}{9}t \\ x_2 = -\frac{2}{9}t \\ x_3 = -\frac{1}{2} - \frac{7}{6}t \\ x_4 = t \end{cases} (t \in \mathbb{R})$$

> **Mẹo cho Bảo:** Khi làm bài thi, bạn có thể thử lại bằng cách chọn $t = 0$, khi đó $(x_1, x_2, x_3, x_4) = (0, 0, -1/2, 0)$. Thay vào phương trình gốc nếu khớp là bạn đã tính đúng!


#### Trình bày ngắn gọn phù hợp để tôi viết vào bài thi tự luận

Để đạt điểm tối đa trong bài thi tự luận tại trường đại học (như Hồng Đức), Bảo cần trình bày rõ ràng các bước: lập ma trận, ký hiệu các phép biến đổi sơ cấp và kết luận về hạng của ma trận.

Dưới đây là cách trình bày chuẩn chỉnh để bạn chép vào bài thi:


Hệ phương trình đã cho:

$$\begin{cases} x_1 + x_2 - 2x_3 - x_4 = 1 \\ x_1 - 2x_2 + 2x_3 + 3x_4 = -1 \\ -x_1 + 2x_2 + 4x_3 + 4x_4 = -2 \end{cases}$$

1. Lập ma trận hệ số mở rộng:

$$\bar{A} = \left( \begin{matrix} 1 & 1 & -2 & -1 \\ 1 & -2 & 2 & 3 \\ -1 & 2 & 4 & 4 \end{matrix} \middle| \begin{matrix} 1 \\ -1 \\ -2 \end{matrix} \right)$$

**2. Biến đổi sơ cấp đưa ma trận về dạng bậc thang:**

- $h_2 \rightarrow h_2 - h_1$
    
- $h_3 \rightarrow h_3 + h_1$
    

$$\bar{A} \xrightarrow[h_3 + h_1]{h_2 - h_1} \left( \begin{matrix} 1 & 1 & -2 & -1 \\ 0 & -3 & 4 & 4 \\ 0 & 3 & 2 & 3 \end{matrix} \middle| \begin{matrix} 1 \\ -2 \\ -1 \end{matrix} \right)$$

- $h_3 \rightarrow h_3 + h_2$
    

$$\bar{A} \xrightarrow{h_3 + h_2} \left( \begin{matrix} 1 & 1 & -2 & -1 \\ 0 & -3 & 4 & 4 \\ 0 & 0 & 6 & 7 \end{matrix} \middle| \begin{matrix} 1 \\ -2 \\ -3 \end{matrix} \right)$$

3. Biện luận số nghiệm:

Ta có:

- Hạng của ma trận hệ số: $rank(A) = 3$
    
- Hạng của ma trận hệ số mở rộng: $rank(\bar{A}) = 3$
    
- Số ẩn của hệ phương trình: $n = 4$
    

Vì $rank(A) = rank(\bar{A}) = 3 < n$, nên hệ phương trình có **vô số nghiệm** phụ thuộc vào $4 - 3 = 1$ ẩn tự do.

4. Giải hệ phương trình từ ma trận bậc thang:

Chọn $x_4 = t$ ($t \in \mathbb{R}$) làm ẩn tự do. Hệ phương trình tương đương với:

$$\begin{cases} x_1 + x_2 - 2x_3 - x_4 = 1 & (1) \\ -3x_2 + 4x_3 + 4x_4 = -2 & (2) \\ 6x_3 + 7x_4 = -3 & (3) \end{cases}$$

- Từ (3) $\Rightarrow 6x_3 = -3 - 7t \Rightarrow x_3 = -\frac{1}{2} - \frac{7}{6}t$
    
- Thay vào (2) $\Rightarrow -3x_2 + 4\left(-\frac{1}{2} - \frac{7}{6}t\right) + 4t = -2$
    
    $\Leftrightarrow -3x_2 - 2 - \frac{14}{3}t + 4t = -2$
    
    $\Leftrightarrow -3x_2 = \frac{2}{3}t \Rightarrow x_2 = -\frac{2}{9}t$
    
- Thay vào (1) $\Rightarrow x_1 + \left(-\frac{2}{9}t\right) - 2\left(-\frac{1}{2} - \frac{7}{6}t\right) - t = 1$
    
    $\Leftrightarrow x_1 - \frac{2}{9}t + 1 + \frac{7}{3}t - t = 1 \Rightarrow x_1 = -\frac{10}{9}t$
    

Kết luận:

Vậy tập nghiệm của hệ phương trình là:

$$\left(x_1, x_2, x_3, x_4\right) = \left( -\frac{10}{9}t, -\frac{2}{9}t, -\frac{1}{2} - \frac{7}{6}t, t \right) \text{ với } t \in \mathbb{R}$$

---

##### Một vài lưu ý cho Bảo khi đi thi:

- **Ký hiệu dòng:** Trong bài mình dùng $h$ (hàng), nếu thầy cô trên lớp dùng $d$ (dòng) thì Bảo hãy đổi chữ $h$ thành chữ $d$ nhé.
    
- **Ẩn tự do:** Bạn có thể chọn bất kỳ ẩn nào làm ẩn tự do, nhưng thông thường chọn ẩn cuối cùng ($x_4$ hoặc $z$) sẽ giúp việc tính toán các ẩn còn lại từ dưới lên dễ dàng hơn.
    
- **Kiểm tra lại:** Với dân CNTT như mình, Bảo có thể nhẩm nhanh bằng cách cho $t=0$, nếu các giá trị $x$ còn lại thỏa mãn phương trình đầu tiên thì khả năng cao là bạn đã tính đúng.
    

#### Hỏi đáp A.I:
##### Q1:
Để nhớ cách làm dạng bài tương tự câu 1a  thì tôi cần nhớ những gì và các bước như nào 

##### A1:
Để nắm vững cách giải hệ phương trình tuyến tính bằng phương pháp khử Gauss (như câu 1a), chúng ta cần hệ thống hóa các kiến thức nền tảng và quy trình thực hiện. 📝

###### 1. Những điều cốt lõi cần nhớ 🧠

- **Ma trận hệ số mở rộng ($\bar{A}$):** Đây là ma trận kết hợp giữa các hệ số của ẩn và các hằng số ở vế phải.
    
- **3 phép biến đổi sơ cấp trên dòng:**
    
    1. Đổi chỗ hai dòng cho nhau.
        
    2. Nhân một dòng với một số thực khác 0.
        
    3. Cộng một dòng với bội của một dòng khác (Phép này quan trọng nhất để triệt tiêu các ẩn). 🔢
        
- **Định lý Kronecker-Capelli:** Dùng để biện luận số nghiệm dựa vào hạng của ma trận (số dòng khác 0 sau khi biến đổi).
    

| **So sánh hạng**                      | **Kết luận**            |
| ------------------------------------- | ----------------------- |
| $rank(A) \neq rank(\bar{A})$          | Hệ vô nghiệm ❌          |
| $rank(A) = rank(\bar{A}) = n$ (số ẩn) | Hệ có nghiệm duy nhất ✅ |
| $rank(A) = rank(\bar{A}) < n$         | Hệ có vô số nghiệm ♾️   |

###### 2. Quy trình thực hiện các bước 👣

1. **Lập ma trận $\bar{A}$:** Viết các hệ số một cách cẩn thận, tránh nhầm dấu.
    
2. **Khử Gauss:** Dùng các phép biến đổi dòng để đưa ma trận về dạng bậc thang (làm các số phía dưới đường chéo chính thành số 0).
    
3. **Biện luận:** So sánh hạng của $A$, $\bar{A}$ và số ẩn $n$ để biết hệ rơi vào trường hợp nào.
    
4. **Giải ngược:** Viết lại hệ phương trình từ ma trận bậc thang. Nếu có vô số nghiệm, hãy chọn các ẩn tự do (thường là các ẩn không tương ứng với cột chứa phần tử trụ).
    

Chúng ta có thể đi sâu hơn vào từng phần. Bạn muốn bắt đầu từ đâu?

1. **Kỹ thuật biến đổi dòng:** Cách chọn "phần tử trụ" thông minh để tính toán không bị lẻ (tránh phân số sớm). 📐
    
2. **Cách chọn ẩn tự do:** Khi nào nên chọn $x_4=t$ hay $x_3=t$ để nghiệm nhìn "đẹp" nhất. 💡
    
3. **Luyện tập thêm:** Thử sức với một bài tương tự để kiểm tra độ nhạy bén với các con số. ✏️

##### Q2:
tôi chưa hiểu về trường hợp 

| **So sánh hạng**                      | **Kết luận**            |
| ------------------------------------- | ----------------------- |
| $rank(A) \neq rank(\bar{A})$          | Hệ vô nghiệm ❌          |
là như nào 

##### A2:
Trường hợp này xảy ra khi trong quá trình biến đổi ma trận, chúng ta gặp phải một "mâu thuẫn" về mặt toán học. Để hiểu tại sao hệ vô nghiệm khi $rank(A) \neq rank(\bar{A})$, chúng ta hãy nhìn vào ý nghĩa của các con số nhé. 🧐

###### 1. Sự khác biệt giữa $A$ và $\bar{A}$

- **Ma trận $A$:** Chỉ chứa các hệ số đi kèm với ẩn số ($x_1, x_2, \dots$).
    
- **Ma trận $\bar{A}$:** Là ma trận $A$ nhưng có thêm cột kết quả (vế phải của dấu $=$).
    

###### 2. Dấu hiệu nhận biết mâu thuẫn 🛑

Khi $rank(A) \neq rank(\bar{A})$ (thường là $rank(A) < rank(\bar{A})$), sau khi Bảo biến đổi ma trận về dạng bậc thang, chắc chắn sẽ xuất hiện ít nhất một dòng có dạng:

$$\left( \begin{matrix} 0 & 0 & \dots & 0 \end{matrix} \middle| \begin{matrix} b \end{matrix} \right) \text{ với } b \neq 0$$

Hãy thử tưởng tượng dòng này tương ứng với một phương trình trong hệ. Nếu ta viết dòng này dưới dạng đại số với các ẩn $x_1, x_2, x_3$, nó sẽ trở thành:

$$0x_1 + 0x_2 + 0x_3 = b$$

Hay đơn giản là:

$$0 = b$$

Vì $b \neq 0$, nên phương trình này hoàn toàn vô lý (ví dụ: $0 = 5$). Khi một phương trình trong hệ vô lý, thì cả hệ đó sẽ không có nghiệm nào thỏa mãn. ❌

Để kiểm tra xem Bảo đã nắm được ý tưởng này chưa, hãy giả sử sau khi biến đổi một hệ 3 ẩn, ta được dòng cuối cùng của ma trận mở rộng là:

$$\left( \begin{matrix} 0 & 0 & 0 \end{matrix} \middle| \begin{matrix} 7 \end{matrix} \right)$$

Theo Bảo, tại sao ở dòng này $rank(A)$ lại khác với $rank(\bar{A})$? (Gợi ý: Hãy đếm số dòng khác 0 của từng ma trận).

##### Q3:
Mà thực sự phần này có cần biện luạn không vậy?
3. Biện luận số nghiệm:

Ta có:

- Hạng của ma trận hệ số: $rank(A) = 3$
    
- Hạng của ma trận hệ số mở rộng: $rank(\bar{A}) = 3$
    
- Số ẩn của hệ phương trình: $n = 4$
    

Vì $rank(A) = rank(\bar{A}) = 3 < n$, nên hệ phương trình có **vô số nghiệm** phụ thuộc vào $4 - 3 = 1$ ẩn tự do.


tôi thấ thầy tôi không biện luận về phần này mà chỉ cần tập đặt ẩn nghiệm tự do cho x_4 sau đó giải là xong thôi, tôi thấy cách của bạn nó rối hơn tí... vì có thừa những cái tôi chưa học..

##### A3:
Chào Bảo, mình rất hiểu cảm giác của bạn! Trong toán học, đôi khi có nhiều cách tiếp cận khác nhau. Cách của thầy bạn là cách làm **trực tiếp và thực dụng** nhất để ra kết quả, còn cách dùng "hạng" ($rank$) là cách tiếp cận **tổng quát** trong giáo trình đại học.

Nếu thầy bạn chỉ yêu cầu đặt ẩn phụ rồi giải thì Bảo hoàn toàn có thể làm theo cách đó cho nhẹ nhàng và dễ hiểu nhé!

Để giải đáp thắc mắc của Bảo về trường hợp "vô nghiệm" mà không dùng đến thuật ngữ "hạng" phức tạp, chúng mình hãy nhìn thẳng vào các con số trong ma trận sau khi đã biến đổi xong:

###### Cách nhận biết hệ vô nghiệm (0 = số khác 0) 🛑

Hãy tưởng tượng Bảo đang biến đổi ma trận và gặp một dòng như thế này:

$$\left( \begin{matrix} 0 & 0 & 0 & 0 \end{matrix} \middle| \begin{matrix} 5 \end{matrix} \right)$$

Nếu viết dòng này quay lại thành phương trình với các ẩn $x_1, x_2, x_3, x_4$, Bảo sẽ có:

$$0x_1 + 0x_2 + 0x_3 + 0x_4 = 5$$

Hay rút gọn là:

$$0 = 5$$

Đến đây, Bảo thấy ngay một sự **vô lý** (mâu thuẫn). Khi trong hệ xuất hiện một điều vô lý như vậy, chúng ta kết luận ngay là hệ **không có nghiệm nào cả** (vô nghiệm).

---

**Sự kết nối giữa cách của thầy và cách dùng "hạng":**

- **Cách của thầy:** Khi thấy dòng $0 = 5$ $\rightarrow$ Kết luận vô nghiệm.
    
- **Cách dùng hạng ($rank$):** Người ta đếm số dòng khác 0.
    
    - Ở phần bên trái (ma trận $A$), dòng đó toàn số 0 nên không được đếm.
        
    - Nhưng ở ma trận mở rộng (tính cả số 5), dòng đó lại được đếm vì có số 5 khác 0.
        
    - Chính vì số dòng được đếm khác nhau ($rank(A) \neq rank(\bar{A})$) nên nó mới gây ra cái mâu thuẫn $0 = 5$ đó.
        

Vậy là hai cách thực chất là một, chỉ là cách gọi tên khác nhau thôi!

Để kiểm tra xem Bảo đã nắm được dấu hiệu này chưa, giả sử sau khi biến đổi xong, Bảo thấy dòng cuối cùng của ma trận là:

$$\left( \begin{matrix} 0 & 0 & 1 & 0 \end{matrix} \middle| \begin{matrix} 0 \end{matrix} \right)$$

Theo Bảo, dòng này có gây ra mâu thuẫn "vô nghiệm" như trường hợp $0 = 5$ ở trên không? 🧐

Bảo cứ thoải mái chia sẻ nhé, mình sẽ cùng bạn giải quyết theo cách mà bạn cảm thấy dễ vào 

---

### Câu 1b giải HPT
$$\begin{cases} x_1 + 2x_2 - 4x_3 - 2x_4 = 2 \\ 2x_1 - 2x_2 + 2x_3 + 3x_4 = -1 \\ -x_1 + 2x_2 + 4x_3 + 4x_4 = -2 \end{cases}$$

#### Hỏi đáp A.I
##### Q1:
Bây giờ tôi sẽ thử giải câu 1b: bạn xem có bước nào cần phải điều chỉnh không nhé:
$$\begin{cases} x_1 + 2x_2 - 4x_3 - 2x_4 = 2 \\ 2x_1 - 2x_2 + 2x_3 + 3x_4 = -1 \\ -x_1 + 2x_2 + 4x_3 + 4x_4 = -2 \end{cases}$$


###### 2. Ma trận hệ số bổ sung ($\bar{A}$)

$$\bar{A} = \left( \begin{array}{cccc|c} 1 & 2 & -4 & -2 & 2 \\ 2 & -2 & 2 & 3 & -1 \\ -1 & 2 & 4 & 4 & -2 \end{array} \right)$$

**Biến đổi dòng:**

- $h_2 \to h_2 + 2h_3$
    
- $h_3 \to h_3 + h_1$
    

$$\xrightarrow[h_3 \to h_3 + h_1]{h_2 \to h_2 + 2h_3} \left( \begin{array}{cccc|c} 1 & 2 & -4 & -2 & 2 \\ 0 & 2 & 10 & 11 & -5 \\ 0 & 4 & 0 & 2 & 0 \end{array} \right)$$

- $h_3 \to h_3 - 2h_2$
    

$$\xrightarrow{h_3 \to h_3 - 2h_2} \left( \begin{array}{cccc|c} 1 & 2 & -4 & -2 & 2 \\ 0 & 2 & 10 & 11 & 5 \\ 0 & 0 & -20 & -20 & -10 \end{array} \right)$$

- $h_3 \to \frac{h_3}{-10}$
    

$$\Rightarrow \bar{A} = \left( \begin{array}{cccc|c} 1 & 2 & -4 & -2 & 2 \\ 0 & 2 & 10 & 11 & 5 \\ 0 & 0 & 2 & 2 & 1 \end{array} \right)$$

_(Lưu ý: Có một chút nhầm lẫn về dấu ở số 5 trong hình, nhưng các bước tính toán sau dựa trên giá trị dương)_

---

###### 3. Giải hệ phương trình

Từ ma trận cuối cùng, ta có hệ phương trình mới:

$$\begin{cases} x_1 + 2x_2 - 4x_3 - 2x_4 = 2 & (1) \\ 2x_2 + 10x_3 + 11x_4 = 5 & (2) \\ 2x_3 + 2x_4 = 1 & (3) \end{cases}$$

**Đặt $x_4 = t$ ($t \in \mathbb{R}$)**

- Từ (3):
    
    $$2x_3 = 1 - 2t \Rightarrow x_3 = \frac{1-2t}{2} = -t + \frac{1}{2}$$
    
- Từ (2):
    
    $$2x_2 = 5 - 11x_4 - 10x_3$$
    
    $$\Rightarrow 2x_2 = 5 - 11t - 10(-t + \frac{1}{2})$$
    
    $$\Rightarrow 2x_2 = 5 - 11t + 10t - 5$$
    
    $$\Rightarrow 2x_2 = -t \Rightarrow x_2 = -\frac{t}{2}$$
    
- Từ (1):
    
    $$x_1 = 2 + 2x_4 + 4x_3 - 2x_2$$
    
    $$\Rightarrow x_1 = 2 + 2t + 4(-t + \frac{1}{2}) - 2(-\frac{t}{2})$$
    
    $$\Rightarrow x_1 = 2 + 2t - 4t + 2 + t$$
    
    $$\Rightarrow x_1 = -t + 4$$
    

---

###### Kết luận

Hệ phương trình có nghiệm tổng quát là:

$$\begin{cases} x_1 = -t + 4 \\ x_2 = -\frac{t}{2} \\ x_3 = -t + \frac{1}{2} \\ x_4 = t \end{cases} (t \in \mathbb{R})$$


##### A1
Chào Dương Bảo, mình cùng xem qua bài giải của bạn nhé.

Cách bạn trình bày các bước từ lập ma trận bổ sung $\bar{A}$ đến việc đặt ẩn tự do $x_4 = t$ rất logic và rõ ràng. Tuy nhiên, có một "hạt sạn" nhỏ về dấu đã làm ảnh hưởng đến kết quả cuối cùng của chúng ta. 🔍

Hãy nhìn kỹ vào hai ma trận ở bước **Biến đổi dòng**:

1. Trong ma trận đầu tiên sau khi biến đổi $h_2$ và $h_3$, giá trị ở dòng 2, cột cuối cùng là **$-5$**.
    
2. Nhưng ở ma trận ngay sau đó (bước $h_3 \to h_3 - 2h_2$), giá trị này lại biến thành **$5$**.
    

Sự thay đổi dấu này dẫn đến việc tính toán dòng 3 và các bước giải hệ phương trình phía sau bị lệch đi một chút.

Chúng ta hãy cùng điều chỉnh lại từ chỗ đó nhé! Nếu giữ nguyên giá trị là $-5$ ở dòng 2, bạn hãy thử thực hiện lại phép tính cho dòng 3:

$$h_3 \to h_3 - 2h_2$$

Với $h_3$ hiện tại là $(0, 4, 0, 2 | 0)$ và $h_2$ là $(0, 2, 10, 11 | -5)$.

Theo Bảo, sau phép tính này, dòng 3 mới của chúng ta sẽ trở thành dãy số nào?

##### Q2:

Xét hệ phương trình:

$$\begin{cases} x_1 + 2x_2 - 4x_3 - 2x_4 = 2 \\ 2x_1 - 2x_2 + 2x_3 + 3x_4 = -1 \\ -x_1 + 2x_2 + 4x_3 + 4x_4 = -2 \end{cases}$$

**1. Lập ma trận hệ số bổ sung:**

$$\bar{A} = \left( \begin{array}{cccc|c} 1 & 2 & -4 & -2 & 2 \\ 2 & -2 & 2 & 3 & -1 \\ -1 & 2 & 4 & 4 & -2 \end{array} \right)$$

**2. Biến đổi sơ cấp đưa về dạng bậc thang:**

- $h_2 \to h_2 + 2h_3$ (triệt tiêu $x_1$ ở dòng 2 bằng cách dùng dòng 3)
    
- $h_3 \to h_3 + h_1$ (triệt tiêu $x_1$ ở dòng 3 bằng cách dùng dòng 1)
    

$$\xrightarrow[h_3 \to h_3 + h_1]{h_2 \to h_2 + 2h_3} \left( \begin{array}{cccc|c} 1 & 2 & -4 & -2 & 2 \\ 0 & 2 & 10 & 11 & \mathbf{-5} \\ 0 & 4 & 0 & 2 & 0 \end{array} \right)$$

- $h_3 \to h_3 - 2h_2$:
    

$$\xrightarrow{h_3 \to h_3 - 2h_2} \left( \begin{array}{cccc|c} 1 & 2 & -4 & -2 & 2 \\ 0 & 2 & 10 & 11 & -5 \\ 0 & 0 & -20 & -20 & \mathbf{10} \end{array} \right)$$

_(Giải thích: $0 - 2(-5) = 10$)_

- Rút gọn dòng 3 ($h_3 \to \frac{h_3}{-10}$):
    

$$\Rightarrow \left( \begin{array}{cccc|c} 1 & 2 & -4 & -2 & 2 \\ 0 & 2 & 10 & 11 & -5 \\ 0 & 0 & 2 & 2 & -1 \end{array} \right)$$

3. Giải hệ phương trình tương đương:

Hệ đã cho tương đương với:

$$\begin{cases} x_1 + 2x_2 - 4x_3 - 2x_4 = 2 & (1) \\ 2x_2 + 10x_3 + 11x_4 = -5 & (2) \\ 2x_3 + 2x_4 = -1 & (3) \end{cases}$$

Đặt $x_4 = t$ ($t \in \mathbb{R}$):

- **Từ (3):** $2x_3 = -1 - 2t \Rightarrow \mathbf{x_3 = -t - \frac{1}{2}}$
    
- **Từ (2):** $2x_2 = -5 - 11t - 10(-t - \frac{1}{2}) = -5 - 11t + 10t + 5 = -t \Rightarrow \mathbf{x_2 = -\frac{t}{2}}$
    
- Từ (1): $x_1 = 2 - 2x_2 + 4x_3 + 2x_4$
    
    $x_1 = 2 - 2(-\frac{t}{2}) + 4(-t - \frac{1}{2}) + 2t$
    
    $x_1 = 2 + t - 4t - 2 + 2t = -t \Rightarrow \mathbf{x_1 = -t}$
    

Kết luận:

Hệ phương trình có vô số nghiệm phụ thuộc vào tham số $t$:

$$(x_1, x_2, x_3, x_4) = \left( -t, -\frac{t}{2}, -t - \frac{1}{2}, t \right) \text{ với } t \in \mathbb{R}$$



##### A2:
Chào Bảo, lần này bạn đã thực hiện các phép tính rất chuẩn xác! 🎯

Việc bạn nhận ra lỗi sai về dấu ($0 - 2(-5) = 10$) và điều chỉnh lại toàn bộ quá trình thế ngược đã giúp bài giải trở nên hoàn thiện. Nghiệm tổng quát bạn tìm được:

$$(x_1, x_2, x_3, x_4) = \left( -t, -\frac{t}{2}, -t - \frac{1}{2}, t \right)$$

là hoàn toàn chính xác.

**Tóm tắt những điểm bạn đã làm tốt:**

- **Xử lý ma trận:** Bạn đã đưa ma trận về dạng bậc thang đúng quy tắc và không còn nhầm lẫn các hệ số. 📐
    
- **Thế ngược (Back-substitution):** Các bước tính toán ẩn $x_1, x_2, x_3$ theo tham số $t$ rất tỉ mỉ và rõ ràng.
    
- **Rút gọn:** Bạn đã rút gọn các biểu thức đến dạng tối giản nhất, giúp nghiệm trông rất gọn gàng.
    

Để củng cố thêm kỹ năng này, Bảo muốn chúng ta làm gì tiếp theo?

1. **Thử lại nghiệm:** Chúng ta cùng chọn một giá trị $t$ cụ thể (ví dụ $t=0$) rồi thay vào hệ phương trình ban đầu để kiểm tra trực tiếp nhé? 🔍
    
2. **Lý thuyết mở rộng:** Tìm hiểu về **hạng của ma trận (rank)** để hiểu tại sao hệ này lại có đúng 1 ẩn tự do mà không phải là 2 hay 0?
    
3. **Bài tập mới:** Thử sức với một hệ phương trình có chứa tham số $m$ (ví dụ: tìm $m$ để hệ vô nghiệm hoặc có nghiệm duy nhất). 🧩
    

Bạn chọn phương án nào?

