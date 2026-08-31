---
tags:
  - university
  - Math
---
Để tìm nguyên hàm của hàm số $(5x+3)^{5}$, ta cần tính tích phân bất định:

$$I = \int (5x+3)^5 dx$$

Dưới đây là 2 cách để giải bài toán này, từ cách làm nhanh đến cách bài bản.

---

### Cách 1: Dùng công thức nguyên hàm mở rộng (Nhanh nhất)

Đối với các hàm số có dạng lũy thừa của bậc nhất $(ax+b)^n$, ta có công thức tổng quát:

$$\int (ax+b)^n dx = \frac{1}{a} \cdot \frac{(ax+b)^{n+1}}{n+1} + C$$

**Áp dụng vào bài toán:**

- Ở đây $a = 5$, $b = 3$, và số mũ $n = 5$.
    
- Ta có:
    

$$I = \frac{1}{5} \cdot \frac{(5x+3)^{5+1}}{5+1} + C$$

$$I = \frac{1}{5} \cdot \frac{(5x+3)^6}{6} + C$$

$$I = \frac{1}{30}(5x+3)^6 + C$$

---

### Cách 2: Phương pháp đổi biến số (Cơ bản)

Nếu bạn muốn hiểu bản chất hoặc gặp bài toán phức tạp hơn mà không nhớ công thức nhanh, hãy dùng cách đặt ẩn phụ.

Bước 1: Đặt biến phụ

Đặt $t = 5x + 3$.

Bước 2: Vi phân hai vế

Lấy vi phân hai vế để tìm mối quan hệ giữa $dx$ và $dt$:

$$dt = (5x+3)' dx = 5dx$$

$$\Rightarrow dx = \frac{dt}{5}$$

Bước 3: Thay vào nguyên hàm ban đầu

Thay $5x+3$ bằng $t$ và $dx$ bằng $\frac{dt}{5}$:

$$I = \int t^5 \cdot \frac{1}{5} dt$$

$$I = \frac{1}{5} \int t^5 dt$$

Bước 4: Tính nguyên hàm theo biến t

Áp dụng công thức cơ bản $\int x^n dx = \frac{x^{n+1}}{n+1}$:

$$I = \frac{1}{5} \cdot \frac{t^6}{6} + C = \frac{t^6}{30} + C$$

Bước 5: Trả lại biến x

Thay $t = 5x+3$ vào kết quả vừa tìm được:

$$I = \frac{(5x+3)^6}{30} + C$$

---

### Kết quả cuối cùng

Nguyên hàm của hàm số là:

$$\frac{1}{30}(5x+3)^6 + C$$

Bạn có muốn thử sức thêm với một bài tương tự nhưng có chứa căn thức (ví dụ: $\sqrt{2x+1}$) để luyện tập phương pháp đổi biến không?