---
tags:
  - university
  - Math
---
# Tích phân kép là gì

### 1. Định nghĩa Tích phân Kép

**Tích phân kép** là giới hạn của tổng tích phân của hàm số $f(x,y)$ trên một miền $D$.

Để định nghĩa:

1. Cho hàm số $f(x,y)$ xác định trong một miền **đóng, bị chặn** $D$.
2. Chia miền $D$ thành $n$ mảnh nhỏ tùy ý, gọi diện tích của các mảnh đó là $\Delta S_{1}, \Delta S_{2}, ..., \Delta S_{n}$.
3. Trong mỗi mảnh $\Delta S_{i}$, lấy một điểm tùy ý $M_{i}(x_{i},y_{i})$.
4. Lập **tổng tích phân** (hay còn gọi là tổng Darboux) của hàm số $f(x,y)$ trong miền $D$: $$I_{n}=\sum_{i=1}^{n}f(x_{i},y_{i})\Delta S_{i}$$.

Nếu khi $n\rightarrow\infty$ sao cho đường kính lớn nhất của các mảnh $d_{i}\rightarrow0$, tổng $I_{n}$ dẫn tới một giới hạn xác định $I$. Giới hạn này được gọi là tích phân kép của hàm số $f(x,y)$ trong miền $D$ và được ký hiệu là $\iint_{D}f(x,y)dS$.

- $D$ được gọi là **miền lấy tích phân**.
- $f$ được gọi là **hàm dưới dấu tích phân**.
- $dS$ được gọi là **yếu tố diện tích**.

Nếu tích phân này tồn tại, hàm số $f(x,y)$ được gọi là **khả tích** trong miền $D$. Người ta chứng minh được rằng nếu hàm số $f(x,y)$ **liên tục** trong miền bị chặn, đóng $D$ thì nó khả tích trong miền ấy.

### 2. Ý nghĩa Hình học

Khái niệm tích phân kép có nguồn gốc từ bài toán tính toán **thể tích của vật thể hình trụ**.

- Nếu hàm số $z=f(x,y)$ liên tục và **không âm** ($f(x,y)\ge0$) trên miền $D$, thì tích phân kép $\iint_{D}f(x,y)dS$ bằng thể tích $V$ của vật thể hình trụ giới hạn bởi mặt phẳng $Oxy$, mặt $z=f(x,y)$ và mặt trụ có đường sinh song song với $Oz$ tựa trên biên của $D$: $$V=\iint_{D}f(x,y)dS$$.
- Nếu $f(x,y)\equiv1$ trên miền $D$, thì tích phân kép $\iint_{D}dS$ bằng **diện tích $S$** của miền $D$.

### 3. Cách tính và Ký hiệu

Trong hệ tọa độ Descartes, nếu chia miền $D$ bởi hai họ đường thẳng song song với các trục tọa độ, yếu tố diện tích $dS$ có thể được viết là $dxdy$. Khi đó, tích phân kép có ký hiệu là $\iint_{D}f(x,y)dxdy$.

Việc tính tích phân kép thường được đưa về việc tính **hai tích phân đơn liên tiếp**.

Ví dụ, nếu miền lấy tích phân $D$ là hình chữ nhật xác định bởi $a\le x\le b$ và $c\le y\le d$, ta có **công thức Fubini** cho phép đổi thứ tự tích phân: $$\iint_{D}f(x,y)dxdy=\int_{a}^{b}dx\int_{c}^{d}f(x,y)dy=\int_{c}^{d}dy\int_{a}^{b}f(x,y)dx$$