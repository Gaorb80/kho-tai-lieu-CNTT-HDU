---
tags:
  - university
  - Math
---
Kiến thức về hàm nhiều biến chủ yếu nằm trong **Chương 5** hoặc **Chương 6. Phép tính vi phân hàm nhiều biến** trong các giáo trình Toán cao cấp.

Dưới đây là các kiến thức cơ bản về hàm nhiều biến theo các nguồn đã cung cấp:

### 1. Khái niệm và Định nghĩa

#### 1.1. Định nghĩa Hàm số n biến số

Một hàm số $f$ của biến điểm $M(x_{1},x_{2},...,x_{n})$ (còn gọi là hàm số của $n$ biến số $x_{1},x_{2},...,x_{n}$) là một quy luật đặt tương ứng mỗi điểm $M(x_{1},x_{2},...,x_{n})$ thuộc miền biến thiên $D\subset\mathbb{R}^{n}$ với **một giá trị xác định và duy nhất** của biến số $w$.

- Hàm số này được ký hiệu là $w=f(x_{1},x_{2},...,x_{n})$ hay $w=f(M)$.
- $D$ là miền xác định của hàm số $f$. Nếu bài toán không cho trước tập xác định, $D$ được hiểu là tập hợp tất cả các điểm $M$ mà tại đó biểu thức $w=f(x_{1},x_{2},...,x_{n})$ có nghĩa.
- Trong trường hợp thường gặp $n=2$ hoặc $n=3$, người ta thường dùng ký hiệu $z=f(x,y)$ hay $u=f(x,y,z)$.
- Với hàm hai biến số $z=f(x,y)$, $x$ và $y$ là các biến số, $f$ là quy luật cho tương ứng mỗi cặp giá trị $(x,y)$ một giá trị xác định và duy nhất của biến số $w$. Ký hiệu là $w=f(x,y)$ hay $w=f(M)$.

#### 1.2. Hàm số Hợp (Composite Functions)

Hàm số hợp được hình thành khi các biến trung gian của hàm chính lại là các hàm số của các biến độc lập khác.

- **Trường hợp hai biến:** Xét hàm $z=f(u,v)$, trong đó $u=u(x,y)$ và $v=v(x,y)$. Khi đó, hàm số $z=f[u(x,y),v(x,y)]$ được gọi là hàm số hợp của $z=f(u,v)$ và các hàm $u, v$.
- **Trường hợp n biến:** Nếu $w=f(u_{1},u_{2},...,u_{m})$, và mỗi biến $u_{k}$ (với $k=1,...,m$) lại là hàm của $n$ biến số $x_{1},x_{2},...,x_{n}$, thì $w$ là hàm số hợp của $n$ biến số $x_i$.

### 2. Giới hạn và Tính Liên tục

#### 2.1. Giới hạn (Giới hạn kép)

Ta nói hàm số $f(X)$ tiến về $L$ khi $X$ tiến về $A$, ký hiệu $lim_{X\rightarrow A}f(X)=L$, khi các giá trị $X\in D$ đủ gần $A$, các giá trị $f(X)$ tương ứng đủ gần $L$ tùy ý.

- Khái niệm giới hạn này còn được gọi là giới hạn kép.
- **Giới hạn lặp:** Tồn tại hai giới hạn lặp $E$ và $F$ được xác định bằng cách lần lượt cố định một biến và tính giới hạn theo biến kia.
- **Lưu ý:** Nói chung, giới hạn kép và giới hạn lặp là khác nhau.

#### 2.2. Tính Liên tục

Hàm số $f:D\subset\mathbb{R}^{n}\rightarrow\mathbb{R}$ được gọi là **liên tục tại điểm $A\in D$** nếu giới hạn của hàm $f$ tại điểm $A$ tồn tại và bằng giá trị của hàm số tại điểm đó: $$lim_{X\rightarrow A}f(X)=f(A)$$. Nếu hàm số $f(x, y)$ khả vi tại $M_0(x_0, y_0)$, thì số gia toàn phần $\Delta f$ tiến về 0 khi $\Delta x \rightarrow 0$ và $\Delta y \rightarrow 0$, do đó $f(x,y)$ liên tục tại $M_0$.

### 3. Phép tính Vi phân

Các kiến thức về vi phân hàm nhiều biến bao gồm các khái niệm về đạo hàm riêng, vi phân toàn phần và đạo hàm cấp cao.

#### 3.1. Đạo hàm Riêng cấp 1

Đạo hàm riêng được định nghĩa bằng cách giữ các biến khác cố định và tính đạo hàm theo một biến duy nhất.

- **Trường hợp hàm hai biến $z=f(x,y)$:**
    - Đạo hàm riêng theo biến $x$ tại $M_{0}(x_{0},y_{0})$ là giới hạn (nếu tồn tại) của tỷ số giữa số gia riêng của hàm số theo $x$ và số gia $\Delta x$ khi $\Delta x\rightarrow0$: $$z_{x}^{\prime}(M_{0}) = \frac{\partial z}{\partial x}(M_{0}) = lim_{\Delta x\rightarrow0}\frac{f(x_{0}+\Delta x,y_{0})-f(x_{0},y_{0})}{\Delta x}$$.
    - **Ý nghĩa:** Đạo hàm riêng theo biến $x$ biểu thị **tốc độ biến thiên** của giá trị hàm số $z=f(x,y)$ tại điểm $(x_{0},y_{0})$ khi $x$ thay đổi một lượng nhỏ, trong điều kiện giá trị của biến $y$ **không thay đổi**.
    - **Quy tắc tính:** Để tính đạo hàm riêng $f_{x}^{\prime}$ ta xem $y$ như là **hằng số** và áp dụng các công thức đạo hàm cơ bản của hàm một biến. Tương tự cho $f_{y}^{\prime}$ (coi $x$ là hằng số).
- **Đạo hàm riêng của hàm số hợp:** Nếu $w=f(u_{1},...,u_{m})$ và $u_k$ là hàm của $x_{1},...,x_{n}$, đạo hàm riêng của $w$ theo $x_i$ được tính bằng công thức: $$\frac{\partial w}{\partial x_{i}}=\sum_{k=1}^{n}\frac{\partial w}{\partial u_{k}}\frac{\partial u_{k}}{\partial x_{i}}$$.

#### 3.2. Vi phân Toàn phần (Vi phân cấp 1)

Nếu hàm số $w=f(x,y)$ có các đạo hàm riêng liên tục tại điểm $(x_{0},y_{0})$, số gia toàn phần $\Delta w$ có thể biểu diễn dưới dạng: $$\Delta w = f_{x}^{\prime}(x_{0},y_{0})\Delta x+f_{y}^{\prime}(x_{0},y_{0})\Delta y+\alpha\Delta x+\beta\Delta y$$, trong đó $\alpha, \beta \rightarrow 0$ khi $\Delta x, \Delta y \rightarrow 0$. Biểu thức $f_{x}^{\prime}(x_{0},y_{0})\Delta x+f_{y}^{\prime}(x_{0},y_{0})\Delta y$ được gọi là **vi phân toàn phần cấp 1** của hàm số $w$ tại điểm $M_{0}$, ký hiệu là $dw$ hay $df(x_{0},y_{0})$.

- **Dạng biểu thức:** Nếu $x, y$ là các biến độc lập ($dx=\Delta x, dy=\Delta y$) thì vi phân toàn phần được viết là: $$df=f_{x}^{\prime}dx+f_{y}^{\prime}dy$$.
- **Tính bất biến:** Vi phân toàn phần cấp 1 có **dạng bất biến**, nghĩa là biểu thức $df$ giữ nguyên dạng dù $x, y$ là biến độc lập hay là hàm số của các biến khác.
- **Ứng dụng:** Vi phân toàn phần được dùng để tính gần đúng số gia của hàm số: $$\Delta f(x_{0},y_{0})\approx df(x_{0},y_{0})$$.

#### 3.3. Đạo hàm và Vi phân cấp cao

- **Đạo hàm riêng cấp 2:** Là đạo hàm riêng của các đạo hàm riêng cấp 1.
    - Các đạo hàm riêng hỗn hợp cấp 2 là $f_{xy}^{\prime\prime}$ và $f_{yx}^{\prime\prime}$.
    - **Định lý Schwarz:** Nếu các đạo hàm riêng $f^{\prime\prime}_{xy}$ và $f^{\prime\prime}_{yx}$ liên tục tại một điểm, thì chúng bằng nhau tại điểm đó: $\frac{\partial^{2}f}{\partial x\partial y}=\frac{\partial^{2}f}{\partial y\partial x}$.
- **Vi phân cấp cao:** Vi phân toàn phần cấp hai $d^{2}w$ là vi phân của vi phân toàn phần cấp một $dw$.
    - Đối với biến độc lập $x, y$, vi phân cấp $n$ có thể viết bằng ký hiệu tượng trưng: $$d^{n}z=(\frac{\partial}{\partial x}dx+\frac{\partial}{\partial y}dy)^{n}f$$.
    - **Lưu ý:** Vi phân toàn phần cấp $n>1$ **không có dạng bất biến** khi các biến độc lập là hàm số của các biến khác.

### 4. Các Khái niệm Đặc biệt và Ứng dụng

#### 4.1. Hàm số Thuần nhất (Homogeneous Function)

Hàm số $f(x_{1},x_{2},...,x_{n})$ được gọi là thuần nhất bậc $k$ nếu: $$f(tx_{1},tx_{2},...,tx_{n})=t^{k}f(x_{1},x_{2},...,x_{n}),\forall t>0$$.

- **Công thức Euler:** Điều kiện cần và đủ để $f$ là hàm thuần nhất bậc $k$ là nó thỏa mãn công thức Euler: $$\sum_{i=1}^{n}x_{i}\frac{\partial f}{\partial x_{i}}=kf$$.

#### 4.2. Đạo hàm theo Hướng (Directional Derivative)

Đạo hàm theo hướng là tốc độ thay đổi của hàm số tại một điểm $M_0$ theo một hướng xác định $\vec{l}$. $$\frac{\partial u}{\partial l}(M_{\alpha})=lim_{\rho\rightarrow0}\frac{u(M)-u(M_{\alpha})}{\rho}$$.

#### 4.3. Cực trị (Extrema)

Hàm số $f(X)$ đạt **cực đại** tại điểm $X_{0}$ nếu $f(X)\le f(X_{0})$ với mọi $X$ trong lân cận của $X_0$; đạt **cực tiểu** nếu $f(X)\ge f(X_{0})$.

- **Điều kiện cần:** Nếu hàm số đạt cực trị tại điểm trong $X_{0}$ và các đạo hàm riêng cấp một tồn tại tại đó, thì tất cả các đạo hàm riêng cấp một phải triệt tiêu: $$w_{x_{i}}^{\prime}=f_{x_{i}}^{\prime}(X_{0})=0, i=1, 2, ..., n$$. Điểm $X_0$ thỏa mãn điều kiện này được gọi là **điểm dừng**.
- **Cực trị có điều kiện:** Tìm cực trị của hàm $f(x,y)$ với điều kiện $g(x,y)=b$. Phương pháp thường dùng là **phương pháp nhân tử Lagrange**.

#### 4.4. Hàm Cận biên Riêng (Marginal Function)

Hàm cận biên riêng của đại lượng $y=f(x_{1},x_{2},...,x_{n})$ theo đại lượng $X_{i}$ tại điểm $(x_{1}^{0},x_{2}^{0},...,x_{n}^{0})$ là độ biến đổi của đại lượng $y$ khi đại lượng $X_{i}$ tăng lên 1 đơn vị tại điểm đó, trong điều kiện các yếu tố khác không đổi.

- Biểu thức toán học của hàm cận biên riêng là đạo hàm riêng: $$M_{x_{i}}y=\frac{\partial f}{\partial x_{i}}(x_{1},x_{2},...,x_{n})$$



Các phương pháp tính đạo hàm của hàm nhiều biến số chủ yếu xoay quanh khái niệm **đạo hàm riêng**, trong đó ta xem tất cả các biến số khác (ngoại trừ biến đang lấy đạo hàm) là các hằng số.

Dưới đây là các cách tính đạo hàm của hàm nhiều biến số, bao gồm các trường hợp cơ bản và các trường hợp hàm số hợp, hàm số ẩn:

### 1. Phương pháp Đạo hàm Riêng Cấp 1 (Cốt lõi)

Đạo hàm riêng (Partial Derivative) là phương pháp cơ bản nhất trong phép tính vi phân hàm nhiều biến.

**Nguyên tắc chung:** Để tính đạo hàm riêng của một hàm số $w=f(x_{1},x_{2},...,x_{n})$ theo một biến $x_{i}$, ta xem các biến còn lại như **hằng số** và áp dụng các công thức đạo hàm cơ bản và quy tắc tính đạo hàm của hàm một biến.

**a. Định nghĩa (Trường hợp hai biến $z=f(x,y)$):** Đạo hàm riêng theo biến $x$ tại điểm $M_{0}(x_{0},y_{0})$ là giới hạn (nếu tồn tại) của tỷ số giữa số gia riêng $\Delta_{x}f$ và số gia $\Delta x$ khi $\Delta x\rightarrow0$: $$\frac{\partial f}{\partial x}(x_{\alpha},y_{\alpha})=lim_{\Delta x\rightarrow0}\frac{\Delta_{x}f}{\Delta x} = lim_{\Delta x\rightarrow0}\frac{f(x_{0}+\Delta x,y_{0})-f(x_{0},y_{0})}{\Delta x}$$. Ký hiệu đạo hàm riêng theo $x$ là $z_{x}^{\prime}$ hay $\frac{\partial z}{\partial x}$.

**b. Ví dụ áp dụng:**

- Cho hàm số $z=x^{y}$ (với $x>0$):
    - Đạo hàm riêng theo $x$ (coi $y$ là hằng số): $\frac{\partial z}{\partial x}=yx^{y-1}$.
    - Đạo hàm riêng theo $y$ (coi $x$ là hằng số): $\frac{\partial z}{\partial y}=x^{y}\ln x$.
- Cho hàm số $u=x^{3}z\arctan\frac{y}{z}$ ($z\ne0$):
    - Đạo hàm theo $x$ (coi $y, z$ là hằng số): $\frac{\partial u}{\partial x}=3x^{2}z\arctan\frac{y}{z}$.
    - Đạo hàm theo $y$ (coi $x, z$ là hằng số): $\frac{\partial u}{\partial y}=x^{3}z\frac{1}{1+\frac{y^{2}}{z^{2}}}\cdot\frac{1}{z}=\frac{x^{3}z^{2}}{y^{2}+z^{2}}$.

### 2. Đạo hàm của Hàm số Hợp (Quy tắc Xích - Chain Rule)

Khi các biến trung gian của hàm chính là hàm số của các biến độc lập khác, ta sử dụng quy tắc đạo hàm hàm hợp.

**a. Trường hợp có một biến độc lập ($z=f(u,v)$, $u=u(x)$, $v=v(x)$):** Đạo hàm của $z$ theo biến độc lập $x$ là: $$\frac{dz}{dx}=\frac{\partial f}{\partial u}\cdot\frac{du}{dx}+\frac{\partial f}{\partial v}\cdot\frac{dv}{dx}$$.

**b. Trường hợp có nhiều biến độc lập ($w=f(u_{1},u_{2},...,u_{m})$, $u_{k}=u_{k}(x_{1},x_{2},...,x_{n})$):** Đạo hàm riêng của $w$ theo biến $x_{i}$ được tính bằng công thức: $$\frac{\partial w}{\partial x_{i}}=\frac{\partial w}{\partial u_{1}}\frac{\partial u_{1}}{\partial x_{i}}+\frac{\partial w}{\partial u_{2}}\frac{\partial u_{2}}{\partial x_{i}}+\cdot\cdot\cdot+\frac{\partial w}{\partial u_{n}}\frac{\partial u_{n}}{\partial x_{i}}$$.

### 3. Đạo hàm của Hàm số Ẩn (Implicit Function)

Khi hàm số được định nghĩa thông qua một hệ thức $F=0$ thay vì công thức tường minh, ta dùng công thức đạo hàm hàm ẩn.

**a. Hàm ẩn một biến ($F(x,y)=0$):** Nếu $F(x,y)$ có các đạo hàm riêng liên tục và $F_{y}^{\prime}(x,y)\ne0$ thì đạo hàm của hàm ẩn $y=f(x)$ là: $$y_{x}^{\prime}=-\frac{F_{x}^{\prime}(x,y)}{F_{y}^{\prime}(x,y)}$$.

**b. Hàm ẩn hai biến ($F(x,y,z)=0$):** Nếu $F(x,y,z)$ có các đạo hàm riêng liên tục và $F_{z}^{\prime}(x,y,z)\ne0$ thì đạo hàm riêng của hàm ẩn $z=f(x,y)$ là: $$z_{x}^{\prime}=-\frac{F_{x}^{\prime}(x,y,z)}{F_{z}^{\prime}(x,y,z)}, z_{y}^{\prime}=-\frac{F_{y}^{\prime}(x,y,z)}{F_{z}^{\prime}(x,y,z)}$$.

### 4. Vi phân Toàn phần (Vi phân cấp 1)

Vi phân toàn phần cấp 1 là phần chính của số gia toàn phần của hàm số và được định nghĩa trực tiếp thông qua các đạo hàm riêng.

Đối với hàm số hai biến $z=f(x,y)$, nếu $x$ và $y$ là các biến độc lập ($dx=\Delta x, dy=\Delta y$), biểu thức vi phân toàn phần là: $$df=f_{x}^{\prime}dx+f_{y}^{\prime}dy$$.

Đối với hàm số n biến $w=f(x_{1},x_{2},...,x_{n})$, biểu thức vi phân toàn phần là: $$dw=f_{1}dx_{1}+f_{2}dx_{2}+\cdot\cdot\cdot+f_{n}dx_{n}$$ (với $f_{i}=\frac{\partial f}{\partial x_{i}}$).

**Tính bất biến:** Vi phân toàn phần cấp 1 có **dạng bất biến**, nghĩa là biểu thức $df$ giữ nguyên dạng dù các biến $u, v$ là biến độc lập hay là hàm số của các biến khác.

### 5. Đạo hàm Riêng Cấp Cao

Đạo hàm riêng cấp cao (cấp hai trở lên) là đạo hàm riêng của các đạo hàm riêng cấp thấp hơn.

- **Đạo hàm riêng cấp 2:**
    - $\frac{\partial}{\partial x}(\frac{\partial f}{\partial x})=\frac{\partial^{2}f}{\partial x^{2}}=f^{\prime\prime}_{x^{2}}(x,y)$.
    - $\frac{\partial}{\partial y}(\frac{\partial f}{\partial x})=\frac{\partial^{2}f}{\partial y\partial x}=f^{\prime\prime}_{xy}(x,y)$ (đạo hàm hỗn hợp).

**Định lý Schwarz:** Nếu các đạo hàm riêng hỗn hợp $f^{\prime\prime}_{xy}$ và $f^{\prime\prime}_{yx}$ tồn tại và liên tục tại một điểm $M_{o}$, thì chúng bằng nhau tại điểm đó: $\frac{\partial^{2}f}{\partial x\partial y}=\frac{\partial^{2}f}{\partial y\partial x}$.

Chào bạn, tôi rất sẵn lòng hướng dẫn bạn kiến thức về **Đạo hàm** (Derivatives) dựa trên các nguồn tài liệu toán cao cấp bạn cung cấp.

Đạo hàm là một trong những khái niệm cơ bản và quan trọng nhất trong Phép tính Vi phân (Differential Calculus).

---

## I. Khái niệm cơ bản về Đạo hàm (Hàm một biến)

### 1. Định nghĩa

Cho hàm số $y=f(x)$ xác định trong một lân cận của điểm $x_{0}$.

**Đạo hàm** của hàm số $f(x)$ tại điểm $x_{0}$ là giới hạn hữu hạn (nếu tồn tại) của tỉ số giữa **số gia của hàm số** ($\Delta y$) và **số gia của đối số** ($\Delta x$) khi số gia của đối số tiến tới 0:

$$\mathbf{f^{\prime}(x_{0})} = \lim_{\Delta x\rightarrow0}\frac{\Delta y}{\Delta x}=\lim_{\Delta x\rightarrow0}\frac{f(x_{0}+\Delta x)-f(x_{0})}{\Delta x}$$.

- Nếu giới hạn này tồn tại, ta nói hàm số $f(x)$ **khả vi** (có đạo hàm) tại điểm $x_{0}$.
- Nếu hàm số $f(x)$ khả vi tại mọi điểm $x$ trong một khoảng $(a, b)$, ta nói nó khả vi trong khoảng đó.
- Một hàm số khả vi tại một điểm thì liên tục tại điểm đó.

### 2. Ý nghĩa của Đạo hàm

- **Ý nghĩa hình học:** Đạo hàm của hàm số $f(x)$ tại điểm $x_{0}$ là **hệ số góc** ($k_{0}$) của tiếp tuyến với đồ thị hàm số $y=f(x)$ tại điểm $M(x_{0}, f(x_{0}))$. Ta có: $f^{\prime}(x_{0})=\tan \alpha$.
    - **Phương trình tiếp tuyến** đó là: $y-f(x_{0})=f^{\prime}(x_{0})(x-x_{0})$.
- **Ý nghĩa vật lý/Tốc độ thay đổi:** $f^{\prime}(x_{0})$ biểu thị **tốc độ thay đổi** của giá trị hàm số $f(x)$ tại điểm $x_{0}$. Trong kinh tế, hàm cận biên $Mf(x)$ được định nghĩa là $f^{\prime}(x)$ và biểu thị độ biến đổi của đại lượng $y$ khi đại lượng $x$ tăng lên 1 đơn vị tại $x_{0}$.

### 3. Đạo hàm một phía

Đạo hàm phải $f^{\prime}_{+}(x_{0})$ và đạo hàm trái $f^{\prime}_{-}(x_{0})$ là giới hạn của tỉ số số gia khi $\Delta x\rightarrow0^{+}$ và $\Delta x\rightarrow0^{-}$ tương ứng.

- Hàm số có đạo hàm tại $x_{0}$ khi và chỉ khi nó có đạo hàm bên phải và đạo hàm bên trái tại $x_{0}$ và chúng bằng nhau: $\mathbf{f^{\prime}_{+}(x_{0})=f^{\prime}_{-}(x_{0})}$.
- Ví dụ: Hàm số $f(x)=|x|$ không có đạo hàm tại $x=0$ vì $f^{\prime}_{+}(0)=1$ nhưng $f^{\prime}_{-}(0)=-1$.

---

## II. Các Quy tắc và Công thức Tính Đạo hàm

### 1. Các Quy tắc cơ bản

Cho hai hàm số $f, g$ khả vi tại $x$:

- **Tổng/Hiệu:** $(f\pm g)^{\prime}(x)=f^{\prime}(x)\pm g^{\prime}(x)$.
- **Tích:** $(fg)^{\prime}(x)=f^{\prime}(x)g(x)+f(x)g^{\prime}(x)$.
- **Thương:** $(\frac{f}{g})^{\prime}(x)=\frac{f^{\prime}(x)g(x)-f(x)g^{\prime}(x)}{g^{2}(x)}$ (với $g(x)\ne0$).
- **Nhân với hằng số $c$:** $(cf(x))^{\prime}=cf^{\prime}(x)$.

### 2. Đạo hàm Hàm hợp (Quy tắc chuỗi)

Nếu hàm số $y=f(u)$ và $u=u(x)$, tức là $y=f[u(x)]$, thì đạo hàm của hàm hợp là: $$\mathbf{(f[u(x)])^{\prime}=f^{\prime}[u(x)]\cdot u^{\prime}(x)}$$.

### 3. Bảng một số Công thức Đạo hàm cơ bản (với $u=u(x)$)

|Công thức (với u=u(x))|Đạo hàm|
|:--|:--|
|$y=u^{\alpha}$|$y^{\prime}=\alpha u^{\alpha-1}u^{\prime}$|
|$y=a^{u}$|$y^{\prime}=a^{u}\ln a\cdot u^{\prime}$|
|$y=e^{u}$|$y^{\prime}=e^{u}u^{\prime}$|
|$y=\ln u$|$y^{\prime}=\frac{u^{\prime}}{u}$|
|$y=\sin u$|$y^{\prime}=\cos u\cdot u^{\prime}$|
|$y=\tan u$|$y^{\prime}=\frac{u^{\prime}}{\cos^{2}u}$|
|$y=\arcsin u$|$y^{\prime}=\frac{u^{\prime}}{\sqrt{1-u^{2}}}$|
|$y=\arctan u$|$y^{\prime}=\frac{u^{\prime}}{1+u^{2}}$|

### 4. Đạo hàm của Hàm ngược

Cho hàm số $f$ có hàm ngược là $g=f^{-1}$. Nếu



