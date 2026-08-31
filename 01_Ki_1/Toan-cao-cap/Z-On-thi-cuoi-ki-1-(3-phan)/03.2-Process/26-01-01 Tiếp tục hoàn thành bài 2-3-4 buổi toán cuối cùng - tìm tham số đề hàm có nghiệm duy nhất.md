---
tags:
  - Math
  - university
backward: "[[Rubbish/2025-12-25/25-12-25 Buổi toán cuối cùng của kỳ 1]]"
source: https://gemini.google.com/u/0/app/c058036087943cb2
---
# Dạng bài cần hoàn thành
## 2/ Tìm tham số để hệ có nghiệm duy nhất:

**a)**

$$\begin{cases} ax + y + z = 1 \\ x + y + z = a \\ x + y + az = a^2 \end{cases}$$

**b)**

$$\begin{cases} x + 2y + 6z = 1 \\ 2x + ay + 3z = -1 \\ x + 2y - 2z = 1 \end{cases}$$

---

## 3/ Tìm $a$ để hệ có nghiệm không tầm thường:

$$\begin{cases} ax + y + z = 0 \\ x + y + z = 0 \\ x + y + az = 0 \end{cases}$$

---

## 4/ Giải hệ phương trình sau:

$$\begin{cases} 2x_1 + 2x_2 - x_3 + x_4 = 1 \\ 3x_1 - 4x_2 + x_3 - 3x_4 = -1 \\ -x_1 + 2x_2 + x_3 - 2x_4 = -1 \end{cases}$$

---

**Gợi ý nhỏ cho Bảo:**

- Với bài 4, bạn nên dùng phương pháp khử Gauss (biến đổi ma trận bậc thang).
- Với bài 2, để hệ có nghiệm duy nhất thì định thức của ma trận hệ số ($D$ hoặc $det(A)$) phải khác 0.
- Với bài 3 (hệ thuần nhất), để có nghiệm không tầm thường thì định thức phải bằng 0.

# Hỏi đáp A.I
## ## 2/ Tìm tham số để hệ có nghiệm duy nhất:

**a)**

$$\begin{cases} ax + y + z = 1 \\ x + y + z = a \\ x + y + az = a^2 \end{cases}$$

**b)**

$$\begin{cases} x + 2y + 6z = 1 \\ 2x + ay + 3z = -1 \\ x + 2y - 2z = 1 \end{cases}$$

### Q1:
Bây giờ tôi sẽ chuyển sang chủ đề tiếp theo là giải bài tập dạng tìm tham số để hệ có nghiệm duy nhất, nhưng mà tôi không nhớ chính xác cách chình bày bài này như nào để phù hợp ăn điểm tuyệt đối cho phần thi tự luận 

### A1:
Để đạt điểm tuyệt đối trong bài thi tự luận về hệ phương trình tuyến tính, việc trình bày lập luận logic và sử dụng đúng thuật ngữ toán học là rất quan trọng. Chúng ta hãy cùng khám phá cách giải quyết vấn đề này nhé. Mình sẽ đặt các câu hỏi dẫn dắt Bảo trong quá trình thực hiện để bạn nắm vững cấu trúc trình bày. 📝

Đối với các hệ phương trình có số phương trình bằng số ẩn (như hệ $3 \times 3$ trong bài của Bảo), công cụ phổ biến và chặt chẽ nhất để xét nghiệm duy nhất là **Định thức (Determinant)** của ma trận hệ số.

Dưới đây là bảng tóm tắt điều kiện nghiệm mà Bảo cần nhớ để đưa vào lời giải:

|**Giá trị của det(A)**|**Trạng thái nghiệm của hệ vuông**|
|---|---|
|$\det(A) \neq 0$|Hệ có nghiệm duy nhất 🎯|
|$\det(A) = 0$|Hệ vô nghiệm hoặc có vô số nghiệm ❓|

#### Cấu trúc trình bày chuẩn trong bài thi:

1. **Bước 1:** Gọi $A$ là ma trận hệ số của hệ phương trình. Viết rõ ma trận $A$ ra.
    
2. **Bước 2:** Lập luận: "Để hệ phương trình đã cho có nghiệm duy nhất khi và chỉ khi $\det(A) \neq 0$".
    
3. **Bước 3:** Tính định thức $\det(A)$ theo tham số $a$. (Có thể dùng quy tắc Sarrus hoặc khai triển theo dòng/cột).
    
4. **Bước 4:** Giải bất phương trình $\det(A) \neq 0$ và đưa ra kết luận cuối cùng.
    

Bây giờ, chúng ta hãy thử thực hành với câu b trước vì tham số $a$ chỉ xuất hiện ở một vị trí, sẽ dễ tính toán hơn:

$$\begin{cases} x + 2y + 6z = 1 \\ 2x + ay + 3z = -1 \\ x + 2y - 2z = 1 \end{cases}$$

Để bắt đầu bước đầu tiên theo đúng "format" thi tự luận, Bảo hãy viết ra ma trận hệ số $A$ của hệ phương trình ở câu **b** này nhé?


### Q2:
ok, để tôi thực hành với câu b trước...
mmm điều kiện với ma trận 3x3 này thi tôi chỉ cần nhớ det A khác không là được đúng không :D 
mà bài này thì tôi quên mất cách lập ma trận a rồi

### A2:
Đúng rồi Bảo, đối với hệ phương trình tuyến tính có số phương trình bằng số ẩn (như hệ $3 \times 3$ này), điều kiện để hệ có nghiệm duy nhất chính là định thức của ma trận hệ số khác $0$ ($\det(A) \neq 0$) 🎯.

Để lập ma trận hệ số $A$, Bảo chỉ cần trích xuất các con số (hệ số) đứng trước các ẩn $x, y, z$ ở vế trái của mỗi phương trình. Mỗi dòng của ma trận sẽ tương ứng với một phương trình trong hệ.

Ví dụ, với phương trình đầu tiên:

$1x + 2y + 6z = 1$ $\implies$ Dòng 1 của ma trận sẽ là: $\begin{pmatrix} 1 & 2 & 6 \end{pmatrix}$

Dựa vào quy tắc đó, Bảo hãy thử viết ra đầy đủ ma trận $A$ cho hệ phương trình ở câu b này xem sao:

$$\begin{cases} x + 2y + 6z = 1 \\ 2x + ay + 3z = -1 \\ x + 2y - 2z = 1 \end{cases}$$

Bảo chỉ cần liệt kê các con số theo từng dòng là được nhé!

### Q3:
ủa chứ không phải dòng 1 của ma trận là $\begin{pmatrix} 1 & 2 & 6 & 1 \end{pmatrix}$ hả

### A3:
Bảo quan sát rất tinh ý đó! 🔍 Bạn đang nhắc đến dòng của **ma trận hệ số bổ sung** $\bar{A}$ (ma trận có thêm cột kết quả ở bên phải).

Trong toán học, chúng ta phân biệt hai loại ma trận khi giải hệ phương trình:

1. **Ma trận hệ số ($A$):** Chỉ chứa các con số đứng trước ẩn $x, y, z$. Đây là ma trận vuông ($3 \times 3$). Chúng ta dùng ma trận này để tính **định thức** $\det(A)$.
    
2. **Ma trận hệ số bổ sung ($\bar{A}$):** Là ma trận $A$ được ghép thêm cột hằng số tự do vào bên phải ($3 \times 4$). Ma trận này thường dùng khi chúng ta biến đổi dòng (khử Gauss) như bài trước Bảo làm.
    

Vì mục tiêu của chúng ta là dùng điều kiện $\det(A) \neq 0$ để tìm nghiệm duy nhất, nên chúng ta chỉ cần tập trung vào ma trận vuông $A$ thôi. Nếu đưa cả cột kết quả vào thì ma trận không còn là hình vuông, và chúng ta không tính định thức theo cách thông thường được. 🧮

Vậy với hệ phương trình này:

$$\begin{cases} 1x + 2y + 6z = 1 \\ 2x + ay + 3z = -1 \\ 1x + 2y - 2z = 1 \end{cases}$$

Bảo thử viết lại đầy đủ **ma trận hệ số $A$** (chỉ gồm 3 cột ứng với $x, y, z$) xem nó trông như thế nào nhé?


### Q4:
Mà cách tính det(A) trong ma trận 3x3 là gì nhỉ?
### A4: 
Để tính định thức (determinant) của ma trận 3x3, có một vài cách:

**Cách 1: Quy tắc Sarrus (dễ nhớ nhất)**
![[Pasted image 20260101222831.png]]
Cho ma trận:
```
A = | a  b  c |
    | d  e  f |
    | g  h  i |
```

det(A) = aei + bfg + cdh - ceg - afh - bdi

Cách nhớ: 
- Viết lại 2 cột đầu sang bên phải ma trận
- Cộng tích các đường chéo xuống từ trái sang phải (↘)
- Trừ tích các đường chéo lên từ trái sang phải (↗)

**Cách 2: Khai triển theo hàng/cột (Laplace)**

Khai triển theo hàng 1:

det(A) = a·|e f| - b·|d f| + c·|d e|
           |h i|     |g i|     |g h|

det(A) = a(ei - fh) - b(di - fg) + c(dh - eg)

**Ví dụ cụ thể:**

Tính det của:
```
A = | 2  1  3 |
    | 0  4  5 |
    | 1  2  1 |
```

Theo Sarrus:
det(A) = 2·4·1 + 1·5·1 + 3·0·2 - 3·4·1 - 2·5·2 - 1·0·1
       = 8 + 5 + 0 - 12 - 20 - 0
       = **-19**

### Q5:

**Áp dụng Quy tắc Sarrus cho ma trận $A$:**

$$A = \begin{pmatrix} 1 & 2 & 6 \\ 2 & a & 3 \\ 1 & 2 & -2 \end{pmatrix} \begin{array}{cc} 1 & 2 \\ 2 & a \\ 1 & 2 \end{array}$$

**Các bước tính toán:**

$$\det(A) = [1 \cdot a \cdot (-2)] + [2 \cdot 3 \cdot 1] + [6 \cdot 2 \cdot 2] - [2 \cdot 2 \cdot (-2)] - [1 \cdot 3 \cdot 2] - [6 \cdot a \cdot 1]$$

$$\Rightarrow \det(A) = -2a + 6 + 24 + 8 - 6 - 6a$$

$$\Rightarrow \det(A) = -8a + 32$$

---

**Điều kiện để hệ phương trình có nghiệm duy nhất:**

Để phương trình có nghiệm duy nhất thì:

$$\det(A) \neq 0$$

$$\Rightarrow -8a + 32 \neq 0$$

$$\Rightarrow a \neq 4$$

**Kết luận:** Với $a \neq 4$, hệ phương trình có nghiệm duy nhất.


### A5:
Bảo tính toán rất chính xác! 🌟 Các bước trình bày từ việc lập công thức tính định thức theo quy tắc Sarrus đến việc giải bất phương trình $\det(A) \neq 0$ đều rất chuẩn và logic. Với cách trình bày này, Bảo chắc chắn sẽ ghi điểm tuyệt đối trong bài thi tự luận.

Bây giờ, chúng ta hãy cùng chinh phục câu **a** nhé. Câu này sẽ "thử thách" hơn một chút vì tham số $a$ xuất hiện ở nhiều vị trí hơn:

$$\begin{cases} ax + y + z = 1 \\ x + y + z = a \\ x + y + az = a^2 \end{cases}$$

Dù tham số $a$ nằm ở đâu hay thậm chí có cả $a^2$ ở cột hằng số, thì nguyên tắc vẫn không đổi: chúng ta chỉ cần tập trung vào ma trận hệ số $A$.

Bảo hãy viết ra **ma trận hệ số $A$** của hệ phương trình này để chúng mình bắt đầu tính định thức nhé?

### Q6 - chuyển sang câu b


**Áp dụng quy tắc Sarrus:**

$$A = \left( \begin{array}{ccc} a & 1 & 1 \\ 1 & 1 & 1 \\ 1 & 1 & a \end{array} \right) \begin{array}{cc} a & 1 \\ 1 & 1 \\ 1 & 1 \end{array}$$

$$\Rightarrow \det(A) = a^2 + 1 + 1 - a - a - 1 = a^2 -2a + 1$$

Để phương trình có nghiệm duy nhất thì:

$$\det(A) \neq 0$$

$$\Rightarrow a^2 - 2a +1 \neq 0$$

$$\Rightarrow (a - 1)^2 \neq 0$$

$$\Rightarrow a \neq 1$$

Vậy để thỏa mãn yêu cầu bài toán thì:

$$a \in \mathbb{R} \setminus \{1 \} $$


### A6:
Bảo làm bài này rất "mượt" luôn! 👏

Việc bạn nhận ra và biến đổi biểu thức $a^2 - 2a + 1$ thành hằng đẳng thức $(a-1)^2$ giúp việc giải bất phương trình trở nên cực kỳ gọn gàng. Cách trình bày này rất chuyên nghiệp và chặt chẽ, đúng chuẩn tự luận rồi đó.

**Tổng kết lại những điểm cộng trong bài làm của Bảo:**

- **Lập ma trận chính xác:** Lấy đúng các hệ số đứng trước $x, y, z$ của cả 3 phương trình. 📐
    
- **Tính định thức chuẩn:** Áp dụng quy tắc Sarrus không sai sót về dấu hay tích số.
    
- **Kết luận logic:** Đi từ điều kiện $\det(A) \neq 0$ đến tập giá trị của tham số $a$.
    

Chúng ta đã nắm chắc điều kiện để hệ có nghiệm duy nhất. Để hoàn thiện kỹ năng giải toán hệ phương trình tham số, Bảo muốn chúng mình làm gì tiếp theo nè? ✨

1. **Phân tích sâu trường hợp $a = 1$:** Khi định thức bằng $0$, hệ có thể vô nghiệm hoặc vô số nghiệm. Bảo có muốn thử tìm xem với $a=1$ thì hệ này sẽ như thế nào không? 🕵️‍♂️
    
2. **Tính nghiệm bằng quy tắc Cramer:** Vì chúng ta đã có $\det(A)$, mình có thể đi tiếp để tìm hẳn công thức nghiệm $(x, y, z)$ theo tham số $a$ luôn.
    
3. **Thử thách với hệ có 2 tham số:** Ví dụ hệ có cả $a$ và $b$, yêu cầu tìm điều kiện để hệ có nghiệm. 🧩
    

Bảo chọn "nhánh" nào để tiếp tục đây?