---
tags:
  - university
  - Math
forward: "[[z_Data_Media/old data note/Daily Note 2025 Sep2Dec/Toán cao cấp/25-09-24 Toán cao cấp - Ma trận (nhân, nghịch đảo, chia)]]"
---
### Hướng Dẫn Phép Nhân Ma Trận

Phép nhân hai ma trận là một phép toán cơ bản trong đại số tuyến tính. Để nhân hai ma trận với nhau, số cột của ma trận thứ nhất phải bằng số hàng của ma trận thứ hai.

---

#### **1. Điều Kiện Để Nhân Hai Ma Trận**

Giả sử chúng ta có hai ma trận $A$ và $B$. Để thực hiện phép nhân $A \times B$, ma trận $A$ phải có kích thước là $m \times n$ và ma trận $B$ phải có kích thước là $n \times p$. Tức là:

* **Số cột của ma trận $A$ = Số hàng của ma trận $B$ = $n$**

Ma trận kết quả, ký hiệu là $C = A \times B$, sẽ có kích thước là $m \times p$.

$$ A_{m \times n} \times B_{n \times p} = C_{m \times p} $$

---

#### **2. Quy Tắc Tính Toán**

Phần tử ở hàng $i$ và cột $j$ của ma trận tích $C$, ký hiệu là $c_{ij}$, được tính bằng cách lấy tổng của các tích của từng phần tử tương ứng trên hàng $i$ của ma trận $A$ với từng phần tử tương ứng trên cột $j$ của ma trận $B$.

Công thức tổng quát cho phần tử $c_{ij}$ là:

$$ c_{ij} = \sum_{k=1}^{n} a_{ik} b_{kj} = a_{i1}b_{1j} + a_{i2}b_{2j} + \dots + a_{in}b_{nj} $$

Trong đó:
* $a_{ik}$ là phần tử ở hàng $i$, cột $k$ của ma trận $A$.
* $b_{kj}$ là phần tử ở hàng $k$, cột $j$ của ma trận $B$.

---

#### **3. Ví Dụ Minh Họa**

Xét hai ma trận $A$ và $B$:

$$ A = \begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \end{pmatrix}, \quad B = \begin{pmatrix} 7 & 8 \\ 9 & 10 \\ 11 & 12 \end{pmatrix} $$

* Ma trận $A$ có kích thước $2 \times 3$.
* Ma trận $B$ có kích thước $3 \times 2$.

Vì số cột của $A$ (3) bằng số hàng của $B$ (3), nên ta có thể thực hiện phép nhân $A \times B$. Ma trận kết quả $C = A \times B$ sẽ có kích thước $2 \times 2$.

$$ C = \begin{pmatrix} c_{11} & c_{12} \\ c_{21} & c_{22} \end{pmatrix} $$

Bây giờ, chúng ta tính từng phần tử của $C$:

* **Tính $c_{11}$ (hàng 1 của A, cột 1 của B):**
    $$ c_{11} = (1 \times 7) + (2 \times 9) + (3 \times 11) = 7 + 18 + 33 = 58 $$

* **Tính $c_{12}$ (hàng 1 của A, cột 2 của B):**
    $$ c_{12} = (1 \times 8) + (2 \times 10) + (3 \times 12) = 8 + 20 + 36 = 64 $$

* **Tính $c_{21}$ (hàng 2 của A, cột 1 của B):**
    $$ c_{21} = (4 \times 7) + (5 \times 9) + (6 \times 11) = 28 + 45 + 66 = 139 $$

* **Tính $c_{22}$ (hàng 2 của A, cột 2 của B):**
    $$ c_{22} = (4 \times 8) + (5 \times 10) + (6 \times 12) = 32 + 50 + 72 = 154 $$

Vậy ma trận tích là:

$$ C = A \times B = \begin{pmatrix} 58 & 64 \\ 139 & 154 \end{pmatrix} $$

---

#### **4. Tính Chất Quan Trọng**

* **Phép nhân ma trận không có tính giao hoán:** Nói chung, $A \times B \neq B \times A$. Trong ví dụ trên, $B \times A$ cũng thực hiện được và cho ra ma trận kích thước $3 \times 3$, rõ ràng khác với $A \times B$.
* **Tính kết hợp:** $(A \times B) \times C = A \times (B \times C)$.
* **Tính phân phối:** $A \times (B + C) = A \times B + A \times C$.


### Phép "Chia" Ma Trận (Nhân Với Ma Trận Nghịch Đảo)

Trong đại số tuyến tính, không có phép toán "chia" ma trận một cách trực tiếp như đối với các số thông thường. Thay vào đó, khái niệm tương đương với phép chia là **nhân với ma trận nghịch đảo**.

Giống như trong số học, thay vì chia cho $5$, ta có thể nhân với $5^{-1}$ (tức là $1/5$). Trong ma trận, để "chia" cho ma trận $A$, ta sẽ nhân với ma trận nghịch đảo của nó, ký hiệu là $A^{-1}$.

$$ B \div A \implies B \times A^{-1} $$

---

#### **1. Ma Trận Nghịch Đảo**

**Định nghĩa:** Cho một ma trận vuông $A$ cấp $n$, ma trận nghịch đảo của $A$ (nếu tồn tại) là một ma trận $A^{-1}$ cấp $n$ sao cho:

$$ A \times A^{-1} = A^{-1} \times A = I_n $$

Trong đó, $I_n$ là **ma trận đơn vị** cấp $n$. Ma trận đơn vị là một ma trận vuông có các phần tử trên đường chéo chính bằng 1, và tất cả các phần tử khác bằng 0.

$$ I_2 = \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix}, \quad I_3 = \begin{pmatrix} 1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1 \end{pmatrix} $$

**Điều kiện tồn tại:** Một ma trận $A$ có ma trận nghịch đảo khi và chỉ khi nó là **ma trận vuông** và **định thức (determinant)** của nó khác không ($\det(A) \neq 0$).

---

#### **2. Cách Tìm Ma Trận Nghịch Đảo (Ví dụ với ma trận 2x2)**

Đây là trường hợp phổ biến và dễ tính toán nhất. Cho ma trận $A$ cấp $2 \times 2$:

$$ A = \begin{pmatrix} a & b \\ c & d \end{pmatrix} $$

**Bước 1: Tính định thức của A**

Định thức của $A$, ký hiệu là $\det(A)$ hoặc $|A|$, được tính như sau:

$$ \det(A) = ad - bc $$

Nếu $\det(A) = 0$, ma trận $A$ không có nghịch đảo.

**Bước 2: Tìm ma trận nghịch đảo**

Nếu $\det(A) \neq 0$, ma trận nghịch đảo $A^{-1}$ được tính bằng công thức:

$$ A^{-1} = \frac{1}{\det(A)} \begin{pmatrix} d & -b \\ -c & a \end{pmatrix} $$

**Quy tắc:**
1.  Lấy $1$ chia cho định thức.
2.  Trong ma trận, hoán đổi vị trí của $a$ và $d$.
3.  Đổi dấu của $b$ và $c$.

---

#### **3. Ví Dụ Minh Họa**

Giả sử chúng ta có phương trình ma trận $A \times X = B$, và chúng ta muốn tìm ma trận $X$.

$$ A = \begin{pmatrix} 4 & 7 \\ 2 & 6 \end{pmatrix}, \quad B = \begin{pmatrix} 3 \\ 1 \end{pmatrix} $$

Để tìm $X$, ta cần "chia" $B$ cho $A$, tức là nhân $A^{-1}$ vào bên trái của cả hai vế:

$$ A^{-1} \times (A \times X) = A^{-1} \times B $$
$$ (A^{-1} \times A) \times X = A^{-1} \times B $$
$$ I_2 \times X = A^{-1} \times B $$
$$ X = A^{-1} \times B $$

**Bước 1: Tìm $A^{-1}$**

* Tính định thức:
    $$ \det(A) = (4)(6) - (7)(2) = 24 - 14 = 10 $$
    Vì $\det(A) = 10 \neq 0$, ma trận $A$ có nghịch đảo.

* Áp dụng công thức:
    $$ A^{-1} = \frac{1}{10} \begin{pmatrix} 6 & -7 \\ -2 & 4 \end{pmatrix} = \begin{pmatrix} 6/10 & -7/10 \\ -2/10 & 4/10 \end{pmatrix} = \begin{pmatrix} 0.6 & -0.7 \\ -0.2 & 0.4 \end{pmatrix} $$

**Bước 2: Tính X**

Bây giờ thực hiện phép nhân ma trận $X = A^{-1} \times B$:

$$ X = \begin{pmatrix} 0.6 & -0.7 \\ -0.2 & 0.4 \end{pmatrix} \begin{pmatrix} 3 \\ 1 \end{pmatrix} $$

$$ X = \begin{pmatrix} (0.6 \times 3) + (-0.7 \times 1) \\ (-0.2 \times 3) + (0.4 \times 1) \end{pmatrix} $$

$$ X = \begin{pmatrix} 1.8 - 0.7 \\ -0.6 + 0.4 \end{pmatrix} = \begin{pmatrix} 1.1 \\ -0.2 \end{pmatrix} $$

Vậy, ma trận $X$ cần tìm là $\begin{pmatrix} 1.1 \\ -0.2 \end{pmatrix}$.

---

#### **4. Lưu Ý Quan Trọng**

* Đối với ma trận có kích thước lớn hơn ($3 \times 3$, $4 \times 4$,...), việc tìm ma trận nghịch đảo phức tạp hơn nhiều, thường sử dụng các phương pháp như phép khử Gauss-Jordan hoặc dùng ma trận phụ hợp (adjugate matrix).
* Thứ tự nhân rất quan trọng. Nếu $A \times X = B$, thì $X = A^{-1} \times B$. Nếu $X \times A = B$, thì $X = B \times A^{-1}$. Kết quả của hai trường hợp này thường khác nhau.


### Hướng Dẫn Chi Tiết Cách Tìm Ma Trận Nghịch Đảo

Ma trận nghịch đảo là một khái niệm nền tảng trong đại số tuyến tính, tương đương với phép chia trong số học. Để "chia" cho một ma trận $A$, ta nhân với ma trận nghịch đảo của nó, ký hiệu là $A^{-1}$.

---

#### **1. Điều Kiện Cần và Đủ Để Tồn Tại Ma Trận Nghịch Đảo**

Một ma trận chỉ có thể có ma trận nghịch đảo nếu nó thỏa mãn hai điều kiện sau:

1.  **Phải là ma trận vuông:** Số hàng phải bằng số cột (ví dụ: $2 \times 2$, $3 \times 3$, ...). Ký hiệu là ma trận cấp $n$.
2.  **Định thức (determinant) phải khác 0:** $\det(A) \neq 0$. Ma trận có định thức khác không được gọi là ma trận **không suy biến** hoặc **khả nghịch**.

Nếu một trong hai điều kiện trên không được thỏa mãn, ma trận đó không có nghịch đảo.

---

#### **2. Phương Pháp Tìm Ma Trận Nghịch Đảo cho Ma Trận 2x2 (Công thức nhanh)**

Đây là trường hợp đơn giản và phổ biến nhất, có thể giải quyết bằng một công thức trực tiếp.

Cho ma trận $A = \begin{pmatrix} a & b \\ c & d \end{pmatrix}$.

**Bước 1: Tính Định Thức**
$$ \det(A) = ad - bc $$
Nếu $\det(A) = 0$, dừng lại. Ma trận không có nghịch đảo.

**Bước 2: Áp Dụng Công Thức Nghịch Đảo**
Nếu $\det(A) \neq 0$, ma trận nghịch đảo $A^{-1}$ được tính như sau:
$$ A^{-1} = \frac{1}{ad - bc} \begin{pmatrix} d & -b \\ -c & a \end{pmatrix} $$
* **Ghi nhớ:** Lấy $1$ chia cho định thức, sau đó nhân với ma trận mới được tạo bằng cách:
    * Hoán đổi vị trí hai phần tử trên đường chéo chính ($a$ và $d$).
    * Đổi dấu hai phần tử trên đường chéo phụ ($b$ và $c$).

**Ví dụ:**
Tìm nghịch đảo của $A = \begin{pmatrix} 3 & 1 \\ 5 & 2 \end{pmatrix}$.

1.  $\det(A) = (3)(2) - (1)(5) = 6 - 5 = 1$. Vì $\det(A) \neq 0$, ma trận có nghịch đảo.
2.  $A^{-1} = \frac{1}{1} \begin{pmatrix} 2 & -1 \\ -5 & 3 \end{pmatrix} = \begin{pmatrix} 2 & -1 \\ -5 & 3 \end{pmatrix}$.

---

#### **3. Phương Pháp Tìm Ma Trận Nghịch Đảo cho Ma Trận Cấp Cao Hơn (n x n, với n ≥ 3)**

Đối với các ma trận lớn hơn, có hai phương pháp chính: sử dụng Ma trận phụ hợp (Adjugate Matrix) hoặc phương pháp khử Gauss-Jordan.

##### **Phương Pháp 1: Sử Dụng Ma Trận Phụ Hợp**

Phương pháp này dựa trên công thức lý thuyết:
$$ A^{-1} = \frac{1}{\det(A)} \text{adj}(A) $$
Trong đó $\text{adj}(A)$ là **ma trận phụ hợp** của $A$.

**Các bước thực hiện:**

**Bước 1: Tính định thức của A, $\det(A)$.**
Đây là bước phức tạp đối với ma trận cấp cao. Nếu $\det(A) = 0$, kết luận ma trận không có nghịch đảo.

**Bước 2: Tìm Ma trận các phần bù đại số (Cofactor Matrix).**
* **Phần bù con (Minor):** Phần bù con $M_{ij}$ của phần tử $a_{ij}$ là định thức của ma trận con thu được bằng cách xóa hàng $i$ và cột $j$ của ma trận $A$.
* **Phần bù đại số (Cofactor):** Phần bù đại số $C_{ij}$ của phần tử $a_{ij}$ được tính bằng công thức: $C_{ij} = (-1)^{i+j} M_{ij}$.
* Ma trận các phần bù đại số (ký hiệu là $C$) là ma trận có các phần tử là $C_{ij}$.

**Bước 3: Tìm Ma trận phụ hợp (Adjugate Matrix).**
Ma trận phụ hợp, $\text{adj}(A)$, là ma trận **chuyển vị** của ma trận các phần bù đại số $C$.
$$ \text{adj}(A) = C^T $$

**Bước 4: Tính ma trận nghịch đảo.**
Lấy mỗi phần tử của ma trận phụ hợp chia cho định thức đã tính ở Bước 1.

**Ví dụ (minh họa các bước cho ma trận $3 \times 3$):**
Cho $A = \begin{pmatrix} a_{11} & a_{12} & a_{13} \\ a_{21} & a_{22} & a_{23} \\ a_{31} & a_{32} & a_{33} \end{pmatrix}$.

1.  Tính $\det(A)$.
2.  Tính ma trận $C$:
    $$ C = \begin{pmatrix} C_{11} & C_{12} & C_{13} \\ C_{21} & C_{22} & C_{23} \\ C_{31} & C_{32} & C_{33} \end{pmatrix} $$
    Ví dụ, $C_{11} = (-1)^{1+1} \det \begin{pmatrix} a_{22} & a_{23} \\ a_{32} & a_{33} \end{pmatrix} = a_{22}a_{33} - a_{23}a_{32}$.
3.  Tính ma trận phụ hợp:
    $$ \text{adj}(A) = C^T = \begin{pmatrix} C_{11} & C_{21} & C_{31} \\ C_{12} & C_{22} & C_{32} \\ C_{13} & C_{23} & C_{33} \end{pmatrix} $$
4.  Tính $A^{-1} = \frac{1}{\det(A)} \text{adj}(A)$.

##### **Phương Pháp 2: Khử Gauss-Jordan**

Phương pháp này hiệu quả cho tính toán bằng máy và thực hành, biến đổi ma trận $A$ thành ma trận đơn vị $I$ thông qua các phép biến đổi sơ cấp trên hàng.

**Các bước thực hiện:**

**Bước 1: Lập ma trận mở rộng.**
Viết ma trận $A$ và ma trận đơn vị $I$ cùng cấp cạnh nhau, tạo thành một ma trận mở rộng $[A | I]$.

$$ [A | I] = \left[ \begin{array}{ccc|ccc} a_{11} & \dots & a_{1n} & 1 & \dots & 0 \\ \vdots & \ddots & \vdots & \vdots & \ddots & \vdots \\ a_{n1} & \dots & a_{nn} & 0 & \dots & 1 \end{array} \right] $$

**Bước 2: Sử dụng các phép biến đổi sơ cấp trên hàng.**
Áp dụng các phép biến đổi sơ cấp trên hàng cho toàn bộ ma trận mở rộng để biến đổi phần ma trận $A$ (bên trái) thành ma trận đơn vị $I$. Các phép biến đổi bao gồm:
1.  Nhân một hàng với một số khác không.
2.  Cộng một bội số của một hàng vào một hàng khác.
3.  Hoán đổi vị trí hai hàng.

**Bước 3: Kết quả.**
Khi phần bên trái của ma trận mở rộng đã trở thành ma trận đơn vị $I$, thì phần bên phải sẽ là ma trận nghịch đảo $A^{-1}$.

$$ [I | A^{-1}] $$

Nếu trong quá trình biến đổi, bạn gặp một hàng có toàn số 0 ở phần bên trái, điều đó có nghĩa là $\det(A) = 0$ và ma trận không có nghịch đảo.



