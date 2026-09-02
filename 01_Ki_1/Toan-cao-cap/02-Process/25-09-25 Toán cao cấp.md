---
tags:
  - university
  - Math
---

Để giải hai bài toán ma trận này, chúng ta cần biến đổi phương trình về dạng quen thuộc $XA=B$ hoặc $AX=B$, sau đó sử dụng phép nhân với ma trận nghịch đảo.

---

### Bài 1

* **Phương trình:** $XA - B = 2I$
* **Ma trận:** $A = \begin{pmatrix} 1 & 2 \\ 0 & 1 \end{pmatrix}, B = \begin{pmatrix} 2 & 1 \\ -1 & 0 \end{pmatrix}$

**Bước 1: Biến đổi phương trình**
Chuyển vế $B$ và $2I$ sang để phương trình có dạng $XA = C$:
$$XA = B + 2I$$
Trước tiên, ta cần tính ma trận $C = B + 2I$. Ma trận đơn vị $I$ cùng cấp với $B$ (tức là $2 \times 2$), có dạng:
$$I = \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix}$$
Vậy:
$$C = \begin{pmatrix} 2 & 1 \\ -1 & 0 \end{pmatrix} + 2 \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix} = \begin{pmatrix} 2 & 1 \\ -1 & 0 \end{pmatrix} + \begin{pmatrix} 2 & 0 \\ 0 & 2 \end{pmatrix} = \begin{pmatrix} 2+2 & 1+0 \\ -1+0 & 0+2 \end{pmatrix} = \begin{pmatrix} 4 & 1 \\ -1 & 2 \end{pmatrix}$$
Phương trình trở thành:
$$X \begin{pmatrix} 1 & 2 \\ 0 & 1 \end{pmatrix} = \begin{pmatrix} 4 & 1 \\ -1 & 2 \end{pmatrix}$$

**Bước 2: Tìm ma trận nghịch đảo $A^{-1}$**
Vì phương trình có dạng $XA = C$, ta cần nhân $A^{-1}$ vào bên phải của cả hai vế: $X = CA^{-1}$.
* Tính định thức của $A$: $\det(A) = (1)(1) - (2)(0) = 1$.
* Tìm ma trận nghịch đảo:
    $$A^{-1} = \frac{1}{1} \begin{pmatrix} 1 & -2 \\ 0 & 1 \end{pmatrix} = \begin{pmatrix} 1 & -2 \\ 0 & 1 \end{pmatrix}$$

**Bước 3: Tính $X = CA^{-1}$**
$$X = \begin{pmatrix} 4 & 1 \\ -1 & 2 \end{pmatrix} \begin{pmatrix} 1 & -2 \\ 0 & 1 \end{pmatrix} = \begin{pmatrix} (4)(1)+(1)(0) & (4)(-2)+(1)(1) \\ (-1)(1)+(2)(0) & (-1)(-2)+(2)(1) \end{pmatrix}$$
$$X = \begin{pmatrix} 4+0 & -8+1 \\ -1+0 & 2+2 \end{pmatrix} = \begin{pmatrix} 4 & -7 \\ -1 & 4 \end{pmatrix}$$

---

### Bài 2

* **Phương trình:** $AX - 2B = O$
* **Ma trận:** $A = \begin{pmatrix} 0 & 1 \\ -1 & 2 \end{pmatrix}, B = \begin{pmatrix} 1 & 0 \\ 0 & -1 \end{pmatrix}$

**Bước 1: Biến đổi phương trình**
Chuyển vế $2B$ sang để phương trình có dạng $AX = C$:
$$AX = 2B$$
Trong đó $C = 2B$:
$$C = 2 \begin{pmatrix} 1 & 0 \\ 0 & -1 \end{pmatrix} = \begin{pmatrix} 2 & 0 \\ 0 & -2 \end{pmatrix}$$
Phương trình trở thành:
$$\begin{pmatrix} 0 & 1 \\ -1 & 2 \end{pmatrix} X = \begin{pmatrix} 2 & 0 \\ 0 & -2 \end{pmatrix}$$

**Bước 2: Tìm ma trận nghịch đảo $A^{-1}$**
Vì phương trình có dạng $AX = C$, ta cần nhân $A^{-1}$ vào bên trái của cả hai vế: $X = A^{-1}C$.
* Tính định thức của $A$: $\det(A) = (0)(2) - (1)(-1) = 0 + 1 = 1$.
* Tìm ma trận nghịch đảo:
    $$A^{-1} = \frac{1}{1} \begin{pmatrix} 2 & -1 \\ -(-1) & 0 \end{pmatrix} = \begin{pmatrix} 2 & -1 \\ 1 & 0 \end{pmatrix}$$

**Bước 3: Tính $X = A^{-1}C$**
$$X = \begin{pmatrix} 2 & -1 \\ 1 & 0 \end{pmatrix} \begin{pmatrix} 2 & 0 \\ 0 & -2 \end{pmatrix} = \begin{pmatrix} (2)(2)+(-1)(0) & (2)(0)+(-1)(-2) \\ (1)(2)+(0)(0) & (1)(0)+(0)(-2) \end{pmatrix}$$
$$X = \begin{pmatrix} 4+0 & 0+2 \\ 2+0 & 0+0 \end{pmatrix} = \begin{pmatrix} 4 & 2 \\ 2 & 0 \end{pmatrix}$$

Phép cộng ma trận là một phép toán cơ bản trong đại số tuyến tính, được thực hiện bằng cách cộng các phần tử tương ứng của các ma trận với nhau. Để có thể cộng hai ma trận, chúng phải có cùng kích thước (cùng số hàng và cùng số cột).

---

### Quy tắc
Giả sử chúng ta có hai ma trận $A$ và $B$ cùng kích thước $m \times n$. Ma trận tổng $C = A + B$ cũng sẽ có kích thước $m \times n$. Mỗi phần tử của ma trận tổng được tính bằng cách cộng các phần tử ở cùng vị trí của ma trận $A$ và $B$.
$$c_{ij} = a_{ij} + b_{ij}$$

---

### Ví dụ
Cho hai ma trận $A$ và $B$ có cùng kích thước $2 \times 2$:
$$A = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix}, \quad B = \begin{pmatrix} 5 & 6 \\ 7 & 8 \end{pmatrix}$$
Ma trận tổng $C = A + B$ sẽ là:
$$C = \begin{pmatrix} 1+5 & 2+6 \\ 3+7 & 4+8 \end{pmatrix} = \begin{pmatrix} 6 & 8 \\ 10 & 12 \end{pmatrix}$$

### Bài 3

* **Phương trình:** $XA + B = I$
* **Ma trận:** $A = \begin{pmatrix} 2 & -1 \\ 1 & 3 \end{pmatrix}, B = \begin{pmatrix} 0 & 2 \\ 1 & 1 \end{pmatrix}$

**Bước 1: Biến đổi phương trình**
Đầu tiên, ta cần đưa phương trình về dạng $XA = C$ bằng cách chuyển ma trận $B$ sang vế phải.
$$XA = I - B$$
Sau đó, ta tính ma trận $C = I - B$. Vì $B$ là ma trận $2 \times 2$, ma trận đơn vị $I$ cũng là ma trận $2 \times 2$:
$$C = \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix} - \begin{pmatrix} 0 & 2 \\ 1 & 1 \end{pmatrix} = \begin{pmatrix} 1-0 & 0-2 \\ 0-1 & 1-1 \end{pmatrix} = \begin{pmatrix} 1 & -2 \\ -1 & 0 \end{pmatrix}$$
Phương trình trở thành:
$$X \begin{pmatrix} 2 & -1 \\ 1 & 3 \end{pmatrix} = \begin{pmatrix} 1 & -2 \\ -1 & 0 \end{pmatrix}$$

**Bước 2: Tìm ma trận nghịch đảo $A^{-1}$**
Vì phương trình có dạng $XA = C$, ta cần nhân ma trận nghịch đảo của $A$ vào bên phải của cả hai vế: $X = CA^{-1}$.
* Tính định thức của $A$: $\det(A) = (2)(3) - (-1)(1) = 6 + 1 = 7$.
* Tìm ma trận nghịch đảo:
    $$A^{-1} = \frac{1}{7} \begin{pmatrix} 3 & 1 \\ -1 & 2 \end{pmatrix}$$

**Bước 3: Tính $X = CA^{-1}$**
* Thực hiện phép nhân ma trận:
    $$X = \begin{pmatrix} 1 & -2 \\ -1 & 0 \end{pmatrix} \left( \frac{1}{7} \begin{pmatrix} 3 & 1 \\ -1 & 2 \end{pmatrix} \right) = \frac{1}{7} \begin{pmatrix} (1)(3)+(-2)(-1) & (1)(1)+(-2)(2) \\ (-1)(3)+(0)(-1) & (-1)(1)+(0)(2) \end{pmatrix}$$
    $$X = \frac{1}{7} \begin{pmatrix} 3+2 & 1-4 \\ -3+0 & -1+0 \end{pmatrix} = \frac{1}{7} \begin{pmatrix} 5 & -3 \\ -3 & -1 \end{pmatrix} = \begin{pmatrix} 5/7 & -3/7 \\ -3/7 & -1/7 \end{pmatrix}$$

---

### Bài 4

* **Phương trình:** $AX - B = 3I$
* **Ma trận:** $A = \begin{pmatrix} 1 & 0 \\ 2 & 1 \end{pmatrix}, B = \begin{pmatrix} 3 & 1 \\ 0 & 2 \end{pmatrix}$

**Bước 1: Biến đổi phương trình**
Đưa phương trình về dạng $AX = C$ bằng cách chuyển ma trận $B$ và $3I$ sang vế phải.
$$AX = B + 3I$$
Tính ma trận $C = B + 3I$. Ma trận đơn vị $I$ cũng là ma trận $2 \times 2$:
$$C = \begin{pmatrix} 3 & 1 \\ 0 & 2 \end{pmatrix} + 3 \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix} = \begin{pmatrix} 3 & 1 \\ 0 & 2 \end{pmatrix} + \begin{pmatrix} 3 & 0 \\ 0 & 3 \end{pmatrix} = \begin{pmatrix} 3+3 & 1+0 \\ 0+0 & 2+3 \end{pmatrix} = \begin{pmatrix} 6 & 1 \\ 0 & 5 \end{pmatrix}$$
Phương trình trở thành:
$$\begin{pmatrix} 1 & 0 \\ 2 & 1 \end{pmatrix} X = \begin{pmatrix} 6 & 1 \\ 0 & 5 \end{pmatrix}$$

**Bước 2: Tìm ma trận nghịch đảo $A^{-1}$**
Vì phương trình có dạng $AX = C$, ta cần nhân ma trận nghịch đảo của $A$ vào bên trái của cả hai vế: $X = A^{-1}C$.
* Tính định thức của $A$: $\det(A) = (1)(1) - (0)(2) = 1$.
* Tìm ma trận nghịch đảo:
    $$A^{-1} = \frac{1}{1} \begin{pmatrix} 1 & 0 \\ -2 & 1 \end{pmatrix} = \begin{pmatrix} 1 & 0 \\ -2 & 1 \end{pmatrix}$$

**Bước 3: Tính $X = A^{-1}C$**
* Thực hiện phép nhân ma trận:
    $$X = \begin{pmatrix} 1 & 0 \\ -2 & 1 \end{pmatrix} \begin{pmatrix} 6 & 1 \\ 0 & 5 \end{pmatrix} = \begin{pmatrix} (1)(6)+(0)(0) & (1)(1)+(0)(5) \\ (-2)(6)+(1)(0) & (-2)(1)+(1)(5) \end{pmatrix}$$
    $$X = \begin{pmatrix} 6+0 & 1+0 \\ -12+0 & -2+5 \end{pmatrix} = \begin{pmatrix} 6 & 1 \\ -12 & 3 \end{pmatrix}$$
**


### Bài 6

* **Phương trình:** $AX + B = 2I$
* **Ma trận:** $A = \begin{pmatrix} 1 & -1 \\ 2 & 0 \end{pmatrix}, B = \begin{pmatrix} 2 & 0 \\ 1 & -1 \end{pmatrix}$

**Bước 1: Biến đổi phương trình**
Đưa phương trình về dạng $AX = C$ bằng cách chuyển ma trận $B$ và $2I$ sang vế phải.
$$AX = 2I - B$$
Tính ma trận $C = 2I - B$. Ma trận đơn vị $I$ cũng là ma trận $2 \times 2$.
$$C = 2 \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix} - \begin{pmatrix} 2 & 0 \\ 1 & -1 \end{pmatrix} = \begin{pmatrix} 2 & 0 \\ 0 & 2 \end{pmatrix} - \begin{pmatrix} 2 & 0 \\ 1 & -1 \end{pmatrix} = \begin{pmatrix} 2-2 & 0-0 \\ 0-1 & 2-(-1) \end{pmatrix} = \begin{pmatrix} 0 & 0 \\ -1 & 3 \end{pmatrix}$$
Phương trình trở thành:
$$\begin{pmatrix} 1 & -1 \\ 2 & 0 \end{pmatrix} X = \begin{pmatrix} 0 & 0 \\ -1 & 3 \end{pmatrix}$$

**Bước 2: Tìm ma trận nghịch đảo $A^{-1}$**
Vì phương trình có dạng $AX = C$, ta cần nhân ma trận nghịch đảo của $A$ vào bên trái của cả hai vế: $X = A^{-1}C$.
* Tính định thức của $A$: $\det(A) = (1)(0) - (-1)(2) = 0 + 2 = 2$.
* Tìm ma trận nghịch đảo:
    $$A^{-1} = \frac{1}{2} \begin{pmatrix} 0 & 1 \\ -2 & 1 \end{pmatrix}$$

**Bước 3: Tính $X = A^{-1}C$**
* Thực hiện phép nhân ma trận:
    $$X = \left( \frac{1}{2} \begin{pmatrix} 0 & 1 \\ -2 & 1 \end{pmatrix} \right) \begin{pmatrix} 0 & 0 \\ -1 & 3 \end{pmatrix} = \frac{1}{2} \begin{pmatrix} (0)(0)+(1)(-1) & (0)(0)+(1)(3) \\ (-2)(0)+(1)(-1) & (-2)(0)+(1)(3) \end{pmatrix}$$
    $$X = \frac{1}{2} \begin{pmatrix} 0-1 & 0+3 \\ 0-1 & 0+3 \end{pmatrix} = \frac{1}{2} \begin{pmatrix} -1 & 3 \\ -1 & 3 \end{pmatrix} = \begin{pmatrix} -1/2 & 3/2 \\ -1/2 & 3/2 \end{pmatrix}$$

---

### Bài 7 (kiểm tra lại)

* **Phương trình:** $XA - B = O$
* **Ma trận:** $A = \begin{pmatrix} 0 & 2 \\ 1 & 1 \end{pmatrix}, B = \begin{pmatrix} 1 & -1 \\ 2 & 0 \end{pmatrix}$

**Bước 1: Biến đổi phương trình**
Đưa phương trình về dạng $XA = C$ bằng cách chuyển ma trận $B$ sang vế phải.
$$XA = O + B$$
Trong đó $O$ là ma trận không (ma trận có tất cả các phần tử bằng 0). Do đó $O + B = B$.
Phương trình trở thành:
$$X \begin{pmatrix} 0 & 2 \\ 1 & 1 \end{pmatrix} = \begin{pmatrix} 1 & -1 \\ 2 & 0 \end{pmatrix}$$

**Bước 2: Tìm ma trận nghịch đảo $A^{-1}$**
Vì phương trình có dạng $XA = C$, ta cần nhân ma trận nghịch đảo của $A$ vào bên phải của cả hai vế: $X = CA^{-1}$.
* Tính định thức của $A$: $\det(A) = (0)(1) - (2)(1) = 0 - 2 = -2$.
* Tìm ma trận nghịch đảo:
    $$A^{-1} = \frac{1}{-2} \begin{pmatrix} 1 & -2 \\ -1 & 0 \end{pmatrix} = \begin{pmatrix} -1/2 & 1 \\ 1/2 & 0 \end{pmatrix}$$

**Bước 3: Tính $X = CA^{-1}$**
* Thực hiện phép nhân ma trận:
    $$X = \begin{pmatrix} 1 & -1 \\ 2 & 0 \end{pmatrix} \begin{pmatrix} -1/2 & 1 \\ 1/2 & 0 \end{pmatrix} = \begin{pmatrix} (1)(-1/2)+(-1)(1/2) & (1)(1)+(-1)(0) \\ (2)(-1/2)+(0)(1/2) & (2)(1)+(0)(0) \end{pmatrix}$$
    $$X = \begin{pmatrix} -1/2-1/2 & 1+0 \\ -1+0 & 2+0 \end{pmatrix} = \begin{pmatrix} -1 & 1 \\ -1 & 2 \end{pmatrix}$$



Để giải bài toán này, chúng ta sẽ thực hiện hai phép toán riêng biệt: phép cộng ma trận (kết hợp với nhân ma trận với một số vô hướng) và giải phương trình ma trận.

### a) Tìm ma trận $2A + B$

**Bước 1: Tính ma trận $2A$**
Phép nhân ma trận với một số vô hướng được thực hiện bằng cách nhân số đó với mỗi phần tử của ma trận.
$$2A = 2 \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix} = \begin{pmatrix} 2 \times 1 & 2 \times 2 \\ 2 \times 3 & 2 \times 4 \end{pmatrix} = \begin{pmatrix} 2 & 4 \\ 6 & 8 \end{pmatrix}$$

**Bước 2: Tính ma trận $2A + B$**
Phép cộng hai ma trận chỉ có thể thực hiện khi chúng có cùng kích thước. Vì cả $2A$ và $B$ đều là ma trận $2 \times 2$, ta có thể cộng chúng bằng cách cộng các phần tử ở vị trí tương ứng.
$$2A + B = \begin{pmatrix} 2 & 4 \\ 6 & 8 \end{pmatrix} + \begin{pmatrix} -2 & 6 \\ 7 & 1 \end{pmatrix} = \begin{pmatrix} 2 + (-2) & 4 + 6 \\ 6 + 7 & 8 + 1 \end{pmatrix} = \begin{pmatrix} 0 & 10 \\ 13 & 9 \end{pmatrix}$$

---

### b) Tìm ma trận $X$ thỏa mãn $XA = B$

**Bước 1: Tìm ma trận nghịch đảo $A^{-1}$**
Để giải phương trình $XA = B$, ta cần nhân ma trận nghịch đảo của $A$ vào **bên phải** của cả hai vế: $X = BA^{-1}$.
* Tính định thức của $A$:
    $$\det(A) = (1)(4) - (2)(3) = 4 - 6 = -2$$
* Tìm ma trận nghịch đảo:
    $$A^{-1} = \frac{1}{\det(A)} \text{adj}(A) = \frac{1}{-2} \begin{pmatrix} 4 & -2 \\ -3 & 1 \end{pmatrix} = \begin{pmatrix} -2 & 1 \\ 3/2 & -1/2 \end{pmatrix}$$

**Bước 2: Tính $X = BA^{-1}$**
Thực hiện phép nhân ma trận $B$ với $A^{-1}$.
$$X = \begin{pmatrix} -2 & 6 \\ 7 & 1 \end{pmatrix} \begin{pmatrix} -2 & 1 \\ 3/2 & -1/2 \end{pmatrix}$$
$$X = \begin{pmatrix} (-2)(-2)+(6)(3/2) & (-2)(1)+(6)(-1/2) \\ (7)(-2)+(1)(3/2) & (7)(1)+(1)(-1/2) \end{pmatrix}$$
$$X = \begin{pmatrix} 4+9 & -2-3 \\ -14+3/2 & 7-1/2 \end{pmatrix}$$
$$X = \begin{pmatrix} 13 & -5 \\ -25/2 & 13/2 \end{pmatrix}$$
