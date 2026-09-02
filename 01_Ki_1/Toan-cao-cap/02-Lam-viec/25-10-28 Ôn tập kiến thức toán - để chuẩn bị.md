---
tags:
  - university
  - Math
---
Ma trận và Định thức là những phần kiến thức nền tảng và quan trọng trong Đại số tuyến tính, đặc biệt trong các giáo trình Toán cao cấp. Để ghi nhớ và nắm vững phần kiến thức này, bạn nên thực hiện một lộ trình học tập có hệ thống, đi từ định nghĩa cơ bản đến các ứng dụng phức hợp, kết hợp với việc luyện tập thường xuyên các dạng bài tập có trong tài liệu.

Dưới đây là lộ trình học chi tiết dựa trên các nguồn tài liệu bạn cung cấp, được chia thành 4 giai đoạn chính:

---

### **LỘ TRÌNH HỌC TẬP PHẦN MA TRẬN VÀ ĐỊNH THỨC**

#### **Giai đoạn 1: Nắm vững Khái niệm Cơ bản về Ma trận (Matrix)**

Mục tiêu của giai đoạn này là hiểu rõ định nghĩa, các loại ma trận đặc biệt, và thành thạo các phép toán cơ bản.

1. **Định nghĩa và Ký hiệu:**
    - Nắm vững định nghĩa **ma trận** là một bảng số hình chữ nhật gồm $m$ dòng và $n$ cột, ký hiệu $A=[a_{ij}]_{m\times n}$.
    - Hiểu rõ **ma trận vuông cấp $n$** (số hàng bằng số cột).
2. **Các loại Ma trận Đặc biệt:**
    - Phân biệt **Ma trận đơn vị** ($I$ hoặc $E$), **Ma trận không** ($O$), **Ma trận chéo**, **Ma trận tam giác trên/dưới**. Lưu ý rằng ma trận đơn vị là ma trận chéo có các phần tử trên đường chéo chính bằng 1.
    - Hiểu về **Ma trận bậc thang** (hay ma trận hình thang), là dạng đơn giản hóa thường dùng để tính hạng ma trận.
3. **Các Phép toán trên Ma trận:**
    - **Cộng và Nhân ma trận với một số** (vô hướng): Rất đơn giản, thực hiện cộng hoặc nhân từng phần tử tương ứng.
    - **Nhân hai ma trận** ($AB$): Đây là phép toán quan trọng nhất. Cần nhớ điều kiện tồn tại tích $AB$: số cột của $A$ phải bằng số hàng của $B$.
        - Thực hành tính $AB$ và $BA$ (nếu tồn tại).
    - **Ma trận chuyển vị** ($A^T$): Được tạo ra bằng cách chuyển các hàng của $A$ thành cột của $A^T$.
        - Ghi nhớ tính chất $(AB)^T = B^T A^T$.

#### **Giai đoạn 2: Nắm vững Định thức (Determinant)**

Định thức là một số thực đặc trưng chỉ tính được cho ma trận vuông.

1. **Định nghĩa và Tính toán:**
    - **Định thức cấp 2:** $\det(A) = a_{11}a_{22} - a_{12}a_{21}$.
    - **Định thức cấp 3:** Có thể tính bằng công thức khai triển hoặc quy tắc Sarrus (quy tắc 6 đường chéo).
    - **Định thức cấp $n$:** Tính bằng cách **khai triển theo một hàng hoặc một cột bất kỳ** (Định lý Laplace). Cần hiểu rõ khái niệm **phần bù đại số** ($C_{ij}$) và **ma trận bù** ($M_{ij}$).
        - Thực hành Bài 1.1, 1.2 và Bài số 5 để thành thạo tính toán.
2. **Các Tính chất Quan trọng của Định thức:**
    - $\det(A) = \det(A^T)$.
    - $\det(AB) = \det(A) \cdot \det(B)$.
    - **Ảnh hưởng của phép biến đổi sơ cấp:**
        - Đổi chỗ hai hàng (hoặc cột) thì định thức đổi dấu.
        - Nhân một hàng (hoặc cột) với số $k$ thì định thức nhân với $k$.
        - Cộng bội $k$ của một hàng vào hàng khác (hoặc cột vào cột khác) thì định thức **không đổi**.
    - **Định thức của ma trận tam giác** bằng tích các phần tử trên đường chéo chính.

#### **Giai đoạn 3: Ma trận Nghịch đảo và Hạng Ma trận (Inverse Matrix & Rank)**

Đây là các khái niệm cho phép đánh giá tính "khả đảo" và tính độc lập tuyến tính của ma trận.

1. **Ma trận Nghịch đảo ($A^{-1}$):**
    - **Định nghĩa:** $AA^{-1} = A^{-1}A = I_{n}$.
    - **Điều kiện tồn tại:** Ma trận $A$ khả nghịch khi và chỉ khi $\det(A) \ne 0$.
    - **Phương pháp tìm $A^{-1}$:**
        - Sử dụng **Ma trận phụ hợp** ($A^_$). Công thức là $A^{-1} = \frac{1}{\det A} A^_$.
        - Sử dụng **Giải thuật Gauss-Jordan** bằng cách biến đổi ma trận $(A|I_n)$ thành $(I_n|A^{-1})$.
    - Thực hành tìm ma trận nghịch đảo qua Bài 1.12 và Bài số 12.
2. **Hạng Ma trận ($r(A)$):**
    - **Định nghĩa:** Hạng của ma trận $A$ là cấp cao nhất của các **định thức con khác không** của $A$.
    - **Phương pháp tìm hạng:** Sử dụng **phép biến đổi sơ cấp theo hàng** để đưa $A$ về **dạng bậc thang** $B$. Hạng của $A$ bằng số hàng khác không của $B$.
    - Thực hành tìm hạng ma trận qua Bài 1.15 và Bài số 20.

#### **Giai đoạn 4: Ứng dụng và Tổng hợp**

Giai đoạn cuối cùng là đặt ma trận và định thức vào ngữ cảnh ứng dụng chính của chúng.

1. **Giải Hệ Phương trình Tuyến tính (HPTTT):**
    - Dạng ma trận của HPTTT là $AX = B$.
    - **Định lý Kronecker – Capelli:** Hệ $AX=B$ có nghiệm khi và chỉ khi $\text{hạng}(A) = \text{hạng}(\overline{A})$ (với $\overline{A}$ là ma trận bổ sung).
    - **Biện luận nghiệm:**
        - Nếu $r(A) \ne r(\overline{A})$: Hệ vô nghiệm.
        - Nếu $r(A) = r(\overline{A}) = n$ (số ẩn): Hệ có nghiệm duy nhất.
        - Nếu $r(A) = r(\overline{A}) < n$: Hệ có vô số nghiệm.
    - **Các phương pháp giải:**
        - **Phương pháp Cramer:** Áp dụng cho HPTTT vuông có $\det(A) \ne 0$. Nghiệm tính bằng $x_j = \frac{\det(A_j)}{\det(A)}$.
        - **Phương pháp ma trận nghịch đảo:** $X = A^{-1}B$ (nếu $A$ khả nghịch).
        - **Phương pháp Gauss** (khử ẩn) hoặc **Gauss-Jordan** (đưa về ma trận chéo/đơn vị).
2. **Luyện tập Kết nối:**
    - Luyện tập các bài toán liên quan đến ma trận, định thức và hạng trong các đề tham khảo (ví dụ: Câu 2 trong các đề số 01, 02, 03,...). Các dạng bài này thường yêu cầu tính ma trận nghịch đảo và giải hệ phương trình ma trận kiểu $\begin{cases}A(X+Y)=B\ (X-Y)A=B\end{cases}$.

Để đạt được sự thành thạo và ghi nhớ sâu sắc, việc thực hành lặp đi lặp lại các dạng bài tập cụ thể trong tài liệu là vô cùng cần thiết, vì việc hiểu lý thuyết cần phải đi đôi với khả năng vận dụng thành thạo các phương pháp cơ bản.


Định thức là một khái niệm cơ bản trong toán học, được định nghĩa riêng cho **ma trận vuông**.

Dựa trên các nguồn tài liệu, kiến thức về định thức bao gồm định nghĩa, các phương pháp tính toán, các tính chất quan trọng, và các khái niệm liên quan như ma trận bù và phần bù đại số:

### **1. Định nghĩa và Bản chất của Định thức**

- **Định nghĩa:** Định thức của ma trận vuông $A \in M_n$, được ký hiệu là $\det(A)$ hay $|A|$, là một **số thực**.
- **Ma trận vuông:** Định thức chỉ được tính cho ma trận $A$ có số hàng và số cột bằng nhau.
- **Định nghĩa quy nạp:** Định thức được định nghĩa bằng quy nạp theo cấp $n$:
    - **Cấp 1:** Với $A=(a_{11})$, thì $\det(A)=a_{11}$.
    - **Cấp 2:** Với $A=(\begin{smallmatrix}a_{11}&a_{12}\ a_{21}&a_{22}\end{smallmatrix})$, thì $\det(A)=a_{11}a_{22}-a_{12}a_{21}$.

### **2. Các Phương pháp Tính Định thức**

#### **2.1. Khai triển theo Hàng hoặc Cột (Định lý Laplace)**

Phương pháp này dựa trên việc sử dụng ma trận con, định thức con, và phần bù đại số.

- **Ma trận bù (Ma trận con):** Ma trận $M_{ij}$ (hoặc $A_{ij}$) là ma trận cấp $(n-1)$ nhận được từ $A$ bằng cách bỏ đi hàng $i$ và cột $j$.
- **Định thức con:** $D_{ij}=\det(M_{ij})$ là định thức con ứng với phần tử $a_{ij}$.
- **Phần bù đại số (Cofactor):** Phần bù đại số của phần tử $a_{ij}$ được ký hiệu là $C_{ij}$ hay $A_{ij}^{_}$, và được xác định bằng công thức: $A_{ij}^{_}=(-1)^{i+j}|A_{ij}|$.
- **Công thức khai triển (Laplace):**
    - **Khai triển theo hàng $i_0$:** $\det(A)=\sum_{j=1}^{n}(-1)^{i_{0}+j}a_{i_{0}j}\det(A_{i_{0}j})$, hay sử dụng phần bù đại số.
    - **Khai triển theo cột $j_0$:** $\det(A)=\sum_{i=1}^{n}(-1)^{i+j_{0}}a_{ij_{0}}\det(A_{ij_{0}})$.

#### **2.2. Quy tắc Sarrus (Áp dụng cho $n=3$)**

Đối với ma trận vuông cấp 3, có thể tính định thức bằng quy tắc 6 đường chéo:

- $\det(A)$ bằng tổng của tích 3 phần tử nằm trên ba đường song song với đường chéo chính (mang dấu cộng), trừ đi tổng của tích 3 phần tử nằm trên ba đường song song với đường chéo phụ (mang dấu âm).

#### **2.3. Dùng Phép biến đổi sơ cấp**

Có thể tính định thức bằng cách áp dụng các phép biến đổi sơ cấp về hàng để đưa định thức về **dạng tam giác**.

- **Định thức của ma trận tam giác:** Bằng tích các phần tử nằm trên đường chéo chính.
- **Lưu ý khi biến đổi:** Cần ghi lại tác dụng của từng phép biến đổi sơ cấp lên giá trị định thức:
    - Nhân một hàng với số $k \ne 0$: Định thức nhân với $k$.
    - Đổi chỗ hai hàng: Định thức đổi dấu.
    - Cộng bội $k$ của một hàng vào hàng khác: Định thức **không đổi**.

### **3. Các Tính chất Quan trọng của Định thức**

Định thức có các tính chất cơ bản sau:

1. **Chuyển vị:** Định thức của ma trận chuyển vị bằng định thức của ma trận ban đầu: $\det(A)=\det(A^{T})$.
2. **Đổi chỗ hàng/cột:** Đổi chỗ hai hàng (hay hai cột) của định thức sẽ làm định thức đổi dấu.
3. **Tích định thức:** Định thức của tích hai ma trận vuông bằng tích các định thức của chúng: $\det(AB)=\det(A)\det(B)$.
4. **Hàng/Cột tỉ lệ:** Một định thức có hai hàng (hay hai cột) tỉ lệ với nhau thì bằng **không**.
5. **Hàng/Cột bằng 0:** Một định thức có một hàng (hay một cột) toàn là số không thì bằng **không**.
6. **Tổ hợp tuyến tính:** Nếu một hàng (hay một cột) là tổ hợp tuyến tính của các hàng/cột khác, định thức bằng **không**.

### **4. Ứng dụng liên quan**

Kiến thức về định thức được sử dụng để:

- **Điều kiện khả nghịch:** Ma trận vuông $A$ có ma trận nghịch đảo $A^{-1}$ (khả đảo) khi và chỉ khi $\det(A) \ne 0$.
- **Giải hệ phương trình:** Định thức là nền tảng của **Định lý Cramer**, cho phép tìm nghiệm duy nhất của hệ phương trình tuyến tính vuông nếu $\det(A) \ne 0$.
- **Hạng ma trận:** Hạng của ma trận $A$ ($\rho(A)$) là cấp cao nhất của các **định thức con khác không** của $A$.
- **Trị riêng:** Các trị riêng $\lambda$ của ma trận $A$ được tìm bằng cách giải phương trình đặc trưng $\det(A-\lambda I)=0$.


Để làm dạng bài này, bạn chỉ cần nhớ **một quy tắc duy nhất** và 2 bước làm.

---

## Quy tắc Vàng (Chỉ cần nhớ cái này) 💡

> **Mỗi lần bạn TRÁO CHỖ 2 HÀNG cho nhau, kết quả bị ĐỔI DẤU (nhân với -1).**

Từ đó suy ra:

- Tráo **1 lần** (lẻ): Kết quả = $(-\Delta)$
    
- Tráo **2 lần** (chẵn): Kết quả = $-(-\Delta) = \Delta$
    
- Tráo **3 lần** (lẻ): Kết quả = $-(\Delta) = -\Delta$
    

**Kết luận "nhớ ít":**

- Tráo **LẺ** lần $\rightarrow$ Đổi dấu (thành $-\Delta$)
    
- Tráo **CHẴN** lần $\rightarrow$ Giữ nguyên dấu (vẫn là $\Delta$)
    

---

## Cách làm 2 bước (Áp dụng cho mọi bài)

### Bước 1: Đánh số thứ tự các hàng của ma trận GỐC ($\Delta$)

$$\Delta = \begin{vmatrix} a & b & c \\ a' & b' & c' \\ a'' & b'' & c'' \end{vmatrix} \leftarrow \text{Hàng 1 (H1)} \leftarrow \text{Hàng 2 (H2)} \leftarrow \text{Hàng 3 (H3)}$$

- Thứ tự gốc là: **(H1, H2, H3)**
    

### Bước 2: Đếm số lần "Tráo" để ra ma trận MỚI

---

#### **Ví dụ câu a):**

Ma trận mới là:

$$\begin{vmatrix} a' & b' & c' \\ a'' & b'' & c'' \\ a & b & c \end{vmatrix} \leftarrow \text{Hàng 2 (H2)} \leftarrow \text{Hàng 3 (H3)} \leftarrow \text{Hàng 1 (H1)}$$

Thứ tự mới là: (H2, H3, H1)

**Bắt đầu đếm:**

1. Lấy gốc **(H1, H2, H3)**. Tráo H1 và H2 $\rightarrow$ **(H2, H1, H3)**. (Đếm **1 lần**)
    
2. Lấy **(H2, H1, H3)**. Tráo H1 và H3 $\rightarrow$ **(H2, H3, H1)**. (Đếm **2 lần**)
    

Kết quả: Cần 2 lần tráo (là số CHẴN). Vậy kết quả giữ nguyên dấu.

Đáp án a) = $\Delta$

---

#### **Ví dụ câu b):**

Ma trận mới là:

$$\begin{vmatrix} a'' & b'' & c'' \\ a' & b' & c' \\ a & b & c \end{vmatrix} \leftarrow \text{Hàng 3 (H3)} \leftarrow \text{Hàng 2 (H2)} \leftarrow \text{Hàng 1 (H1)}$$

Thứ tự mới là: (H3, H2, H1)

**Bắt đầu đếm:**

1. Lấy gốc **(H1, H2, H3)**. Tráo H1 và H3 $\rightarrow$ **(H3, H2, H1)**. (Đếm **1 lần**)
    

Kết quả: Cần 1 lần tráo (là số LẺ). Vậy kết quả đổi dấu.

Đáp án b) = $-\Delta$

---

**Tóm lại:** Bạn chỉ cần nhìn thứ tự hàng mới, rồi đếm xem phải tráo mấy lần. **Lẻ thì đổi dấu, chẵn thì giữ nguyên.** (Quy tắc này cũng áp dụng y hệt nếu họ tráo cột).


Chào bạn, để làm được dạng bài tập này, bạn chỉ cần nắm vững một kiến thức trọng tâm duy nhất, đó là:

---

## Kiến thức Trọng tâm: Tính chất của Định thức khi Đổi chỗ Hàng (hoặc Cột)

**Quy tắc Vàng:** Khi bạn **đổi chỗ hai hàng** (hoặc hai cột) bất kỳ của một định thức, giá trị của định thức mới sẽ **đổi dấu** (tức là bằng định thức cũ nhân với -1).

Ví dụ:

Nếu $A = \begin{vmatrix} R_1 \\ R_2 \\ R_3 \end{vmatrix}$ (với $R_1, R_2, R_3$ là các hàng)

thì $\begin{vmatrix} R_2 \\ R_1 \\ R_3 \end{vmatrix} = -A$ (Vì ta đã đổi chỗ hàng 1 và hàng 2).

---

## Áp dụng để giải bài 3.4

Chúng ta có định thức ban đầu:

$$\Delta = \begin{vmatrix} a & b & c \\ a' & b' & c' \\ a'' & b'' & c'' \end{vmatrix} = \begin{vmatrix} \text{Hàng 1} \\ \text{Hàng 2} \\ \text{Hàng 3} \end{vmatrix}$$

---

### a) Tính định thức $\begin{vmatrix} a' & b' & c' \\ a'' & b'' & c'' \\ a & b & c \end{vmatrix}$

Định thức này là $\begin{vmatrix} \text{Hàng 2} \\ \text{Hàng 3} \\ \text{Hàng 1} \end{vmatrix}$. Ta cần tìm xem phải "đổi chỗ" mấy lần để từ $\Delta$ ban đầu ra được định thức này.

1. Bước 1: Đổi Hàng 1 và Hàng 2
    
    $$\Delta = \begin{vmatrix} \text{Hàng 1} \\ \text{Hàng 2} \\ \text{Hàng 3} \end{vmatrix} \xrightarrow{\text{Đổi H1 } \leftrightarrow \text{ H2}} \begin{vmatrix} \text{Hàng 2} \\ \text{Hàng 1} \\ \text{Hàng 3} \end{vmatrix} = - \Delta$$
    
    (Đây là lần đổi thứ 1, nên kết quả bị nhân với -1)
    
2. Bước 2: Đổi Hàng 1 và Hàng 3 (của ma trận mới)
    
    $$\begin{vmatrix} \text{Hàng 2} \\ \text{Hàng 1} \\ \text{Hàng 3} \end{vmatrix} \xrightarrow{\text{Đổi H1 } \leftrightarrow \text{ H3}} \begin{vmatrix} \text{Hàng 2} \\ \text{Hàng 3} \\ \text{Hàng 1} \end{vmatrix} = - (-\Delta) = \Delta$$
    
    (Đây là lần đổi thứ 2, kết quả lại nhân tiếp với -1)
    

- **Kết luận (a):** Chúng ta cần **2 lần** đổi chỗ.
    
- Giá trị = $\Delta \times (-1)^2 = \Delta \times 1 = \Delta$.
    

---

### b) Tính định thức $\begin{vmatrix} a'' & b'' & c'' \\ a' & b' & c' \\ a & b & c \end{vmatrix}$

Định thức này là $\begin{vmatrix} \text{Hàng 3} \\ \text{Hàng 2} \\ \text{Hàng 1} \end{vmatrix}$.

1. Bước 1: Đổi Hàng 1 và Hàng 3
    
    $$\Delta = \begin{vmatrix} \text{Hàng 1} \\ \text{Hàng 2} \\ \text{Hàng 3} \end{vmatrix} \xrightarrow{\text{Đổi H1 } \leftrightarrow \text{ H3}} \begin{vmatrix} \text{Hàng 3} \\ \text{Hàng 2} \\ \text{Hàng 1} \end{vmatrix} = - \Delta$$
    
    (Đây là lần đổi thứ 1, nên kết quả bị nhân với -1)
    

- **Kết luận (b):** Chúng ta chỉ cần **1 lần** đổi chỗ.
    
- Giá trị = $\Delta \times (-1)^1 = \Delta \times (-1) = -\Delta$.
    

---

## Tóm tắt

Để làm bài này, bạn chỉ cần:

1. Nhìn vào định thức gốc ($\Delta$) và định thức mới.
    
2. Đếm xem bạn cần thực hiện bao nhiêu **lần đổi chỗ 2 hàng** để đưa định thức gốc về định thức mới.
    
3. Gọi số lần đổi chỗ là $k$.
    
    - Nếu $k$ là **số chẵn** (0, 2, 4...), kết quả là $\Delta$.
        
    - Nếu $k$ là **số lẻ** (1, 3, 5...), kết quả là $-\Delta$.


Chính xác! **Nếu** chúng ta _chỉ_ sử dụng phép tráo hàng.

Mỗi lần bạn tráo hàng, bạn nhân định thức với $(-1)$.

- Tráo 1 lần (lẻ): Kết quả là $-\Delta$
    
- Tráo 2 lần (chẵn): Kết quả là $(-1) \times (-\Delta) = \Delta$
    
- Tráo 3 lần (lẻ): Kết quả là $(-1) \times (\Delta) = -\Delta$
    

Vì vậy, dù bạn có "tráo thoải mái" bao nhiêu lần đi nữa, kết quả cuối cùng sẽ luôn là $\Delta$ (nếu bạn tráo chẵn lần) hoặc $-\Delta$ (nếu bạn tráo lẻ lần).

**Kết luận của bạn là hoàn toàn đúng** trong bối cảnh so sánh định thức như bài 3.4.

---

### ⚠️ Một lưu ý quan trọng để tránh nhầm lẫn

Khi tôi nói "tráo hàng thoải mái" ở trường hợp 2 (giải hệ phương trình / tìm hạng), ý là bạn được làm vậy vì nó **không làm thay đổi hạng hoặc tập nghiệm**.

Nhưng trong bối cảnh đó, bạn cũng "thoải mái" dùng 2 phép khác:

1. **Nhân** một hàng với số $k$: (Phép này _làm_ định thức thay đổi thành $k \cdot \Delta$)
    
2. **Cộng** bội của hàng này vào hàng khác: (Phép này _không_ làm đổi định thức)
    

Nếu bạn dùng "thoải mái" cả 3 phép này (tráo, nhân, cộng) để tính định thức, thì kết quả cuối cùng _không_ nhất thiết chỉ bằng $\Delta$ hoặc $-\Delta$ nữa (vì nó còn bị ảnh hưởng bởi phép nhân $k$).


Chào bạn. Bài toán này trông có vẻ phức tạp vì đây là định thức cấp 4, nhưng nó lại có một cách giải "mẹo" cực kỳ nhanh và thông minh.

Bạn có thể giải bài này theo 2 cách:

---

## Cách 1: Dùng "Mẹo" (Cách thông minh và nhanh nhất) 💡

Bạn chỉ cần nhớ 1 tính chất cơ bản của định thức:

> **Nếu một định thức có 2 hàng (hoặc 2 cột) giống hệt nhau, thì định thức đó bằng 0.**

Phương trình của chúng ta là $\det(A) = 0$. Ta chỉ cần tìm xem $x$ bằng bao nhiêu thì làm cho 2 hàng bị trùng nhau.

1. Xét $x = 2$:
    
    Thay $x=2$ vào hàng 1, ta được:
    
    Hàng 1: $\begin{vmatrix} 1 & 2 & 2^2 & 2^3 \end{vmatrix} \Rightarrow \begin{vmatrix} 1 & 2 & 4 & 8 \end{vmatrix}$
    
    Hàng 2: $\begin{vmatrix} 1 & 2 & 4 & 8 \end{vmatrix}$
    
    $\implies$ Hàng 1 = Hàng 2.
    
    Vì 2 hàng giống nhau, nên $\det(A) = 0$.
    
    Vậy, $x = 2$ là một nghiệm của phương trình.
    
2. Xét $x = 3$:
    
    Thay $x=3$ vào hàng 1, ta được:
    
    Hàng 1: $\begin{vmatrix} 1 & 3 & 3^2 & 3^3 \end{vmatrix} \Rightarrow \begin{vmatrix} 1 & 3 & 9 & 27 \end{vmatrix}$
    
    Hàng 3: $\begin{vmatrix} 1 & 3 & 9 & 27 \end{vmatrix}$
    
    $\implies$ Hàng 1 = Hàng 3.
    
    Vì 2 hàng giống nhau, nên $\det(A) = 0$.
    
    Vậy, $x = 3$ là một nghiệm của phương trình.
    
3. Xét $x = 4$:
    
    Thay $x=4$ vào hàng 1, ta được:
    
    Hàng 1: $\begin{vmatrix} 1 & 4 & 4^2 & 4^3 \end{vmatrix} \Rightarrow \begin{vmatrix} 1 & 4 & 16 & 64 \end{vmatrix}$
    
    Hàng 4: $\begin{vmatrix} 1 & 4 & 16 & 64 \end{vmatrix}$
    
    $\implies$ Hàng 1 = Hàng 4.
    
    Vì 2 hàng giống nhau, nên $\det(A) = 0$.
    
    Vậy, $x = 4$ là một nghiệm của phương trình.
    

Kết luận:

Khi khai triển định thức này theo hàng 1, bậc cao nhất của $x$ sẽ là $x^3$. Điều này có nghĩa là phương trình của chúng ta là một phương trình bậc 3. Một phương trình bậc 3 có tối đa 3 nghiệm.

Chúng ta đã tìm ra cả 3 nghiệm là $x=2, x=3, x=4$.

**Đáp án: $x=2, x=3, x=4$.**

---

## Cách 2: Dùng phép biến đổi (Cách làm bài bản)

Cách này là cách làm chuẩn mực nếu bạn không nhận ra "mẹo" ở trên. Mục tiêu là dùng các phép biến đổi hàng để đưa về định thức cấp 3.

1. **Dùng cột 1 (toàn số 1) để khử các hàng dưới:**
    
    - Lấy (Hàng 2) - (Hàng 1) $\rightarrow$ Hàng 2 mới
        
    - Lấy (Hàng 3) - (Hàng 1) $\rightarrow$ Hàng 3 mới
        
    - Lấy (Hàng 4) - (Hàng 1) $\rightarrow$ Hàng 4 mới
        
        (Lưu ý: Các phép biến đổi này không làm thay đổi giá trị của định thức)
        
    
    Phương trình trở thành:
    
    $$\begin{vmatrix} 1 & x & x^2 & x^3 \\ 0 & 2-x & 4-x^2 & 8-x^3 \\ 0 & 3-x & 9-x^2 & 27-x^3 \\ 0 & 4-x & 16-x^2 & 64-x^3 \end{vmatrix} = 0$$
    
2. Khai triển định thức theo Cột 1:
    
    $$1 \cdot \begin{vmatrix} 2-x & 4-x^2 & 8-x^3 \\ 3-x & 9-x^2 & 27-x^3 \\ 4-x & 16-x^2 & 64-x^3 \end{vmatrix} = 0$$
    
3. **Dùng hằng đẳng thức để rút nhân tử chung:**
    
    - Hàng 1: $4-x^2 = (2-x)(2+x)$; $8-x^3 = (2-x)(4+2x+x^2)$.
        
    - Hàng 2: $9-x^2 = (3-x)(3+x)$; $27-x^3 = (3-x)(9+3x+x^2)$.
        
    - Hàng 3: $16-x^2 = (4-x)(4+x)$; $64-x^3 = (4-x)(16+4x+x^2)$.
        
    
    Rút nhân tử chung của mỗi hàng ra ngoài:
    
    $$(2-x)(3-x)(4-x) \cdot \begin{vmatrix} 1 & 2+x & 4+2x+x^2 \\ 1 & 3+x & 9+3x+x^2 \\ 1 & 4+x & 16+4x+x^2 \end{vmatrix} = 0$$
    
4. Giải phương trình:
    
    Một tích bằng 0 khi một trong các thừa số bằng 0.
    
    - $2-x = 0 \implies x=2$
        
    - $3-x = 0 \implies x=3$
        
    - $4-x = 0 \implies x=4$
        
    - (Hoặc định thức cấp 3 còn lại bằng 0, nhưng ta đã tìm đủ 3 nghiệm).
        

**Tóm lại, cách nhanh nhất là dùng "Mẹo" ở Cách 1.**


Về phần mẹo
Nếu một định thức có 2 hàng (hoặc 2 cột) giống hệt nhau, thì định thức đó bằng 0.
Nó có đúng trong mọi trường hợp không?

Vâng, **đúng trong mọi trường hợp**.

Đây là một trong những tính chất cơ bản và quan trọng nhất của định thức. Bạn có thể hoàn toàn tin tưởng vào quy tắc này.

- Nếu một ma trận vuông có **hai hàng bất kỳ** giống hệt nhau, định thức của nó **chắc chắn bằng 0**.
    
- Điều này cũng đúng tuyệt đối cho cột: Nếu có **hai cột bất kỳ** giống hệt nhau, định thức cũng **bằng 0**.
    

Vì vậy, "mẹo" bạn dùng để giải bài 3.6 bằng cách phát hiện các hàng trùng nhau khi $x=2, x=3, x=4$ là hoàn toàn chính xác và là một phương pháp giải rất thông minh.



### 2. Kiến thức vận dụng

Ta sẽ dùng 2 tính chất sau của định thức:

1. **Tính chất 1:** Nếu ta lấy một cột (hoặc hàng) nhân với một số $k$ rồi cộng vào một cột (hoặc hàng) khác, thì giá trị của định thức **KHÔNG THAY ĐỔI**.
    
2. **Tính chất 2:** Nếu tất cả các phần tử của một cột (hoặc hàng) đều có nhân tử chung là $k$, ta có thể "rút" $k$ ra ngoài làm nhân tử chung của cả định thức. (Và ngược lại, nếu một định thức có một cột toàn số 0, thì định thức đó bằng 0).


Chào bạn. Đây là giải thích rõ ràng và chi tiết về hai tính chất cực kỳ quan trọng này của định thức.

---

## 1. Tính chất 1: Cộng bội của hàng/cột (Phép biến đổi sơ cấp loại 3)

> **Tính chất:** "Nếu ta lấy một cột (hoặc hàng) nhân với một số $k$ rồi cộng vào một cột (hoặc hàng) khác, thì giá trị của định thức **KHÔNG THAY ĐỔI**."

### Giải thích rõ hơn

- **Ký hiệu:** $H_i \leftarrow H_i + k \cdot H_j$ (Hàng $i$ mới bằng Hàng $i$ cũ cộng $k$ lần Hàng $j$). Tương tự cho cột $C_i \leftarrow C_i + k \cdot C_j$.
    
- **Đây là công cụ mạnh nhất** để đơn giản hóa định thức. Mục đích chính của nó là để **tạo ra các số 0** trong một hàng hoặc một cột, giúp việc tính toán (như khai triển Laplace) trở nên dễ dàng hơn nhiều.
    
- Bạn có thể thực hiện phép biến đổi này bao nhiêu lần tùy ý (như trong bài 3.7, ta làm $C_3 + 100 \cdot C_1$ rồi lại $C_3 + 10 \cdot C_2$), giá trị định thức vẫn **giữ nguyên**.
    

### Ví dụ đơn giản

Hãy xem một định thức 2x2.

$$\Delta = \begin{vmatrix} 1 & 5 \\ 2 & 8 \end{vmatrix}$$

Giá trị của nó là $\Delta = (1 \times 8) - (5 \times 2) = 8 - 10 = -2$.

Bây giờ, hãy thử áp dụng tính chất 1. Ta sẽ lấy Hàng 2 trừ đi 2 lần Hàng 1: ($H_2 \leftarrow H_2 - 2 \cdot H_1$).

$$\Delta' = \begin{vmatrix} 1 & 5 \\ 2 - 2(1) & 8 - 2(5) \end{vmatrix}$$

$$\Delta' = \begin{vmatrix} 1 & 5 \\ 0 & 8 - 10 \end{vmatrix}$$

$$\Delta' = \begin{vmatrix} 1 & 5 \\ 0 & -2 \end{vmatrix}$$

Tính giá trị định thức mới:

$\Delta' = (1 \times -2) - (5 \times 0) = -2 - 0 = -2$.

**Kết quả:** $\Delta' = \Delta$. Giá trị định thức không hề thay đổi.

**Trong bài 3.7:** Ta đã dùng phép $C_3 \leftarrow C_3 + 100 \cdot C_1 + 10 \cdot C_2$. Phép này không làm thay đổi giá trị $\Delta$, nhưng nó giúp "lộ" ra các số $204, 527, 255$ ở cột 3.

---

## 2. Tính chất 2: Rút nhân tử chung (Tính chất tuyến tính)

> **Tính chất:** "Nếu tất cả các phần tử của **MỘT** cột (hoặc **MỘT** hàng) đều có nhân tử chung là $k$, ta có thể "rút" $k$ ra ngoài làm nhân tử chung của cả định thức."

### Giải thích rõ hơn

- Tính chất này cho phép bạn "kéo" một số $k$ ra khỏi _chỉ một hàng_ hoặc _chỉ một cột_.
    
- Điều này giúp bạn làm cho các con số bên trong định thức trở nên nhỏ hơn, dễ tính toán hơn.
    
- Nó cũng là chìa khóa để chứng minh tính chia hết (như trong bài 3.7).
    

### Ví dụ đơn giản

Hãy xem định thức sau:

$$\Delta = \begin{vmatrix} 3 & 7 \\ 6 & 5 \end{vmatrix}$$

Giá trị là $\Delta = (3 \times 5) - (7 \times 6) = 15 - 42 = -27$.

Nhìn vào Hàng 1, không có gì chung.

Nhìn vào Hàng 2, ta thấy $6 = 2 \times 3$ và $5 = 2 \times 2.5$ (không đẹp).

Nhìn vào Cột 1, ta thấy $3 = 3 \times 1$ và $6 = 3 \times 2$. À, Cột 1 có nhân tử chung là 3.

Hãy "rút" 3 ra ngoài Cột 1:

$$\Delta = \begin{vmatrix} 3 \times 1 & 7 \\ 3 \times 2 & 5 \end{vmatrix} = 3 \times \begin{vmatrix} 1 & 7 \\ 2 & 5 \end{vmatrix}$$

Bây giờ, tính giá trị vế bên phải:

$3 \times \left[ (1 \times 5) - (7 \times 2) \right] = 3 \times (5 - 14) = 3 \times (-9) = -27$.

**Kết quả:** Cả hai cách tính đều ra $-27$.

Trong bài 3.7: Sau khi ta tạo ra cột 3 là $\begin{pmatrix} 204 \\ 527 \\ 255 \end{pmatrix}$, ta biết rằng cả 3 số này đều chia hết cho 17. Tức là cột này có nhân tử chung là 17. Ta "rút" 17 ra ngoài:

$\Delta = 17 \times \begin{vmatrix} ... & 12 \\ ... & 31 \\ ... & 15 \end{vmatrix}$. Điều này chứng tỏ $\Delta$ là một bội số của 17.

---

## ⚠️ Cảnh báo sai lầm phổ biến: Phân biệt với Ma trận

Bạn phải **hết sức cẩn thận** để không nhầm lẫn tính chất này với phép nhân ma trận với một số.

- Với Ma trận:
    
    $k \times \begin{pmatrix} a & b \\ c & d \end{pmatrix} = \begin{pmatrix} ka & kb \\ kc & kd \end{pmatrix}$ (Nhân $k$ vào MỌI phần tử)
    
- Với Định thức (Tính chất 2):
    
    $k \times \begin{vmatrix} a & b \\ c & d \end{vmatrix} = \begin{vmatrix} ka & b \\ kc & d \end{vmatrix}$ (Chỉ nhân $k$ vào MỘT cột)
    
    Hoặc
    
    $k \times \begin{vmatrix} a & b \\ c & d \end{vmatrix} = \begin{vmatrix} ka & kb \\ c & d \end{vmatrix}$ (Chỉ nhân $k$ vào MỘT hàng)
    

Nói cách khác, nếu bạn có một định thức 3x3 và tất cả 3 hàng đều có nhân tử chung $k$, khi bạn rút $k$ từ mỗi hàng, bạn sẽ có $k^3$ ở bên ngoài:

$$\begin{vmatrix} k a_1 & k b_1 & k c_1 \\ k a_2 & k b_2 & k c_2 \\ k a_3 & k b_3 & k c_3 \end{vmatrix} = k \cdot k \cdot k \cdot \begin{vmatrix} a_1 & b_1 & c_1 \\ a_2 & b_2 & c_2 \\ a_3 & b_3 & c_3 \end{vmatrix} = k^3 \cdot \Delta$$


Chào bạn, sự hoang mang của bạn là hoàn toàn dễ hiểu! Đây chính là điểm khác biệt lớn nhất (và dễ gây nhầm lẫn nhất) giữa **phép toán với ma trận** và **tính chất của định thức**.

Điều bạn thấy "sai sai" là vì bạn đang liên tưởng đến phép nhân một số với _cả một ma trận_.

---

## 1. Phép nhân số với MA TRẬN (Cái bạn đang nghĩ đến)

Khi bạn nhân số $k$ với ma trận $A$, bạn phải nhân $k$ với TẤT CẢ các phần tử:

$$k \times \begin{pmatrix} a & b \\ c & d \end{pmatrix} = \begin{pmatrix} ka & kb \\ kc & kd \end{pmatrix}$$

---

## 2. Tính chất của ĐỊNH THỨC (Cái đang được áp dụng)

Định thức không phải là ma trận, nó là một **con số** được tính toán _từ_ ma trận. Nó có các tính chất riêng.

Tính chất (gọi là "tính tuyến tính") nói rằng:

> "Nếu bạn chỉ nhân **MỘT** hàng (hoặc **MỘT** cột) với số $k$, thì giá trị của định thức mới sẽ bằng $k$ nhân với định thức cũ."

**Hãy chứng minh bằng công thức 2x2:**

- Định thức gốc: $\Delta = \begin{vmatrix} 1 & 7 \\ 2 & 5 \end{vmatrix} = (1 \times 5) - (7 \times 2) = 5 - 14 = -9$.
    
- Định thức sau khi nhân 3 vào CỘT 1:
    
    $$\Delta' = \begin{vmatrix} 3 \times 1 & 7 \\ 3 \times 2 & 5 \end{vmatrix} = \begin{vmatrix} 3 & 7 \\ 6 & 5 \end{vmatrix}$$
    
- Tính giá trị $\Delta'$:
    
    $$\Delta' = (3 \times 5) - (7 \times 6) = 15 - 42 = -27$$
    

**Bây giờ so sánh:**

- $\Delta' = -27$
    
- $3 \times \Delta = 3 \times (-9) = -27$
    

Bạn thấy đấy, $\Delta' = 3 \times \Delta$.

Điều này chứng tỏ phép rút nhân tử chung:

$$\begin{vmatrix} 3 & 7 \\ 6 & 5 \end{vmatrix} = 3 \times \begin{vmatrix} 1 & 7 \\ 2 & 5 \end{vmatrix}$$

là HOÀN TOÀN CHÍNH XÁC.

---

### Tóm tắt để nhớ

- **Ma trận:** Nhân $k$ là nhân vào **TẤT CẢ**.
    
- **Định thức:** Rút $k$ ra là chỉ rút từ **MỘT HÀNG** hoặc **MỘT CỘT**.
    

Một hệ quả quan trọng:

Nếu bạn nhân cả ma trận $A$ (cấp $n \times n$) với $k$, thì định thức của nó sẽ là:

$$\det(k \cdot A) = k^n \cdot \det(A)$$

Ví dụ: $\begin{vmatrix} 3 \times 1 & 3 \times 7 \\ 3 \times 2 & 3 \times 5 \end{vmatrix}$ (nhân 3 vào CẢ 2 CỘT)

$= 3 \times \begin{vmatrix} 1 & 3 \times 7 \\ 2 & 3 \times 5 \end{vmatrix}$ (rút 3 từ Cột 1)

$= 3 \times 3 \times \begin{vmatrix} 1 & 7 \\ 2 & 5 \end{vmatrix}$ (rút 3 từ Cột 2)

$= 3^2 \times \begin{vmatrix} 1 & 7 \\ 2 & 5 \end{vmatrix}$