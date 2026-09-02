---
tags:
  - university
  - Math
---
Chào bạn, để xét tính liên tục của một hàm số $y = f(x)$ tại một điểm cụ thể $x = x_0$, bạn cần thực hiện theo các bước sau đây, dựa trên định nghĩa về tính liên tục:

Định nghĩa: Hàm số $f(x)$ được gọi là liên tục tại điểm $x_0$ nếu $\lim_{x \to x_0} f(x) = f(x_0)$.

Để kiểm tra điều này, chúng ta thường chia thành 3 bước nhỏ:

1.  **Kiểm tra $f(x_0)$ có tồn tại không?**
    * Bạn cần tính giá trị của hàm số $f(x)$ tại chính điểm $x_0$.
    * Nếu $f(x_0)$ tồn tại (là một số hữu hạn), chuyển sang bước 2. Nếu $f(x)$ không xác định tại $x_0$, ta kết luận ngay hàm số gián đoạn tại $x_0$.

2.  **Kiểm tra $\lim_{x \to x_0} f(x)$ có tồn tại không?**
    * Bạn cần tìm giới hạn của hàm số $f(x)$ khi $x$ dần tiến về $x_0$.
    * **Lưu ý:** Đối với các hàm số được cho bởi nhiều công thức (ví dụ: $f(x) = \begin{cases} g(x) & \text{khi } x > x_0 \\ h(x) & \text{khi } x \le x_0 \end{cases}$), bạn phải xét giới hạn trái và giới hạn phải:
        * Giới hạn trái: $\lim_{x \to x_0^-} f(x)$
        * Giới hạn phải: $\lim_{x \to x_0^+} f(x)$
    * Giới hạn $\lim_{x \to x_0} f(x)$ tồn tại khi và chỉ khi $\lim_{x \to x_0^-} f(x) = \lim_{x \to x_0^+} f(x)$.
    * Nếu giới hạn này không tồn tại (ví dụ: ra $\infty$ hoặc giới hạn trái $\neq$ giới hạn phải), ta kết luận hàm số gián đoạn tại $x_0$.

3.  **So sánh $f(x_0)$ và $\lim_{x \to x_0} f(x)$:**
    * Sau khi đã xác định $f(x_0)$ tồn tại (ở bước 1) và $\lim_{x \to x_0} f(x)$ tồn tại (ở bước 2), bạn so sánh hai giá trị này.
    * Nếu $\lim_{x \to x_0} f(x) = f(x_0)$, hàm số **liên tục** tại $x_0$.
    * Nếu $\lim_{x \to x_0} f(x) \neq f(x_0)$, hàm số **gián đoạn** tại $x_0$ (đây gọi là gián đoạn loại 1, có thể khử được nếu giới hạn tồn tại).

**Tóm tắt:**

Hàm số $f(x)$ liên tục tại $x = x_0$ khi và chỉ khi thỏa mãn đồng thời cả 3 điều kiện:
1.  $f(x_0)$ xác định.
2.  $\lim_{x \to x_0} f(x)$ tồn tại (hữu hạn).
3.  $\lim_{x \to x_0} f(x) = f(x_0)$.



Để xét tính liên tục của hàm số $f(x)$ tại điểm $x = 0$, chúng ta cần kiểm tra xem ba điều kiện sau có đồng thời thỏa mãn hay không:
1.  Hàm số $f(x)$ xác định tại $x = 0$ (tức là $f(0)$ tồn tại).
2.  Giới hạn $\lim_{x \to 0} f(x)$ tồn tại (tức là $\lim_{x \to 0^-} f(x) = \lim_{x \to 0^+} f(x)$).
3.  Giá trị của giới hạn bằng giá trị của hàm số tại điểm đó (tức là $\lim_{x \to 0} f(x) = f(0)$).

Hàm số được cho là:
$$f(x) = \begin{cases} \frac{1 - \cos(2x)}{e^x + e^{-x} - 2} & \text{khi } (x < 0) \\ A(1 + \sin x) & \text{khi } (x \ge 0) \end{cases}$$

Ta tiến hành xét từng bước:

**1. Tính giá trị $f(0)$:**
Vì $x = 0$ thuộc trường hợp $x \ge 0$, ta sử dụng công thức thứ hai:
$$f(0) = A(1 + \sin 0) = A(1 + 0) = A$$
Hàm số xác định tại $x = 0$ với $f(0) = A$.

**2. Tính giới hạn $\lim_{x \to 0} f(x)$:**
Ta cần tính giới hạn trái và giới hạn phải.

* **Giới hạn trái ($\lim_{x \to 0^-} f(x)$):**
    Ta sử dụng công thức thứ nhất (vì $x < 0$):
    $$\lim_{x \to 0^-} f(x) = \lim_{x \to 0^-} \frac{1 - \cos(2x)}{e^x + e^{-x} - 2}$$
    Khi $x \to 0$, cả tử số ($1 - \cos 0 = 0$) và mẫu số ($e^0 + e^0 - 2 = 1 + 1 - 2 = 0$) đều tiến về $0$. Đây là dạng vô định $\frac{0}{0}$.
    Ta có thể sử dụng quy tắc L'Hôpital:
    $$\lim_{x \to 0^-} \frac{\frac{d}{dx}(1 - \cos(2x))}{\frac{d}{dx}(e^x + e^{-x} - 2)} = \lim_{x \to 0^-} \frac{2\sin(2x)}{e^x - e^{-x}}$$
    Đây vẫn là dạng $\frac{0}{0}$. Ta áp dụng L'Hôpital một lần nữa:
    $$\lim_{x \to 0^-} \frac{\frac{d}{dx}(2\sin(2x))}{\frac{d}{dx}(e^x - e^{-x})} = \lim_{x \to 0^-} \frac{4\cos(2x)}{e^x + e^{-x}}$$
    Bây giờ, ta có thể thay $x = 0$ vào biểu thức:
    $$= \frac{4\cos(0)}{e^0 + e^0} = \frac{4 \cdot 1}{1 + 1} = \frac{4}{2} = 2$$
    Vậy, $\lim_{x \to 0^-} f(x) = 2$.

* **Giới hạn phải ($\lim_{x \to 0^+} f(x)$):**
    Ta sử dụng công thức thứ hai (vì $x \ge 0$):
    $$\lim_{x \to 0^+} f(x) = \lim_{x \to 0^+} A(1 + \sin x)$$
    Hàm số này liên tục tại $x=0$, nên ta chỉ cần thay $x = 0$ vào:
    $$= A(1 + \sin 0) = A(1 + 0) = A$$
    Vậy, $\lim_{x \to 0^+} f(x) = A$.

**3. Kết luận:**
Để hàm số $f(x)$ liên tục tại $x = 0$, ba giá trị phải bằng nhau:
$$\lim_{x \to 0^-} f(x) = \lim_{x \to 0^+} f(x) = f(0)$$
Thay các giá trị ta đã tính vào:
$$2 = A = A$$
Điều này chỉ xảy ra khi $A = 2$.

**Kết luận cuối cùng:**
* Nếu $A = 2$, ta có $\lim_{x \to 0} f(x) = f(0) = 2$. Hàm số **liên tục** tại $x = 0$.
* Nếu $A \neq 2$, ta có $\lim_{x \to 0^-} f(x) = 2 \neq \lim_{x \to 0^+} f(x) = A$. Do đó, giới hạn $\lim_{x \to 0} f(x)$ không tồn tại, và hàm số **gián đoạn** tại $x = 0$.