---
tags:
  - university
  - Math
---


## 📚 Bài Toán 1

**Đề bài:** Tính tích phân $I = \iint_D (x^2 + 2xy + 2)\,dxdy$, trong đó $D$ là miền giới hạn bởi các đường: $y = -x$, $x = 0$, $y = 1$.


## 📝 Lời Giải 1

### 1. Xác định Miền Tích Phân $D$

Miền $D$ được giới hạn bởi các đường thẳng:

- $L_1: y = -x$
- $L_2: x = 0$ (trục $Oy$)
- $L_3: y = 1$

**Tìm tọa độ các giao điểm:**

- $L_1 \cap L_2$: $y = -0 = 0$. Giao điểm là $A(0, 0)$.
- $L_1 \cap L_3$: $1 = -x \Rightarrow x = -1$. Giao điểm là $B(-1, 1)$.
- $L_2 \cap L_3$: Giao điểm là $C(0, 1)$.

Miền $D$ là tam giác vuông $ABC$ với các đỉnh $A(0, 0)$, $B(-1, 1)$, $C(0, 1)$.

### 2. Thiết lập Cận Tích Phân

Để tính tích phân kép, ta biểu diễn miền $D$ là một **miền đơn giản loại I** (lấy tích phân theo $x$ trước, $y$ sau).

Ta có:

- $y$ chạy từ $0$ đến $1$ ($0 \le y \le 1$).
    
- Với một giá trị $y$ cố định, $x$ chạy từ đường thẳng $y = -x$ (tức là $x = -y$) đến đường thẳng $x = 0$.
    

Vậy, miền $D$ được xác định bởi:

$$D = \{(x, y) \mid 0 \le y \le 1, \quad -y \le x \le 0\}$$

Tích phân $I$ trở thành:

$$I = \int_0^1 \left[ \int_{-y}^0 (x^2 + 2xy + 2)\,dx \right] dy$$

### 3. Tính Tích Phân

#### **Bước 3.1. Tính tích phân bên trong (theo $x$):**

$$J(y) = \int_{-y}^0 (x^2 + 2xy + 2)\,dx$$

Nguyên hàm theo $x$ (coi $y$ là hằng số) là: $\frac{x^3}{3} + x^2y + 2x$.

Thế cận:

$$J(y) = \left[ \frac{x^3}{3} + x^2y + 2x \right] \Biggr|_{x=-y}^{x=0}$$

$$J(y) = \left( \frac{0^3}{3} + 0^2y + 2(0) \right) - \left( \frac{(-y)^3}{3} + (-y)^2y + 2(-y) \right)$$

$$J(y) = 0 - \left( -\frac{y^3}{3} + y^3 - 2y \right)$$

$$J(y) = \frac{y^3}{3} - y^3 + 2y = \frac{y^3 - 3y^3}{3} + 2y$$

$$J(y) = \mathbf{-\frac{2y^3}{3} + 2y}$$

#### **Bước 3.2. Tính tích phân bên ngoài (theo $y$):**

$$I = \int_0^1 \left( -\frac{2y^3}{3} + 2y \right) dy$$

Nguyên hàm theo $y$ là: $-\frac{2}{3} \cdot \frac{y^4}{4} + 2 \cdot \frac{y^2}{2} = -\frac{y^4}{6} + y^2$.

Thế cận:

$$I = \left[ -\frac{y^4}{6} + y^2 \right] \Biggr|_0^1$$

$$I = \left( -\frac{1^4}{6} + 1^2 \right) - \left( -\frac{0^4}{6} + 0^2 \right)$$

$$I = \left( -\frac{1}{6} + 1 \right) - 0$$

$$I = \frac{-1 + 6}{6} = \mathbf{\frac{5}{6}}$$

### 4. Kết Luận

Giá trị của tích phân là:

$$I = \frac{5}{6}$$

---




---

# Nền tảng kiến thức quan trọng 
Tuyệt vời! Để có thể làm và hiểu tốt dạng bài toán tính tích phân kép như thế này ($I = \iint_D f(x, y)\,dxdy$), bạn cần nắm vững những kiến thức nền tảng sau đây, chủ yếu thuộc về **Giải tích đa biến (Calculus III)** và **Giải tích hàm một biến (Calculus I & II)**.

## 🧠 Kiến Thức Nền Tảng Cần Thiết

### 1. Giải Tích Hàm Một Biến (Kiến thức cơ sở)

Kiến thức này là bắt buộc để thực hiện các phép tính cuối cùng:

- **Tính Nguyên Hàm và Tích Phân Xác Định:** Bạn phải thành thạo các quy tắc tìm nguyên hàm cơ bản (ví dụ: $\int x^n dx = \frac{x^{n+1}}{n+1} + C$) và cách áp dụng **Công thức Newton-Leibniz** để tính tích phân xác định (thế cận).
    
- **Các Quy Tắc Đạo Hàm và Tích Phân Cơ Bản:** Như quy tắc tổng, hiệu, hằng số nhân.
    

---

### 2. Định Nghĩa Tích Phân Kép

- **Ý Nghĩa Hình Học:** Hiểu rằng tích phân kép $\iint_D f(x, y)\,dA$ của hàm $f(x, y) \ge 0$ biểu diễn **thể tích** của khối nằm dưới mặt $z = f(x, y)$ và phía trên miền $D$ trong mặt phẳng $Oxy$.
    
- **Tính Chất Tuyến Tính:** Tích phân kép có tính chất tuyến tính (tách tổng, đưa hằng số ra ngoài).
    

---

### 3. Xác Định và Biểu Diễn Miền Tích Phân $D$ (Quan trọng nhất)

Đây là bước khó nhất và quan trọng nhất trong dạng bài này:

- **Nhận Dạng Miền $D$:** Cần biết cách vẽ đồ thị và nhận diện miền $D$ được giới hạn bởi các đường đã cho (đường thẳng, parabol, đường tròn, ...).
    
- **Miền Đơn Giản (Type I & Type II):**
    
    - Miền loại I ($dxdy$): Miền $D$ có thể được mô tả bởi:
        
        $$a \le x \le b, \quad g_1(x) \le y \le g_2(x)$$
        
    - Miền loại II ($dydx$): Miền $D$ có thể được mô tả bởi:
        
        $$c \le y \le d, \quad h_1(y) \le x \le h_2(y)$$
        
    - **Kỹ năng:** Bạn phải biết cách **chuyển đổi** qua lại giữa hai loại miền này bằng cách giải phương trình giới hạn theo biến ngược lại (ví dụ: từ $y = -x$ chuyển thành $x = -y$).
        

---

### 4. Công Thức Tính Tích Phân Kép (Fubini's Theorem)

- **Chuyển đổi về Tích Phân Lặp:** Hiểu rằng tích phân kép được tính bằng cách thực hiện hai lần tích phân đơn liên tiếp (tích phân lặp).
    
    - Nếu dùng miền loại I:
        
        $$I = \int_a^b \left[ \int_{g_1(x)}^{g_2(x)} f(x, y)\,dy \right] dx$$
        
    - Nếu dùng miền loại II:
        
        $$I = \int_c^d \left[ \int_{h_1(y)}^{h_2(y)} f(x, y)\,dx \right] dy$$
        
- **Quy Tắc Tính Toán:** Luôn tính tích phân bên trong trước (coi biến còn lại là hằng số), sau đó dùng kết quả để tính tích phân bên ngoài.
    
    - Khi tính $\int \dots dy$, coi $x$ là hằng số.
        
    - Khi tính $\int \dots dx$, coi $y$ là hằng số.
        

---

**Tóm lại**, để giải bài toán, bạn thực hiện theo các bước sau:

1. **Vẽ hình** và **Xác định miền $D$** (Bước quan trọng nhất).
    
2. **Chọn thứ tự tích phân** ($dxdy$ hoặc $dydx$) và **thiết lập cận** cho phù hợp.
    
3. **Tính tích phân bên trong** (giữ nguyên biến bên ngoài).
    
4. **Tính tích phân bên ngoài** (thế cận và tìm kết quả cuối cùng).
    




# BÁO CÁO CHUYÊN SÂU: TÍCH PHÂN KÉP (DOUBLE INTEGRALS) – NỀN TẢNG LÝ THUYẾT, KỸ THUẬT TÍNH TOÁN, VÀ ỨNG DỤNG TRONG PHÂN TÍCH TOÁN HỌC

## I. Nhập môn và Xây dựng Định nghĩa Nghiêm ngặt

### 1.1. Khái niệm Tổng quan: Mở rộng từ Tích phân Xác định (1D)

Lý thuyết về Tích phân kép là một sự mở rộng tự nhiên và cần thiết của Tích phân Xác định (Tích phân Riemann) từ không gian một chiều sang không gian hai chiều. Trong giải tích một biến, tích phân xác định của hàm $f(x)$ trên đoạn $[a, b]$ được định nghĩa là giới hạn của Tổng Riemann.1 Tổng Riemann $\sigma$ được tính bằng công thức:

$$\sigma = \sum_{i=1}^{n} f(\xi_i) \Delta x_i$$

Trong đó, $\Delta x_i$ là chiều dài của đoạn chia thứ $i$, và $f(\xi_i)$ là giá trị của hàm tại một điểm đại diện $\xi_i$ trong đoạn đó. Ý nghĩa hình học của giới hạn này là tính toán diện tích có dấu nằm dưới đồ thị của hàm số $f(x)$.1

Tuy nhiên, khi nghiên cứu các hiện tượng vật lý hoặc hình học trong không gian hai chiều, chẳng hạn như tính toán khối lượng của một tấm mỏng hoặc thể tích của một vật thể ba chiều, miền lấy tích phân không còn là một đoạn thẳng mà là một miền phẳng $D$ (miền lấy tích phân) trong mặt phẳng $Oxy$. Sự chuyển đổi này đòi hỏi một công cụ toán học mới, đó chính là Tích phân kép. Mục tiêu cốt lõi của Tích phân kép là xác định thể tích nằm dưới mặt cong $z = f(x, y)$ và phía trên miền $D$.

### 1.2. Định nghĩa Tích phân Kép thông qua Tổng Riemann cho Hàm Hai biến

Việc xây dựng định nghĩa Tích phân kép đòi hỏi tính chặt chẽ tương tự như trong không gian một chiều, bắt đầu bằng việc phân hoạch miền $D$ và tính tổng các thể tích xấp xỉ.

**Xấp xỉ Thể tích và Tổng Riemann 2D**

Giả sử hàm số $f(x, y)$ được xác định và liên tục trên một miền đóng và bị chặn $D$ trong mặt phẳng $Oxy$. Để xấp xỉ thể tích nằm dưới mặt $z = f(x, y)$ và phía trên $D$, ta tiến hành phân hoạch miền $D$ thành $n$ miền con (thường là các hình chữ nhật nhỏ) có diện tích tương ứng là $\Delta S_i$, với $i = 1, 2, \ldots, n$.2

Trên mỗi miền con $\Delta S_i$, ta chọn một điểm $P_i(x_i, y_i)$ tùy ý. Khi đó, thể tích của hình trụ con có đáy là $\Delta S_i$ và chiều cao là $f(x_i, y_i)$ được tính xấp xỉ là $f(x_i, y_i) \Delta S_i$.2 Tổng của các thể tích xấp xỉ này, gọi là Tổng Riemann hai chiều, là:

$$V_n = \sum_{i=1}^{n} f(x_i, y_i) \Delta S_i$$

Trong trường hợp $f(x, y)$ là hàm dương, Tổng Riemann kép này biểu thị tổng của thể tích các cột xấp xỉ, và là giá trị gần đúng của thể tích nằm dưới đồ thị của $f$.3

**Định nghĩa Chính thức và Điều kiện Khả tích**

Thể tích chính xác $V$ được tìm thấy bằng cách cho số lượng miền con $n$ tiến ra vô cùng, đồng thời giảm kích thước của mỗi miền con. Để đảm bảo tính chính xác và độc lập của kết quả đối với cách phân hoạch, yêu cầu nghiêm ngặt hơn so với tích phân 1D phải được áp dụng: đường kính lớn nhất của mỗi miền con ($d_i$) phải tiến về 0. Đường kính $d_i$ của một miền con là khoảng cách lớn nhất giữa hai điểm bất kỳ thuộc miền đó.2 Yêu cầu này, $\max(d_i) \to 0$, là cần thiết. Trong không gian 2D, việc chỉ yêu cầu diện tích $\Delta S_i \to 0$ là chưa đủ, vì miền $D$ có thể bị chia thành các phần tử rất dài và hẹp, làm cho việc xấp xỉ không đồng đều. Yêu cầu $\max(d_i) \to 0$ đảm bảo rằng phép phân hoạch ngày càng trở nên "tinh tế" hơn theo mọi hướng, và kết quả tích phân là độc lập với hình dạng phân hoạch.

Tích phân kép của hàm $f(x, y)$ trên miền $D$ được định nghĩa là giới hạn của Tổng Riemann $V_n$:

$$\iint_D f(x, y) dA = \lim_{\max d_i \to 0} \sum_{i=1}^{n} f(x_i, y_i) \Delta S_i$$

Nếu giới hạn này tồn tại và có giá trị hữu hạn $V$ không phụ thuộc vào cách chia miền $D$ hay cách chọn điểm $P_i$, hàm $f(x, y)$ được gọi là khả tích trên $D$, và giới hạn $V$ đó là Tích phân kép.2 Trong ký hiệu tích phân, $dA$ thường được thay thế bằng $dxdy$ hoặc $dy dx$.

**Ý nghĩa Hình học Sâu sắc: Thể tích Ròng (Net Signed Volume)**

Trong các mô hình ứng dụng, hàm $f(x, y)$ không nhất thiết phải dương. Khi $f(x, y)$ nhận giá trị âm, tích phân kép thực sự biểu thị **thể tích ròng** (Net Signed Volume). Khái niệm này là sự khác biệt giữa tổng thể tích nằm phía trên mặt phẳng $Oxy$ và tổng thể tích nằm phía dưới mặt phẳng $Oxy$. Sự hiểu biết này là cốt lõi cho các mô hình vật lý nơi $f(x, y)$ có thể đại diện cho các đại lượng có dấu (ví dụ, nhiệt độ dưới 0 hoặc điện tích âm).

## II. Các Tính chất Cơ bản và Định lý Nền tảng

Để thực hiện các phép tính và chứng minh lý thuyết trong Giải tích đa biến, các tính chất cơ bản của tích phân kép phải được xác lập. Các tính chất này kế thừa trực tiếp từ tích phân xác định 1D.

### 2.1. Tính chất Tuyến tính và Đơn điệu

Tích phân kép là một toán tử tuyến tính, một đặc điểm cho phép giải quyết các bài toán phức hợp bằng cách phân rã chúng thành các thành phần đơn giản hơn.

- Tính chất Cộng tính đối với Hàm: Nếu $f(x, y)$ và $g(x, y)$ là các hàm số khả tích trên miền $D$, thì tổng của chúng cũng khả tích, và tích phân của tổng bằng tổng các tích phân 4:
    
    $$\iint_D [f(x, y) + g(x, y)] dxdy = \iint_D f(x, y)dxdy + \iint_D g(x, y)dxdy$$
    
- Tính chất Nhân với Hằng số (Tính thuần nhất): Nếu $k$ là một hằng số, thì 4:
    
    $$\iint_D kf(x, y)dxdy = k \iint_D f(x, y)dxdy$$
    
- Tính chất Cộng tính đối với Miền: Nếu miền lấy tích phân $D$ có thể được phân chia thành hai miền không chồng lấn $D_1$ và $D_2$ (chỉ giao nhau tại biên), thì:
    
    $$\iint_D f dA = \iint_{D_1} f dA + \iint_{D_2} f dA$$
    
    Tính chất này cực kỳ quan trọng trong việc tính toán trên các miền có hình dạng phức tạp, cho phép phân tích miền thành các phần đơn giản hơn.
    

Tính chất tuyến tính cho phép các nhà toán học và kỹ sư phân tích các hệ thống vật lý phức tạp (như tính toán khối lượng hoặc momen quán tính) bằng cách phân tích và cộng dồn các ảnh hưởng riêng lẻ. Ví dụ, nếu mật độ vật chất $\rho(x, y)$ là tổ hợp tuyến tính của nhiều thành phần vật liệu, khối lượng tổng có thể được tính bằng cách tích phân từng thành phần riêng biệt và cộng chúng lại, đảm bảo tính modular hóa của phép tính.

- **Tính chất Bảo toàn Bất đẳng thức (Monotonicity):**
    
    - Nếu $f(x, y) \ge 0$ trên $D$, thì $\iint_D f(x, y) dA \ge 0$.
        
    - Nếu $f(x, y) \ge g(x, y)$ trên $D$, thì $\iint_D f dA \ge \iint_D g dA$.
        

Bảng sau tóm tắt sự tương đồng giữa các tính chất cơ bản trong tích phân xác định và tích phân kép, nhấn mạnh rằng tích phân kép là một phép toán bảo toàn cấu trúc đại số:

Bảng 1: So sánh Tính chất cơ bản của Tích phân Xác định và Tích phân Kép

|**Tính chất**|**Tích phân Xác định (1D)**|**Tích phân Kép (2D)**|**Ghi chú**|
|---|---|---|---|
|Tuyến tính (Hằng số)|$\int kf(x)dx = k \int f(x)dx$|$\iint kf(x, y)dxdy = k \iint f(x, y)dxdy$|Áp dụng cho $k$ là hằng số|
|Cộng tính (Hàm)|$\int [f+g]dx = \int fdx + \int gdx$|$\iint [f+g]dxdy = \iint fdxdy + \iint gdxdy$|Tách hàm dưới dấu tích phân|
|Giá trị Trung bình|$f_{tb} = \frac{1}{b-a} \int_a^b f(x)dx$|$f_{tb} = \frac{1}{Area(D)} \iint_D f(x,y)dxdy$|Chia cho độ dài miền (1D) hoặc diện tích miền (2D)|

### 2.2. Định lý Giá trị Trung bình (Mean Value Theorem - MVT)

Định lý Giá trị Trung bình (MVT) cho tích phân kép là một định lý tồn tại quan trọng, đảm bảo rằng giá trị trung bình của hàm số trên một miền phẳng thực sự được đạt tới tại một điểm nào đó bên trong miền đó.

**Giá trị Trung bình Hàm Hai biến**

Giá trị trung bình $f_{tb}$ của hàm hai biến $f(x, y)$ trên miền $D$ được định nghĩa bằng cách lấy tích phân kép của hàm trên miền đó và chia cho diện tích của miền $D$, ký hiệu là $Area(D)$ 5:

$$f_{tb} = \frac{1}{Area(D)} \iint_D f(x, y) dA$$

Công thức này là sự mở rộng trực tiếp của công thức tính giá trị trung bình trong tích phân xác định (chia cho độ dài khoảng).5

**Phát biểu Định lý MVT cho Tích phân Kép**

Nếu $f(x, y)$ là hàm liên tục trên miền đóng và bị chặn $D$, thì phải tồn tại ít nhất một điểm $(x_0, y_0) \in D$ sao cho giá trị của hàm tại điểm đó bằng giá trị trung bình của hàm trên toàn miền $D$:

$$\iint_D f(x, y) dA = f(x_0, y_0) \cdot Area(D)$$

Sự liên tục của hàm $f$ trên $D$ là điều kiện đủ để đảm bảo tính tồn tại này. Điều này chứng tỏ rằng giá trị trung bình không chỉ là một giá trị tính toán thuần túy, mà nó còn là một giá trị thực sự mà hàm số đạt được. Sự đảm bảo về tính tồn tại này rất quan trọng trong các chứng minh toán học và trong các mô hình hóa vật lý, nơi các giá trị trung bình thường được sử dụng để đại diện cho trạng thái cân bằng của hệ thống.

### 2.3. Định lý Fubini – Chuyển đổi sang Tích phân Lặp (Iterated Integrals)

Trong thực tế tính toán, việc tính toán giới hạn của Tổng Riemann là không khả thi. Định lý Fubini cung cấp phương pháp thực tế để chuyển đổi tích phân kép thành chuỗi các tích phân xác định, gọi là tích phân lặp.

**Nền tảng của Định lý Fubini**

Định lý Fubini khẳng định rằng nếu hàm $f(x, y)$ là liên tục trên miền chữ nhật $R = [a, b] \times [c, d]$, thì tích phân kép có thể được tính bằng cách tích phân lặp theo bất kỳ thứ tự nào:

$$\iint_R f(x, y) dA = \int_a^b \left[ \int_c^d f(x, y) dy \right] dx = \int_c^d \left[ \int_a^b f(x, y) dx \right] dy$$

**Mở rộng cho Miền Tổng quát**

Đối với các miền $D$ không phải hình chữ nhật (miền Loại I hoặc Loại II), Định lý Fubini vẫn áp dụng, nhưng cần xác định các giới hạn tích phân bên trong dựa trên hình dạng của miền.

1. Miền Loại I (Simple y): $D = \{(x, y) \mid a \le x \le b, g_1(x) \le y \le g_2(x)\}$.
    
    $$\iint_D f(x, y) dA = \int_a^b \int_{g_1(x)}^{g_2(x)} f(x, y) dy dx$$
    
2. Miền Loại II (Simple x): $D = \{(x, y) \mid c \le y \le d, h_1(y) \le x \le h_2(y)\}$.
    
    $$\iint_D f(x, y) dA = \int_c^d \int_{h_1(y)}^{h_2(y)} f(x, y) dx dy$$
    
    Định lý Fubini cho phép chúng ta tính toán thể tích chính xác bằng cách thực hiện hai lần tích phân xác định liên tiếp, mỗi lần cố định một biến.
    

## III. Kỹ thuật Đổi biến số và Vai trò của Jacobian

Khi miền lấy tích phân $D$ hoặc hàm $f(x, y)$ có hình dạng phức tạp trong hệ tọa độ Descartes (vuông góc), việc tính toán tích phân kép trở nên khó khăn. Kỹ thuật đổi biến số cho phép chuyển tích phân sang một hệ tọa độ mới ($u, v$) nơi miền tích phân $D^*$ đơn giản hơn (ví dụ: hình chữ nhật) hoặc hàm dưới dấu tích phân được đơn giản hóa.

### 3.1. Cơ sở Lý thuyết về Đổi biến số Tổng quát

Một phép đổi biến số được xác định bởi ánh xạ $T$ từ mặt phẳng $uv$ sang mặt phẳng $xy$: $x = x(u, v)$ và $y = y(u, v)$. Khi áp dụng phép đổi biến này, diện tích vi phân $dA = dxdy$ sẽ bị co giãn hoặc mở rộng. Để bảo toàn giá trị của tích phân, cần phải đưa vào một hệ số điều chỉnh gọi là Định thức Jacobian.

### 3.2. Định thức Jacobian và Công thức Đổi biến

**Định nghĩa Jacobian**

Định thức Jacobian $J$ của phép biến đổi $T$ là định thức của ma trận các đạo hàm riêng của $x$ và $y$ theo $u$ và $v$:

$$J = \frac{\partial(x, y)}{\partial(u, v)} = \det \begin{vmatrix} \frac{\partial x}{\partial u} & \frac{\partial x}{\partial v} \\ \frac{\partial y}{\partial u} & \frac{\partial y}{\partial v} \end{vmatrix} = \frac{\partial x}{\partial u} \frac{\partial y}{\partial v} - \frac{\partial x}{\partial v} \frac{\partial y}{\partial u}$$

**Công thức Đổi biến Tổng quát**

Công thức đổi biến số cho tích phân kép là:

$$\iint_D f(x, y) dxdy = \iint_{D^*} f(x(u, v), y(u, v)) \left| J \right| du dv$$

Trong công thức này, $|J|$ (giá trị tuyệt đối của Jacobian) đóng vai trò là hệ số tỷ lệ co giãn (area scaling factor). Nếu ta phân hoạch miền $D^*$ trong mặt phẳng $uv$ thành các phần tử diện tích vi phân $du dv$, thì khi ánh xạ sang miền $D$ trong mặt phẳng $xy$, các phần tử này sẽ trở thành các hình bình hành xấp xỉ có diện tích là $|J| du dv$. Sự hiện diện của $|J|$ đảm bảo rằng tổng thể tích (hoặc tổng lượng) được tính trong hệ tọa độ mới là chính xác và tương đương với tổng lượng được tính trong hệ tọa độ ban đầu.

Việc áp dụng các nguyên tắc đổi biến số, sử dụng định thức Jacobian để bảo toàn diện tích vi phân, là một nguyên tắc cơ bản và nhất quán trong toàn bộ Giải tích Vector và Tích phân Bội. Các tài liệu nâng cao thậm chí còn mở rộng khái niệm này sang tích phân bội ba (ví dụ, tọa độ cầu) 6, nơi Jacobian trở thành một hệ số tỷ lệ thể tích. Tính nhất quán này củng cố tính chặt chẽ của lý thuyết giải tích.

### 3.3. Trường hợp Tiêu chuẩn: Tọa độ Cực (Polar Coordinates)

Tọa độ Cực là phép đổi biến được sử dụng thường xuyên nhất trong tích phân kép, đặc biệt khi miền $D$ hoặc hàm $f(x, y)$ liên quan đến đối xứng tròn, hoặc khi hàm chứa biểu thức $x^2 + y^2$.6

**Công thức Chuyển đổi và Jacobian**

Tọa độ Cực của một điểm $M(x, y)$ là bộ $(r, \phi)$, trong đó $r$ là khoảng cách từ gốc tọa độ và $\phi$ là góc tạo bởi đoạn thẳng $OM$ với trục $Ox$. Công thức chuyển đổi là:

$$\begin{cases} x = r \cos \phi \\ y = r \sin \phi \end{cases}$$

Trong đó, $r \ge 0$ và $0 \le \phi < 2\pi$.

Việc tính Định thức Jacobian cho phép đổi biến này là bắt buộc:

$$J = \frac{\partial(x, y)}{\partial(r, \phi)} = \det \begin{vmatrix} \frac{\partial x}{\partial r} & \frac{\partial x}{\partial \phi} \\ \frac{\partial y}{\partial r} & \frac{\partial y}{\partial \phi} \end{vmatrix} = \det \begin{vmatrix} \cos \phi & -r \sin \phi \\ \sin \phi & r \cos \phi \end{vmatrix}$$

$$J = (\cos \phi)(r \cos \phi) - (-r \sin \phi)(\sin \phi) = r \cos^2 \phi + r \sin^2 \phi = r (\cos^2 \phi + \sin^2 \phi) = r$$

**Phần tử Diện tích và Công thức Tích phân Cực**

Vì $r \ge 0$, giá trị tuyệt đối của Jacobian là $|J| = r$. Do đó, phần tử diện tích vi phân trong hệ tọa độ Descartes, $dA = dxdy$, được thay thế bằng:

$$dA = r dr d\phi$$

Công thức tích phân kép trong tọa độ cực là:$$

\iint_D f(x, y) dxdy = \iint_{D'} f(r \cos \phi, r \sin \phi) r dr d\phi

$$Như đã đề cập, việc tính toán tích phân kép trong tọa độ cực thường đơn giản hơn rất nhiều, đặc biệt là khi miền $D$ có dạng hình tròn, quạt tròn, hoặc khi hàm dưới dấu tích phân có biểu thức $x^2 + y^2$ (được thay thế bằng $r^2$).[6] Bảng 2: Bảng Chuyển đổi Tọa độ và Jacobian cho Tích phân Kép | **Tọa độ Mới ($u, v$)** | **Công thức Chuyển đổi ($x, y$ sang $u, v$)** | **Định thức Jacobian ($|J|$)** | **Phần tử Diện tích $dA$** | |---|---|---|---| | Descartes (u=x, v=y) | $x=u, y=v$ | 1 | $dxdy$ | | Cực (Polar) ($u=r, v=\phi$) | $x = r \cos \phi, y = r \sin \phi$ | $r$ | $r dr d\phi$ | | Tổng quát | $x = x(u,v), y = y(u,v)$ | $\left| \frac{\partial(x,y)}{\partial(u,v)} \right|$ | $|J| dudv$ | ## IV. Ứng dụng Thực tiễn của Tích phân Kép Tích phân kép là một công cụ phân tích không thể thiếu trong nhiều lĩnh vực khoa học và kỹ thuật, cho phép tính toán tổng lượng của các đại lượng phân bố trên một miền phẳng. ### 4.1. Ứng dụng Hình học **Tính Diện tích Miền Phẳng $D$** Nếu hàm dưới dấu tích phân được đặt bằng $f(x, y) = 1$, tích phân kép sẽ tính toán diện tích của miền $D$: $$Area(D) = \iint_D 1 dxdy$$ **Tính Thể tích** Ứng dụng cơ bản nhất của tích phân kép là tính thể tích $V$ của vật thể nằm dưới mặt cong $z = f(x, y)$ và phía trên miền $D$ trong mặt phẳng $Oxy$. $$V = \iint_D f(x, y) dA$$ Khi miền lấy tích phân là hình chữ nhật $R = [a, b] \times [c, d]$, thể tích có thể được xấp xỉ ban đầu bằng tổng của các thể tích cột xấp xỉ $V_n$.[2, 3] ### 4.2. Ứng dụng Vật lý và Cơ học Tích phân kép được sử dụng rộng rãi để mô hình hóa và tính toán các tính chất vật lý của các vật thể phẳng (lamina) hoặc các vật thể ba chiều với mật độ không đồng nhất. **Tính Khối lượng** Nếu $\rho(x, y)$ là mật độ khối lượng bề mặt (khối lượng trên một đơn vị diện tích) tại điểm $(x, y)$ trong tấm phẳng $D$, thì tổng khối lượng $M$ của tấm phẳng được tính bằng tích phân kép của hàm mật độ: $$M = \iint_D \rho(x, y) dA$$ **Xác định Khối tâm** Khối tâm $(\bar{x}, \bar{y})$ là điểm cân bằng của vật thể. Việc xác định khối tâm đòi hỏi tính toán các momen $M_x$ (momen đối với trục $Ox$) và $M_y$ (momen đối với trục $Oy$): $$M_x = \iint_D y \rho(x, y) dA$$ $$M_y = \iint_D x \rho(x, y) dA$$Tọa độ khối tâm sau đó được xác định bởi:$$\bar{x} = \frac{M_y}{M} \quad \text{và} \quad \bar{y} = \frac{M_x}{M}$$ Khối tâm là một đại lượng then chốt trong kỹ thuật kết cấu, đảm bảo sự ổn định của hệ thống. **Momen Quán tính** Momen quán tính (Moment of Inertia) là thước đo khả năng chống lại sự thay đổi vận tốc góc của một vật thể, rất quan trọng trong động lực học quay. Các momen quán tính đối với các trục chính là: * Đối với trục $Ox$: $I_x = \iint_D y^2 \rho(x, y) dA$ * Đối với trục $Oy$: $I_y = \iint_D x^2 \rho(x, y) dA$ * Đối với gốc tọa độ (Polar Moment of Inertia): $I_0 = I_x + I_y = \iint_D (x^2 + y^2) \rho(x, y) dA$ ## V. Kết luận và Định hướng Phát triển Lý thuyết Tích phân kép là một công cụ phân tích toán học cơ bản và mạnh mẽ, cung cấp khả năng tính toán tổng lượng của một đại lượng phân bố liên tục trên một miền phẳng hai chiều. Khả năng thành thạo trong việc sử dụng Tích phân kép không chỉ dừng lại ở việc áp dụng Định lý Fubini để chuyển đổi sang tích phân lặp, mà còn nằm ở khả năng lựa chọn hệ tọa độ tối ưu. Cụ thể, việc chuyển sang Tọa độ Cực thông qua Định thức Jacobian $r$ là kỹ thuật then chốt để đơn giản hóa các bài toán liên quan đến đối xứng tròn hoặc các hàm có dạng $x^2 + y^2$.[6] Về mặt lý thuyết, Tích phân kép đặt nền móng cho toàn bộ Giải tích Vector và Tích phân Bội. Các nguyên tắc và kỹ thuật được phát triển cho tích phân kép được mở rộng trực tiếp sang các dạng tích phân phức tạp hơn: 1. **Tích phân Bội Ba:** Việc tính thể tích hoặc khối lượng trong không gian ba chiều sử dụng Tích phân Bội Ba ($\iiint_V f dV$) tuân theo các nguyên tắc về Tổng Riemann và Định lý Fubini. Phép đổi biến sang Tọa độ Trụ hoặc Tọa độ Cầu trong không gian 3D vẫn sử dụng Định thức Jacobian (hoặc Jacobian mở rộng), chẳng hạn Jacobian trong tọa độ cầu là $|J| = r^2 \sin \theta$ [6], chứng tỏ sự nhất quán về cấu trúc lý thuyết giữa các không gian đa chiều. 2. **Liên hệ với Tích phân Đường và Định lý Green:** Tích phân kép là thành phần chính trong Định lý Green, một định lý nền tảng liên kết tích phân kép trên một miền $D$ với tích phân đường trên biên của miền đó. Tóm lại, Tích phân kép không chỉ là một khái niệm trừu tượng mà là một ngôn ngữ toán học cần thiết để mô tả và giải quyết các vấn đề thực tiễn trong hình học, cơ học và vật lý ứng dụng. Sự hiểu biết sâu sắc về định nghĩa (qua giới hạn đường kính phân hoạch), các tính chất tuyến tính, Định lý Fubini, và cơ chế đổi biến thông qua Jacobian là nền tảng vững chắc cho bất kỳ nghiên cứu sinh hoặc kỹ sư nào làm việc trong các lĩnh vực yêu cầu phân tích định lượng.$$
