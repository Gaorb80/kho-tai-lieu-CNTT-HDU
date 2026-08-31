---
tags:
  - university
  - Math
---
# Kiến thức cần nắm vững
Tôi đang là tân sinh viên nhất cảu trường đại học và đang học môtn toán cao cấp, hãy giúp tôi giải thích dể hiểu và ví dụ cụ thể về những mảng kiến thức ở dưới đây nhé
- Hàm số chẵn, lẻ
- Hàm số tuần hoàn
- Hàm hợp
- Hàm hyperbolic
- Hàm ngược, và hàm lượng giác ngược

## Tóm tắt kiến thức cần nắm vững


### 1. Hàm số chẵn và Hàm số lẻ

Đây là khái niệm dùng để mô tả **tính đối xứng** của đồ thị hàm số.

- **Hàm số chẵn (Even Function):**
    
    - **Dấu hiệu:** $f(-x) = f(x)$ với mọi $x$ thuộc tập xác định.
        
    - **Giải thích:** Nếu bạn thay $x$ bằng $-x$ (điểm đối diện qua gốc $0$), giá trị $y$ (tức là $f(x)$) _không thay đổi_.
        
    - **Tính chất:** Đồ thị của hàm chẵn sẽ **đối xứng qua trục tung (trục $y$)**. Giống như bạn đặt một chiếc gương trên trục $y$, phần bên trái là hình ảnh phản chiếu của phần bên phải.
        
    - **Ví dụ:**
        
        - $f(x) = x^2$.
            
            - Kiểm tra: $f(-x) = (-x)^2 = x^2$.
                
            - $f(-x) = f(x)$, vậy đây là hàm chẵn. (Đồ thị là một parabol đối xứng qua trục $y$).
                
        - $f(x) = \cos(x)$.
            
            - Kiểm tra: $f(-x) = \cos(-x) = \cos(x)$.
                
            - $f(-x) = f(x)$, vậy đây là hàm chẵn.
                
- **Hàm số lẻ (Odd Function):**
    
    - **Dấu hiệu:** $f(-x) = -f(x)$ với mọi $x$ thuộc tập xác định.
        
    - **Giải thích:** Nếu bạn thay $x$ bằng $-x$, giá trị $y$ mới sẽ _đối dấu_ với giá trị $y$ ban đầu.
        
    - **Tính chất:** Đồ thị của hàm lẻ sẽ **đối xứng qua gốc tọa độ (0, 0)**. Giống như bạn xoay toàn bộ đồ thị 180° quanh điểm $0$, đồ thị sẽ quay về y hệt vị trí cũ.
        
    - **Ví dụ:**
        
        - $f(x) = x^3$.
            
            - Kiểm tra: $f(-x) = (-x)^3 = -x^3$.
                
            - $f(-x) = -f(x)$, vậy đây là hàm lẻ.
                
        - $f(x) = \sin(x)$.
            
            - Kiểm tra: $f(-x) = \sin(-x) = -\sin(x)$.
                
            - $f(-x) = -f(x)$, vậy đây là hàm lẻ.
                

> **Lưu ý:** Một hàm số không nhất thiết phải chẵn hoặc lẻ. Ví dụ, $f(x) = x + 1$ không phải là hàm chẵn cũng không phải là hàm lẻ.

---

### 2. Hàm số tuần hoàn (Periodic Function)

- **Giải thích:** Đây là một hàm số có đồ thị **lặp đi lặp lại** một cách chính xác theo những khoảng đều đặn.
    
- **Dấu hiệu:** Tồn tại một số $T > 0$ (gọi là **chu kỳ**) sao cho $f(x + T) = f(x)$ với mọi $x$.
    
- **Analogy (Phép so sánh):** Hãy tưởng tượng một bài hát được bật lặp lại (loop). Chu kỳ $T$ chính là độ dài của bài hát đó. Dù bạn nghe ở giây thứ 5, hay giây thứ $5 + T$, âm thanh bạn nghe được là như nhau.
    
- **Ví dụ:**
    
    - Các hàm lượng giác là ví dụ kinh điển.
        
    - $f(x) = \sin(x)$. Đồ thị của nó lặp lại sau mỗi $2\pi$.
        
        - $\sin(0) = 0$.
            
        - $\sin(0 + 2\pi) = \sin(2\pi) = 0$.
            
        - $\sin(0 + 4\pi) = \sin(4\pi) = 0$.
            
    - Chu kỳ $T$ của $\sin(x)$ và $\cos(x)$ là $2\pi$.
        
    - Chu kỳ $T$ của $\tan(x)$ và $\cot(x)$ là $\pi$.
        


---

### 3. Hàm hợp (Composite Function)

- **Giải thích:** Đây là hành động "lồng" hai hàm số vào nhau, hay "hàm của một hàm". Bạn lấy kết quả đầu ra của hàm này làm đầu vào cho hàm kia.
    
- **Ký hiệu:** $f \circ g$ (đọc là "f tròn g" hoặc "f của g").
    
- **Dấu hiệu:** $(f \circ g)(x) = f(g(x))$.
    
- **Analogy (Phép so sánh):** Tưởng tượng một dây chuyền sản xuất:
    
    1. Bạn có nguyên liệu $x$.
        
    2. Bạn cho $x$ vào **Máy G**. Máy G cho ra sản phẩm là $g(x)$.
        
    3. Bạn _ngay lập tức_ lấy sản phẩm $g(x)$ đó làm nguyên liệu đầu vào cho **Máy F**.
        
    4. Máy F cho ra sản phẩm cuối cùng là $f(g(x))$.
        
- **Ví dụ:**
    
    - Cho hai hàm:
        
        - Hàm $g(x) = x + 1$ (cộng thêm 1)
            
        - Hàm $f(u) = u^2$ (bình phương lên)
            
    - Hàm hợp $f(g(x))$ là gì?
        
        - Ta lấy $x$, cho vào $g$ $\to$ được $g(x) = x + 1$.
            
        - Ta lấy $x+1$, cho vào $f$ $\to$ được $f(x+1) = (x+1)^2$.
            
        - Vậy, $(f \circ g)(x) = (x+1)^2$.
            
    - _Lưu ý:_ Thứ tự rất quan trọng! $g(f(x))$ sẽ khác:
        
        - Ta lấy $x$, cho vào $f$ $\to$ được $f(x) = x^2$.
            
        - Ta lấy $x^2$, cho vào $g$ $\to$ được $g(x^2) = x^2 + 1$.
            
        - Vậy, $(g \circ f)(x) = x^2 + 1$. (Rõ ràng khác với $(x+1)^2$).
            

---

### 4. Hàm hyperbolic (Hyperbolic Functions)

- **Giải thích:** Các hàm này (như $\sinh$, $\cosh$, $\tanh$) _tương tự_ như các hàm lượng giác ($\sin$, $\cos$, $\tan$), nhưng chúng được định nghĩa dựa trên đường **Hyperbol** ($x^2 - y^2 = 1$) thay vì đường **Tròn** ($x^2 + y^2 = 1$).
    
- Chúng rất quan trọng trong vật lý và kỹ thuật, ví dụ như mô tả hình dạng của một sợi dây xích treo lơ lửng giữa hai cột (gọi là đường "catenary").
    
- **Định nghĩa chính (dựa trên số $e$):**
    
    - **Sinh (Sine Hyperbolic):** $\sinh(x) = \frac{e^x - e^{-x}}{2}$
        
    - **Cosh (Cosine Hyperbolic):** $\cosh(x) = \frac{e^x + e^{-x}}{2}$
        
    - **Tanh (Tangent Hyperbolic):** $\tanh(x) = \frac{\sinh(x)}{\cosh(x)} = \frac{e^x - e^{-x}}{e^x + e^{-x}}$
        
- **Tính chất quan trọng:**
    
    - Giống như $\cos^2(x) + \sin^2(x) = 1$ (của đường tròn).
        
    - Hàm hyperbolic có $\cosh^2(x) - \sinh^2(x) = 1$ (của đường hyperbol).
        
- **Ví dụ (Hình dạng dây xích):** Đồ thị của $f(x) = \cosh(x)$ có hình dạng giống như một sợi dây cáp treo. Nó là một hàm chẵn (vì $\cosh(-x) = \cosh(x)$).
    

---

### 5. Hàm ngược và Hàm lượng giác ngược

#### A. Hàm ngược (Inverse Function)

- **Giải thích:** Hàm ngược, ký hiệu là $f^{-1}$, là hàm số **"hoàn tác"** lại những gì hàm $f$ đã làm. (Lưu ý: $f^{-1}$ _không_ có nghĩa là $1/f$).
    
- **Dấu hiệu:** Nếu $f(a) = b$, thì $f^{-1}(b) = a$.
    
- **Analogy (Phép so sánh):**
    
    - Hàm $f$: "Buộc dây giày". (Đầu vào: giày chưa buộc $\to$ Đầu ra: giày đã buộc).
        
    - Hàm $f^{-1}$: "Cởi dây giày". (Đầu vào: giày đã buộc $\to$ Đầu ra: giày chưa buộc).
        
- **Điều kiện:** Một hàm chỉ có hàm ngược nếu nó là **hàm 1-1 (một-một)**, tức là mỗi giá trị $y$ chỉ tương ứng với _một_ giá trị $x$ duy nhất.
    
    - Ví dụ: $f(x) = x^2$ _không_ phải là 1-1, vì $f(2) = 4$ và $f(-2) = 4$. Nếu hỏi "hàm ngược của 4 là gì?", ta không biết trả lời là 2 hay -2.
        
    - Để $f(x) = x^2$ có hàm ngược, ta phải **giới hạn miền xác định** của nó, ví dụ: chỉ xét $x \ge 0$. Khi đó, hàm ngược của nó là $f^{-1}(x) = \sqrt{x}$.
        
- **Ví dụ:**
    
    - $f(x) = 2x + 3$. (Hành động: Nhân 2, rồi cộng 3).
        
    - Hàm ngược $f^{-1}(x)$ sẽ làm ngược lại: Trừ 3, rồi chia 2.
        
    - $f^{-1}(x) = \frac{x - 3}{2}$.
        
    - _Kiểm tra:_ $f(5) = 2(5) + 3 = 13$. Hàm ngược: $f^{-1}(13) = (13 - 3) / 2 = 5$. (Đã hoàn tác thành công!)
        

#### B. Hàm lượng giác ngược (Inverse Trigonometric Functions)

- **Giải thích:** Đây chính là các hàm ngược của hàm lượng giác, sau khi chúng ta đã **giới hạn miền xác định** của chúng (vì chúng tuần hoàn nên không phải 1-1).
    
- Chúng trả lời câu hỏi: **"Góc nào có giá trị lượng giác là...?"**
    
- **$\arcsin(x)$ (hoặc $\sin^{-1}(x)$):**
    
    - **Câu hỏi:** "Góc nào (trong khoảng quy ước $[-\pi/2, \pi/2]$) có sin bằng $x$?"
        
    - **Ví dụ:** $\arcsin(0.5) = ?$ (Góc nào có sin = 0.5?) $\to$ Đáp án là $\pi/6$ (hay 30°).
        
- **$\arccos(x)$ (hoặc $\cos^{-1}(x)$):**
    
    - **Câu hỏi:** "Góc nào (trong khoảng quy ước $[0, \pi]$) có cos bằng $x$?"
        
    - **Ví dụ:** $\arccos(0) = ?$ (Góc nào có cos = 0?) $\to$ Đáp án là $\pi/2$ (hay 90°).
        
- **$\arctan(x)$ (hoặc $\tan^{-1}(x)$):**
    
    - **Câu hỏi:** "Góc nào (trong khoảng quy ước $(-\pi/2, \pi/2)$) có tan bằng $x$?"
        
    - **Ví dụ:** $\arctan(1) = ?$ (Góc nào có tan = 1?) $\to$ Đáp án là $\pi/4$ (hay 45°).
        


## 📐 Tính Chất của các Hàm Lượng Giác

Các hàm lượng giác gồm **sin (sinus)**, **cos (cosinus)**, **tan (tangent)**, và **cot (cotangent)** đều có tính **tuần hoàn**. Ngoài ra, chúng còn được phân loại là **hàm chẵn** hoặc **hàm lẻ**.

---

### 1. Tính Tuần Hoàn

Tính tuần hoàn là tính chất cơ bản nhất của các hàm lượng giác. Một hàm $f(x)$ được gọi là tuần hoàn với chu kỳ $T$ nếu $f(x + T) = f(x)$ với mọi $x$ thuộc tập xác định của hàm số.

|**Hàm số**|**Công thức**|**Chu kỳ cơ sở (T)**|
|---|---|---|
|$\sin(x)$|$\sin(x + 2\pi) = \sin(x)$|$2\pi$|
|$\cos(x)$|$\cos(x + 2\pi) = \cos(x)$|$2\pi$|
|$\tan(x)$|$\tan(x + \pi) = \tan(x)$|$\pi$|
|$\cot(x)$|$\cot(x + \pi) = \cot(x)$|$\pi$|

---

### 2. Tính Chẵn và Tính Lẻ

Một hàm số $f(x)$ được gọi là:

- **Hàm chẵn** nếu $f(-x) = f(x)$ với mọi $x$ trong tập xác định. Đồ thị đối xứng qua trục $Oy$.
    
- **Hàm lẻ** nếu $f(-x) = -f(x)$ với mọi $x$ trong tập xác định. Đồ thị đối xứng qua gốc tọa độ $O$.
    

|**Hàm số**|**Công thức quan hệ**|**Tính chất**|
|---|---|---|
|$\sin(x)$|$\sin(-x) = -\sin(x)$|**Hàm lẻ**|
|$\cos(x)$|$\cos(-x) = \cos(x)$|**Hàm chẵn**|
|$\tan(x)$|$\tan(-x) = -\tan(x)$|**Hàm lẻ**|
|$\cot(x)$|$\cot(-x) = -\cot(x)$|**Hàm lẻ**|

**Tóm tắt:**

- **Chỉ có hàm $\mathbf{\cos(x)}$ là hàm chẵn.**
    
- **Các hàm $\mathbf{\sin(x)}$, $\mathbf{\tan(x)}$, và $\mathbf{\cot(x)}$ là hàm lẻ.**
    



## 📋 Các dạng bài tập cơ bản về Tính chất của hàm số

Dưới đây là các dạng bài được tổng hợp từ phần lý thuyết và các bài tập trong tài liệu của bạn:

### 1. Dạng 1: Xét tính chẵn lẻ của hàm số

Dạng bài này yêu cầu bạn kiểm tra xem một hàm số $f(x)$ có thỏa mãn điều kiện $f(-x) = f(x)$ (hàm chẵn) 2, $f(-x) = -f(x)$ (hàm lẻ)3, hay không là cả hai.

- **Bài tập ví dụ:**
    
    - Xét tính chẵn lẻ của các hàm số: $f(x) = a^{x} + a^{-x}$ 4, $f(x) = sin(x) + cos(x)$ 5, $f(x) = ln\frac{x+1}{1-x}$6.
        
    - Chứng minh tính chất đạo hàm: Chứng minh rằng nếu $f(x)$ là hàm lẻ thì $f'(x)$ là hàm chẵn, và ngược lại7.
        
    - Chứng minh tính chất biểu diễn: Chứng minh mọi hàm số xác định trên khoảng đối xứng đều có thể biểu diễn duy nhất dưới dạng tổng của một hàm chẵn và một hàm lẻ8.
        

### 2. Dạng 2: Xét tính tuần hoàn của hàm số

Dạng bài này yêu cầu bạn xác định xem hàm số có lặp lại giá trị theo một chu kỳ $T > 0$ hay không 9, và nếu có, tìm chu kỳ nhỏ nhất

- **Bài tập ví dụ:**
    
    - Tìm chu kỳ của các hàm số: $f(x) = sin^{2}x$ 11, $f(x) = A \cdot cos(\lambda x) + B \cdot sin(\lambda x)$.
        
    - Chứng minh hàm số không tuần hoàn: $f(x) = sin(x^2)$ , $y = cos(x) + cos(x\sqrt{2})$.
        
    - Chứng minh tính chất của hàm tuần hoàn: Chứng minh tổng và tích của hai hàm tuần hoàn (với tỷ số chu kỳ hữu tỉ) cũng là hàm tuần hoàn.
        

### 3. Dạng 3: Tìm tập xác định và tập giá trị

Đây là dạng bài rất cơ bản, yêu cầu tìm tất cả các giá trị của $x$ để hàm số có nghĩa (tập xác định) 16và tìm tất cả các giá trị $y$ mà hàm số có thể đạt được (tập giá trị)17.

- **Bài tập ví dụ:**
    
    - **Tìm tập xác định:**
        
        - Hàm chứa $arccot$: $y = \sqrt{6 \cdot arccot(x) - 5\pi}$18.
            
        - Hàm chứa $arcsin$: $y = arcsin(\frac{2x}{1+x})$ 19, $y = arccos(2 \cdot sin(x))$20.
            
        - Hàm chứa $ln$: $y = ln(cos(x))$ 21, $y = ln(1 - cos(2x))$22.
            
        - Hàm hợp $f(g(x))$ khi biết TXĐ của $f(x)$ là $[0, 1]$: $f(e^x)$ 23, $f(ln(x))$24.
            
    - **Tìm tập giá trị:**
        
        - $y = sin(arccos(x))$25.
            
        - $y = lg(1 - 2 \cdot cos(x))$26.
            
        - $y = \frac{x^2 - 1}{x^2 + 1}$27.
            
        - $y = arccot(sin(x))$28.
            

### 4. Dạng 4: Hàm hợp

Dạng bài này liên quan đến việc kết hợp hai hay nhiều hàm số lại với nhau, $f[g(x)]$29292929.

- **Bài tập ví dụ:**
    
    - Tìm công thức của các hàm hợp $f(f(x))$, $g(g(x))$, $f(g(x))$, $g(f(x))$ khi biết $f(x)$ và $g(x)$303030303030303030.
        
    - Tính giá trị hàm hợp dựa vào bảng giá trị31.
        

### 5. Dạng 5: Hàm ngược và Hàm lượng giác ngược

Dạng bài này tập trung vào việc tìm hàm ngược $f^{-1}(x)$ của một hàm $f(x)$ cho trước, dựa trên quy tắc $f^{-1}(y) = x \Leftrightarrow f(x) = y$32.

- **Bài tập ví dụ:**
    
    - Tìm hàm ngược của các hàm số:
        
        - $f(x) = ln(x + \sqrt{x^2 + 1})$33.
            
        - $y = ln(\frac{1-x}{1+x})$34.
            
        - $y = \frac{1}{2}(e^x + e^{-x})$35353535.
            
        - $y = 2 \cdot arcsin(x)$36.
            

### 6. Dạng 6: Hàm Hyperbolic

Dạng bài này yêu cầu bạn sử dụng các định nghĩa của $sinh(x)$ và $cosh(x)$ 37 để chứng minh các công thức và tính chất liên quan.

- **Bài tập ví dụ:**
    
    - Chứng minh: $cosh^2(x) - sinh^2(x) = 1$38.
        
    - Chứng minh: $sinh(2x) = 2 \cdot sinh(x) \cdot cosh(x)$39.
        
    - Chứng minh các công thức cộng: $sinh(x+y)$ 40, $cosh(x+y)$41.
        

### 7. Dạng 7: Tìm công thức hàm số $f(x)$

Dạng bài này đưa ra một số điều kiện (phương trình hàm hoặc giá trị tại các điểm) và yêu cầu bạn tìm biểu thức của $f(x)$.

- **Bài tập ví dụ:**
    
    - Tìm $f(x)$ biết $f(x + \frac{1}{x}) = x^2 + \frac{1}{x^2}$42.
        
    - Tìm $f(x)$ biết $f(\frac{x}{1+x}) = x^2$43.
        
    - Tìm hàm bậc hai $f(x) = ax^2 + bx + c$ khi biết $f(-2) = 0, f(0) = 1, f(1) = 5$44.
        


---

### 📚 Bộ bài tập ôn tập (Dạng đơn giản)

#### Dạng 1: Xét tính chẵn lẻ

_Mục tiêu: Áp dụng định nghĩa $f(-x) = f(x)$ (chẵn) hoặc $f(-x) = -f(x)$ (lẻ)._

1. Xét tính chẵn lẻ của hàm số: $f(x) = x^4 + 3x^2 - 1$
    
2. Xét tính chẵn lẻ của hàm số: $f(x) = x^3 - 5x$
    
3. Xét tính chẵn lẻ của hàm số: $f(x) = x^2 + x$
    

---

#### Dạng 2: Xét tính tuần hoàn

_Mục tiêu: Tìm chu kỳ $T$ cho các hàm lượng giác cơ bản._

1. Tìm chu kỳ cơ sở của hàm số: $f(x) = cos(3x)$
    
2. Tìm chu kỳ cơ sở của hàm số: $f(x) = tan(\frac{x}{2})$
    

---

#### Dạng 3: Tìm tập xác định và tập giá trị

_Mục tiêu: Tìm điều kiện để hàm số có nghĩa (tập xác định) và các giá trị $y$ có thể có (tập giá trị)._

1. Tìm tập xác định của hàm số: $y = \sqrt{x - 4}$
    
2. Tìm tập xác định của hàm số: $y = \frac{1}{x^2 - 9}$
    
3. Tìm tập giá trị của hàm số: $y = x^2 + 3$
    
4. Tìm tập giá trị của hàm số: $y = 5 \cdot sin(x)$
    

---

#### Dạng 4: Hàm hợp

_Mục tiêu: Thay thế biến của hàm này bằng một hàm khác._

1. Cho $f(x) = 2x + 1$ và $g(x) = x^2$.
    
    - a) Tìm $f(g(x))$
        
    - b) Tìm $g(f(x))$
        

---

#### Dạng 5: Hàm ngược

_Mục tiêu: Từ $y = f(x)$, rút $x$ theo $y$, sau đó đổi vai trò $x, y$._

1. Tìm hàm ngược của hàm số: $y = 3x - 5$
    
2. Tìm hàm ngược của hàm số: $y = \sqrt[3]{x + 1}$
    

---

#### Dạng 6: Hàm Hyperbolic

_Mục tiêu: Sử dụng định nghĩa cơ bản để tính toán._

1. Dựa vào định nghĩa:
    
    - $cosh(x) = \frac{e^x + e^{-x}}{2}$
        
    - $sinh(x) = \frac{e^x - e^{-x}}{2}$
        
    - Hãy tính giá trị của $cosh(0)$ và $sinh(0)$.
        

---

#### Dạng 7: Tìm công thức hàm số

_Mục tiêu: Tìm các hệ số của hàm số dựa trên các giá trị cho trước._

1. Tìm hàm số bậc nhất $f(x) = ax + b$, biết rằng $f(1) = 4$ và $f(3) = 10$.
    

---
