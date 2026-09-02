---
tags:
  - university
  - Math
---
Chào bạn, dựa vào dạng tổng quát của hệ phương trình tuyến tính trong hình ảnh bạn cung cấp, chúng ta có thể xây dựng một ví dụ cụ thể để dễ hình dung hơn.

Xét một hệ phương trình tuyến tính gồm $m=2$ phương trình và $n=2$ ẩn số ($x_1, x_2$).

$$
\begin{cases}
2x_1 + 3x_2 = 7 \\
x_1 - 4x_2 = -2
\end{cases}
$$

Trong ví dụ này, ta có thể xác định các thành phần tương ứng với dạng tổng quát:

* **Số phương trình**: $m = 2$
* **Số ẩn số**: $n = 2$
* **Các ẩn số**: $x_1, x_2$
* **Các hệ số của phương trình thứ nhất**: $a_{11} = 2$, $a_{12} = 3$
* **Các hệ số của phương trình thứ hai**: $a_{21} = 1$, $a_{22} = -4$
* **Các hằng số vế phải**: $b_1 = 7$, $b_2 = -2$

Dựa trên các định nghĩa trong hình:

* Vì số phương trình ($m=2$) bằng số ẩn ($n=2$), đây là một **hệ vuông**.
* Vì các hằng số $b_1, b_2$ không đồng thời bằng $0$, đây **không** phải là một **hệ thuần nhất**.

Hệ phương trình trên có thể được giải và có nghiệm duy nhất là $x_1 = 2$ và $x_2 = 1$.

Đúng vậy, **sử dụng ma trận là phương pháp chính, hiệu quả và có hệ thống nhất** để giải các hệ phương trình tuyến tính, đặc biệt là với các hệ có nhiều ẩn và nhiều phương trình.

Mặc dù bạn có thể giải các hệ đơn giản (2 hoặc 3 ẩn) bằng các phương pháp phổ thông như **phép thế** hoặc **cộng đại số**, nhưng các phương pháp đó trở nên rất cồng kềnh và dễ nhầm lẫn khi hệ phương trình lớn hơn. Ma trận cung cấp một công cụ mạnh mẽ hơn.

---

### ## Tại sao Ma trận lại hiệu quả?

Ma trận giúp chúng ta "gói gọn" toàn bộ hệ phương trình vào một dạng ký hiệu súc tích và áp dụng các thuật toán chuẩn hóa để tìm lời giải. Các phương pháp chính bao gồm:

#### **1. Phương pháp Ma trận nghịch đảo (Inverse Matrix Method)**
* **Ý tưởng**: Biểu diễn hệ phương trình dưới dạng $AX = B$.
    * $A$ là ma trận chứa các hệ số ($a_{ij}$).
    * $X$ là ma trận cột chứa các ẩn số ($x_1, x_2, ...$).
    * $B$ là ma trận cột chứa các hằng số vế phải ($b_1, b_2, ...$).
* **Cách giải**: Nếu ma trận $A$ là ma trận vuông và khả nghịch (có định thức khác 0), nghiệm của hệ sẽ là $X = A^{-1}B$.
* **Ưu điểm**: Công thức rất gọn gàng và đẹp về mặt lý thuyết.
* **Nhược điểm**: Chỉ áp dụng cho hệ vuông và việc tính ma trận nghịch đảo $A^{-1}$ khá phức tạp với các ma trận lớn.

#### **2. Quy tắc Cramer (Cramer's Rule)**
* **Ý tưởng**: Sử dụng định thức để tìm trực tiếp giá trị của từng ẩn.
* **Cách giải**: Mỗi ẩn $x_i$ được tính bằng công thức $x_i = \frac{D_i}{D}$, trong đó:
    * $D$ là định thức của ma trận hệ số $A$.
    * $D_i$ là định thức của ma trận $A$ sau khi đã thay thế cột thứ $i$ bằng cột hằng số $B$.
* **Ưu điểm**: Hiệu quả cho các hệ nhỏ (2x2, 3x3).
* **Nhược điểm**: Khối lượng tính toán tăng cực nhanh khi số ẩn tăng lên, không thực tế cho các hệ lớn.

#### **3. Phương pháp khử Gauss (Gaussian Elimination) ⚙️**
* **Đây là phương pháp nền tảng và phổ biến nhất.**
* **Ý tưởng**: Biến đổi hệ phương trình ban đầu thành một hệ mới có dạng "bậc thang" (dạng tam giác trên) mà vẫn giữ nguyên nghiệm. Từ đó, dễ dàng tìm ra nghiệm bằng cách thế ngược từ dưới lên.
* **Cách giải**:
    1.  Lập ma trận bổ sung $[A|B]$.
    2.  Sử dụng các phép biến đổi sơ cấp trên hàng (cộng, trừ, nhân hàng, hoán vị hàng) để đưa ma trận về dạng bậc thang.
    3.  Viết lại hệ phương trình từ ma trận bậc thang và giải.
* **Ưu điểm**: **Tổng quát nhất**. Áp dụng được cho mọi loại hệ phương trình (vuông, không vuông), có thể xác định được hệ có nghiệm duy nhất, vô số nghiệm hay vô nghiệm. Đây cũng là thuật toán cốt lõi mà máy tính sử dụng để giải hệ phương trình.

---

### ## Kết luận

Tóm lại, trong khi các phương pháp như thế và cộng đại số là những bước khởi đầu, **ma trận (đặc biệt là phương pháp khử Gauss)** mới thực sự là công cụ tiêu chuẩn, mạnh mẽ và có hệ thống để giải quyết triệt để các bài toán về hệ phương trình tuyến tính trong toán học, kỹ thuật, và khoa học máy tính.

---

Chắc chắn rồi! Chúng ta sẽ cùng nhau giải một hệ phương trình tuyến tính 3 ẩn bằng **phương pháp khử Gauss**, phương pháp nền tảng và thông dụng nhất.

Xét hệ phương trình sau:
$$
\begin{cases}
x + y + 2z = 9 \\
2x + 4y - 3z = 1 \\
3x + 6y - 5z = 0
\end{cases}
$$

---

### ### Bước 1: Lập ma trận bổ sung [A|B] ✍️

Đầu tiên, chúng ta biểu diễn hệ phương trình trên dưới dạng một ma trận duy nhất, gọi là **ma trận bổ sung**. Ma trận này gồm các hệ số của các ẩn ở bên trái và các hằng số ở vế phải, ngăn cách bởi một đường thẳng đứng.

$$
[A|B] =
\left[
\begin{array}{ccc|c}
1 & 1 & 2 & 9 \\
2 & 4 & -3 & 1 \\
3 & 6 & -5 & 0
\end{array}
\right]
$$

---

### ### Bước 2: Dùng phép biến đổi sơ cấp để đưa về dạng bậc thang ⚙️

Mục tiêu của chúng ta là biến đổi ma trận này để các phần tử nằm dưới đường chéo chính đều bằng $0$. Chúng ta sẽ sử dụng 3 **phép biến đổi sơ cấp trên hàng**:
1.  Nhân một hàng với một số khác $0$.
2.  Cộng một hàng với một hàng khác (đã được nhân với một số).
3.  Hoán đổi vị trí hai hàng.

**- Khử $x$ ở hàng 2 và hàng 3:**

Để đưa các hệ số ở vị trí $(2,1)$ và $(3,1)$ về $0$, ta thực hiện:
* Lấy **Hàng 2 trừ đi 2 lần Hàng 1** ($R_2 \rightarrow R_2 - 2R_1$)
* Lấy **Hàng 3 trừ đi 3 lần Hàng 1** ($R_3 \rightarrow R_3 - 3R_1$)

Ta có ma trận mới:
$$
\left[
\begin{array}{ccc|c}
1 & 1 & 2 & 9 \\
2-2(1) & 4-2(1) & -3-2(2) & 1-2(9) \\
3-3(1) & 6-3(1) & -5-3(2) & 0-3(9)
\end{array}
\right]
=
\left[
\begin{array}{ccc|c}
1 & 1 & 2 & 9 \\
0 & 2 & -7 & -17 \\
0 & 3 & -11 & -27
\end{array}
\right]
$$

**- Khử $y$ ở hàng 3:**

Bây giờ, ta cần đưa hệ số ở vị trí $(3,2)$ về $0$. Để làm điều này, ta sẽ tác động lên hàng 3 dựa vào hàng 2.
* Lấy **Hàng 3 trừ đi $\frac{3}{2}$ lần Hàng 2** ($R_3 \rightarrow R_3 - \frac{3}{2}R_2$)

Ta có ma trận cuối cùng ở **dạng bậc thang**:
$$
\left[
\begin{array}{ccc|c}
1 & 1 & 2 & 9 \\
0 & 2 & -7 & -17 \\
0 & 3 - \frac{3}{2}(2) & -11 - \frac{3}{2}(-7) & -27 - \frac{3}{2}(-17)
\end{array}
\right]
=
\left[
\begin{array}{ccc|c}
1 & 1 & 2 & 9 \\
0 & 2 & -7 & -17 \\
0 & 0 & -1/2 & -3/2
\end{array}
\right]
$$

---

### ### Bước 3: Giải hệ bằng phép thế ngược ✅

Bây giờ, ta viết lại hệ phương trình tương ứng với ma trận bậc thang ở trên:
$$
\begin{cases}
x + y + 2z = 9 & (1) \\
2y - 7z = -17 & (2) \\
-\frac{1}{2}z = -\frac{3}{2} & (3)
\end{cases}
$$
Hệ này rất dễ giải bằng cách đi từ dưới lên (gọi là **phép thế ngược**):

* **Từ phương trình (3):**
    $$-\frac{1}{2}z = -\frac{3}{2} \implies z = 3$$

* **Thế $z=3$ vào phương trình (2):**
    $$2y - 7(3) = -17 \implies 2y - 21 = -17 \implies 2y = 4 \implies y = 2$$

* **Thế $y=2$ và $z=3$ vào phương trình (1):**
    $$x + 2 + 2(3) = 9 \implies x + 8 = 9 \implies x = 1$$

---

### ### Kết quả

Nghiệm của hệ phương trình là $(x, y, z) = (1, 2, 3)$.

Bạn có thể thử thế các giá trị này vào hệ phương trình ban đầu để kiểm tra lại tính chính xác.


Chào bạn, câu hỏi của bạn rất hay! Rất nhiều người khi mới học cũng thắc mắc về điều này.

Cái gạch dọc đó **không phải là một phép toán**. Nó đơn thuần chỉ là một **"vách ngăn" trực quan** để giúp chúng ta dễ đọc và không bị nhầm lẫn.

Về bản chất, **đường gạch dọc đó đại diện cho dấu bằng (=)** trong hệ phương trình ban đầu.

---

### ## Phân tích rõ hơn

Hãy nhìn lại hệ phương trình và ma trận bổ sung của nó:

$$
\begin{cases}
1x + 1y + 2z &= \mathbf{9} \\
2x + 4y - 3z &= \mathbf{1} \\
3x + 6y - 5z &= \mathbf{0}
\end{cases}
\quad \longleftrightarrow \quad
\left[
\begin{array}{ccc|c}
1 & 1 & 2 & \mathbf{9} \\
2 & 4 & -3 & \mathbf{1} \\
3 & 6 & -5 & \mathbf{0}
\end{array}
\right]
$$

Như bạn thấy:

* **Phần bên trái của gạch dọc**: Chứa toàn bộ hệ số gắn liền với các ẩn $x, y, z$. Đây chính là **ma trận hệ số $A$**.
* **Phần bên phải của gạch dọc**: Chứa toàn bộ các hằng số ở vế phải của dấu bằng. Đây chính là **ma trận cột kết quả $B$**.

---

### ## Vậy mục đích của vách ngăn này là gì?

1.  **Để tổ chức thông tin 📋**: Nó giúp tách bạch rõ ràng đâu là hệ số của ẩn và đâu là kết quả. Khi thực hiện các phép biến đổi hàng (như cộng, trừ, nhân các hàng), việc có vách ngăn này giúp bạn nhớ phải áp dụng phép biến đổi đó cho **toàn bộ hàng**, bao gồm cả phần kết quả bên phải. Rất nhiều lỗi sai xảy ra do người giải quên biến đổi phần số sau vạch kẻ.

2.  **Để dễ dàng chuyển đổi ngược lại 🔁**: Sau khi bạn đã biến đổi ma trận về dạng bậc thang, vách ngăn này giúp bạn dễ dàng viết lại hệ phương trình mới tương ứng để giải ra nghiệm cuối cùng (như ở "Bước 3: Giải hệ bằng phép thế ngược" mà tôi đã trình bày).

Tóm lại, bạn có thể coi ma trận bổ sung $[A|B]$ là một cách viết tắt thông minh và có tổ chức cho cả một hệ phương trình tuyến tính, và đường gạch dọc chính là dấu hiệu để phân chia hai vế của phương trình.


Không, về mặt toán học thuần túy thì **không sai**, nhưng làm vậy là **cực kỳ không nên** vì nó dễ gây nhầm lẫn và làm tăng nguy cơ mắc lỗi.

Đường gạch dọc đó là một **quy ước ký hiệu** (notation convention), không phải là một phần bắt buộc của toán học. Giống như việc chúng ta viết số một triệu là `$1.000.000$` thay vì `$1000000$` để dễ đọc hơn. Bỏ dấu chấm đi không làm thay đổi giá trị của con số, nhưng nó khiến con số khó đọc hơn rất nhiều.

---
### ## Rủi ro khi bỏ vách ngăn là gì?

#### **1. Mất đi sự rõ ràng 👓**
Vách ngăn giúp bộ não của bạn ngay lập tức phân biệt được đâu là "hệ số của ẩn" và đâu là "kết quả". Nếu không có nó, ma trận chỉ là một khối các con số đồng nhất.

* **Có vách ngăn (Rõ ràng):**
    $$
    \left[
    \begin{array}{ccc|c}
    1 & 1 & 2 & 9 \\
    0 & 2 & -7 & -17
    \end{array}
    \right]
    $$
    Bạn ngay lập tức hiểu rằng hàng thứ hai tương ứng với phương trình `$2y - 7z = -17$`.

* **Không có vách ngăn (Dễ nhầm lẫn):**
    $$
    \left[
    \begin{array}{cccc}
    1 & 1 & 2 & 9 \\
    0 & 2 & -7 & -17
    \end{array}
    \right]
    $$
    Nhìn vào đây, một người (kể cả chính bạn khi xem lại) có thể vô tình diễn giải sai rằng đây là ma trận hệ số cho một hệ phương trình **4 ẩn** (`$x, y, z, w$`). Khi đó hàng thứ hai sẽ bị đọc nhầm thành `$2y - 7z - 17w = 0$`, dẫn đến kết quả sai hoàn toàn.

#### **2. Tăng nguy cơ lỗi tính toán 💥**
Vách ngăn như một lời nhắc nhở liên tục rằng "cột cuối cùng này khác biệt, nó là cột kết quả". Điều này rất quan trọng khi bạn thực hiện các phép biến đổi hàng, giúp bạn tránh được việc vô tình lấy một số ở cột kết quả để khử cho một số ở cột hệ số.

---
### ## Kết luận

**Hãy luôn giữ vách ngăn đó.** Nó không phải là một yêu cầu toán học bắt buộc, nhưng nó là một công cụ cực kỳ hữu ích để đảm bảo sự **rõ ràng, chính xác và tránh sai sót** khi làm việc với ma trận bổ sung. Trong mọi sách giáo khoa và tài liệu chuẩn, người ta đều sử dụng quy ước này vì lý do đó.


Chắc chắn rồi, chúng ta sẽ đi qua từng phép tính chi tiết trong Bước 2 của ví dụ đó.

Mục tiêu của bước này là biến đổi ma trận về **dạng bậc thang**, nghĩa là làm cho tất cả các số nằm dưới đường chéo chính (các số ở vị trí (2,1), (3,1) và (3,2)) trở thành số 0.

Ma trận ban đầu của chúng ta là:
$$ [A|B] = \left[ \begin{array}{ccc|c} 1 & 1 & 2 & 9 \\ 2 & 4 & -3 & 1 \\ 3 & 6 & -5 & 0 \end{array} \right] $$

---
### ## Giai đoạn 1: Khử $x$ ở Hàng 2 và Hàng 3

Mục tiêu ở đây là biến số `2` ở hàng 2 và số `3` ở hàng 3 thành số `0`. Ta sẽ dùng Hàng 1 (`R₁`) làm hàng chuẩn.

#### **Thao tác 1: Biến đổi Hàng 2 ($R_2 \rightarrow R_2 - 2R_1$)**

Để biến số `2` (ở vị trí `(2,1)`) thành `0`, ta lấy chính nó trừ đi 2 lần số `1` (ở vị trí `(1,1)`) tương ứng ở Hàng 1. Ta phải áp dụng phép tính này cho **tất cả các phần tử** của Hàng 2.

* **Cột 1:** $2 - 2 \times (1) = 2 - 2 = 0$
* **Cột 2:** $4 - 2 \times (1) = 4 - 2 = 2$
* **Cột 3:** $-3 - 2 \times (2) = -3 - 4 = -7$
* **Cột 4 (kết quả):** $1 - 2 \times (9) = 1 - 18 = -17$

➡️ Hàng 2 mới là: `[ 0   2   -7 | -17 ]`

#### **Thao tác 2: Biến đổi Hàng 3 ($R_3 \rightarrow R_3 - 3R_1$)**

Tương tự, để biến số `3` (ở vị trí `(3,1)`) thành `0`, ta lấy chính nó trừ đi 3 lần số `1` ở Hàng 1.

* **Cột 1:** $3 - 3 \times (1) = 3 - 3 = 0$
* **Cột 2:** $6 - 3 \times (1) = 6 - 3 = 3$
* **Cột 3:** $-5 - 3 \times (2) = -5 - 6 = -11$
* **Cột 4 (kết quả):** $0 - 3 \times (9) = 0 - 27 = -27$

➡️ Hàng 3 mới là: `[ 0   3   -11 | -27 ]`

Sau giai đoạn 1, ma trận của chúng ta trông như thế này:
$$ \left[ \begin{array}{ccc|c} 1 & 1 & 2 & 9 \\ 0 & 2 & -7 & -17 \\ 0 & 3 & -11 & -27 \end{array} \right] $$

---
### ## Giai đoạn 2: Khử $y$ ở Hàng 3

Bây giờ, mục tiêu cuối cùng là biến nốt số `3` ở vị trí `(3,2)` thành số `0`. Lần này, ta sẽ dùng Hàng 2 (`R₂`) làm hàng chuẩn để không làm ảnh hưởng đến số `0` mà ta đã tạo ra ở cột 1.

#### **Thao tác 3: Biến đổi Hàng 3 ($R_3 \rightarrow R_3 - \frac{3}{2}R_2$)**

Ta cần tìm một số $c$ sao cho $3 - c \times 2 = 0$. Dễ thấy $c = \frac{3}{2}$. Vậy, ta lấy Hàng 3 trừ đi $\frac{3}{2}$ lần Hàng 2.

* **Cột 1:** $0 - \frac{3}{2} \times (0) = 0$ (Đây là lý do ta dùng Hàng 2, để giữ nguyên số 0 này)
* **Cột 2:** $3 - \frac{3}{2} \times (2) = 3 - 3 = 0$
* **Cột 3:** $-11 - \frac{3}{2} \times (-7) = -11 + \frac{21}{2} = -\frac{22}{2} + \frac{21}{2} = -\frac{1}{2}$
* **Cột 4 (kết quả):** $-27 - \frac{3}{2} \times (-17) = -27 + \frac{51}{2} = -\frac{54}{2} + \frac{51}{2} = -\frac{3}{2}$

➡️ Hàng 3 mới là: `[ 0   0   -1/2 | -3/2 ]`

**Kết thúc Bước 2**, ta thu được ma trận ở dạng bậc thang hoàn chỉnh:
$$ \left[ \begin{array}{ccc|c} 1 & 1 & 2 & 9 \\ 0 & 2 & -7 & -17 \\ 0 & 0 & -1/2 & -3/2 \end{array} \right] $$
Từ đây, bạn đã sẵn sàng để chuyển sang Bước 3 và tìm nghiệm.



Để tính định thức của một ma trận vuông cấp 3, có hai phương pháp phổ biến và dễ áp dụng là **Quy tắc Sarrus** và **Phương pháp khai triển Laplace**.

### 1. Quy tắc Sarrus

Đây là phương pháp trực quan và dễ nhớ nhất để tính định thức cấp 3.

Cho ma trận $A$ cấp 3:
$$A = \begin{pmatrix} a & b & c \\ d & e & f \\ g & h & i \end{pmatrix}$$

Để tính định thức của $A$, ký hiệu là $\det(A)$ hoặc $|A|$, ta thực hiện các bước sau:

**Bước 1: Mở rộng ma trận**

Viết thêm cột thứ nhất và cột thứ hai vào bên phải của ma trận.
$$
\begin{array}{|ccc|cc}
a & b & c & a & b \\
d & e & f & d & e \\
g & h & i & g & h
\end{array}
$$

**Bước 2: Tính tổng các tích của các đường chéo chính**

Nhân các phần tử trên 3 đường chéo từ trên xuống dưới, từ trái sang phải rồi cộng chúng lại.

$$ \text{Tổng chéo chính} = (a \cdot e \cdot i) + (b \cdot f \cdot g) + (c \cdot d \cdot h) $$

**Bước 3: Tính tổng các tích của các đường chéo phụ**

Nhân các phần tử trên 3 đường chéo từ dưới lên trên, từ trái sang phải rồi cộng chúng lại.

$$ \text{Tổng chéo phụ} = (g \cdot e \cdot c) + (h \cdot f \cdot a) + (i \cdot d \cdot b) $$

**Bước 4: Tính định thức**

Lấy "Tổng chéo chính" trừ đi "Tổng chéo phụ".
$$\det(A) = (aei + bfg + cdh) - (gec + hfa + idb)$$

**Ví dụ:**

Tính định thức của ma trận $M$:
$$M = \begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \\ 7 & 8 & 9 \end{pmatrix}$$

* **Bước 1:** Viết thêm 2 cột đầu:
    $$
    \begin{array}{|ccc|cc}
    1 & 2 & 3 & 1 & 2 \\
    4 & 5 & 6 & 4 & 5 \\
    7 & 8 & 9 & 7 & 8
    \end{array}
    $$
* **Bước 2:** Tổng các đường chéo chính:
    $$ (1 \cdot 5 \cdot 9) + (2 \cdot 6 \cdot 7) + (3 \cdot 4 \cdot 8) = 45 + 84 + 96 = 225 $$
* **Bước 3:** Tổng các đường chéo phụ:
    $$ (7 \cdot 5 \cdot 3) + (8 \cdot 6 \cdot 1) + (9 \cdot 4 \cdot 2) = 105 + 48 + 72 = 225 $$
* **Bước 4:** Kết quả:
    $$ \det(M) = 225 - 225 = 0 $$

---

### 2. Phương pháp Khai triển Laplace (Khai triển theo dòng hoặc cột)

Phương pháp này có thể áp dụng cho ma trận vuông ở mọi cấp, nhưng cũng rất hiệu quả cho ma trận cấp 3. Nguyên tắc là đưa việc tính định thức cấp 3 về việc tính các định thức cấp 2.

Công thức tổng quát khai triển theo dòng $i$ là:
$$\det(A) = \sum_{j=1}^{3} (-1)^{i+j} a_{ij} M_{ij}$$

Trong đó:
* $a_{ij}$ là phần tử ở hàng $i$, cột $j$.
* $M_{ij}$ là định thức của ma trận con cấp 2, thu được bằng cách xóa đi hàng $i$ và cột $j$ của ma trận $A$.

Dấu $(-1)^{i+j}$ có thể được ghi nhớ theo ma trận dấu sau:
$$ \begin{pmatrix} + & - & + \\ - & + & - \\ + & - & + \end{pmatrix} $$

**Các bước thực hiện (ví dụ khai triển theo dòng 1):**

Cho ma trận $A$:
$$A = \begin{pmatrix} a & b & c \\ d & e & f \\ g & h & i \end{pmatrix}$$

Định thức được tính bằng cách lấy từng phần tử của dòng 1 nhân với định thức con tương ứng (với dấu phù hợp).

$$\det(A) = a \cdot \begin{vmatrix} e & f \\ h & i \end{vmatrix} - b \cdot \begin{vmatrix} d & f \\ g & i \end{vmatrix} + c \cdot \begin{vmatrix} d & e \\ g & h \end{vmatrix}$$

Nhớ lại rằng định thức cấp 2 $\begin{vmatrix} x & y \\ z & w \end{vmatrix} = xw - yz$. Áp dụng vào công thức trên:
$$\det(A) = a(ei - fh) - b(di - fg) + c(dh - eg)$$
$$\det(A) = aei - afh - bdi + bfg + cdh - ceg$$

Đây chính là công thức giống với kết quả của quy tắc Sarrus.

**Mẹo:** Để tính toán đơn giản hơn, bạn nên chọn khai triển theo dòng hoặc cột nào có chứa nhiều số 0 nhất.

**Ví dụ:**

Tính định thức của ma trận $N$:
$$N = \begin{pmatrix} 3 & 0 & 5 \\ 2 & 1 & 3 \\ 1 & -2 & 4 \end{pmatrix}$$

Ta có thể khai triển theo dòng 1 vì nó có chứa số 0.

$$\det(N) = +3 \cdot \begin{vmatrix} 1 & 3 \\ -2 & 4 \end{vmatrix} - 0 \cdot \begin{vmatrix} 2 & 3 \\ 1 & 4 \end{vmatrix} + 5 \cdot \begin{vmatrix} 2 & 1 \\ 1 & -2 \end{vmatrix}$$
$$\det(N) = 3 \cdot ((1)(4) - (3)(-2)) - 0 + 5 \cdot ((2)(-2) - (1)(1))$$
$$\det(N) = 3 \cdot (4 - (-6)) + 5 \cdot (-4 - 1)$$
$$\det(N) = 3 \cdot (10) + 5 \cdot (-5)$$
$$\det(N) = 30 - 25 = 5$$

Video này cung cấp một ví dụ trực quan về cách áp dụng công thức Sarrus để tính định thức ma trận cấp 3 một cách nhanh chóng.
[Đại số tuyến tính - Công thức Sarrus](https://www.youtube.com/watch?v=uDNi0wn7Iew)

