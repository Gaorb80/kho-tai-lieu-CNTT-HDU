---
tags:
  - university
  - Math
---
Chào bạn, tôi sẽ tóm tắt những kiến thức quan trọng và trọng tâm về **Giới hạn hàm số** có trong tài liệu này.

## 🌟 Tóm tắt Kiến thức Trọng tâm về Giới hạn Hàm số

---

### 1. Giới hạn Hàm số (Limit of a Function)

- **Định nghĩa:** Giả sử hàm số $f(x)$ được xác định trên $(a,b)\setminus\{x_0\}$. Ta viết $\lim_{x\rightarrow x_0}f(x)=L$ nếu giới hạn của $f(x)$ khi $x$ tiến tới $x_0$ là $L$1.
    
- **Định lý:** Giới hạn của hàm số, **nếu tồn tại, là duy nhất**2.
    
- **Các Phép toán cơ bản trên Giới hạn:** Giả sử $\lim_{x\rightarrow x_0}f(x)=a$ và $\lim_{x\rightarrow x_0}g(x)=b$ ($a, b$ là các số thực hữu hạn)3:
    
    - **Tổng/Hiệu:** $\lim_{x\rightarrow x_0}[f(x)\pm g(x)]=a\pm b$4.
        
    - **Tích:** $\lim_{x\rightarrow x_0}f(x)g(x)=a\cdot b$5.
        
    - **Thương:** $\lim_{x\rightarrow x_0}\frac{f(x)}{g(x)}=\frac{a}{b}$ **nếu** $b\ne 0$6.
        

---

### 2. Vô cùng bé (VCB) và Vô cùng lớn (VCL)

#### 🔹 Vô cùng bé (VCB)

- **Định nghĩa:** $f(x)$ là VCB khi $x\rightarrow x_0$ nếu $\lim_{x\rightarrow x_0}f(x)=0$7.
    
- **Tính chất:**
    
    - Tổng 2 VCB là một VCB8.
        
    - Tích của VCB với một số bị chặn là VCB9.
        
    - Tích của các VCB là một VCB10.
        
- **So sánh các VCB (xét $K=\lim_{x\rightarrow x_0}\frac{\alpha(x)}{\beta(x)}$):** 11
    
    - $K=0$: $\alpha(x)$ là VCB bậc cao hơn $\beta(x)$ ($\alpha(x)=o(\beta(x))$)12.
        
    - $K=\infty$: $\alpha(x)$ là VCB bậc thấp hơn $\beta(x)$13.
        
    - $K\ne 0$: $\alpha(x), \beta(x)$ là VCB **cùng bậc**14.
        
        - $K=1$: $\alpha(x), \beta(x)$ là 2 VCB **tương đương** ($\alpha(x)\sim\beta(x)$)15.
            
- **Các VCB tương đương thường dùng khi $x\rightarrow 0$:** 16
    
    - $x \sim \sin x \sim \tan x \sim \arcsin x \sim \arctan x$
        
    - $x \sim e^x - 1 \sim \frac{a^x - 1}{\ln a} \sim \ln(1+x)$
        
    - $(1+x)^\alpha - 1 \sim \alpha x$
        
    - $1-\cos x \sim \frac{x^2}{2}$
        

#### 🔸 Vô cùng lớn (VCL)

- **Định nghĩa:** $f(x)$ là VCL khi $x\rightarrow x_0$ nếu $\lim_{x\rightarrow x_0}f(x)=\infty$17.
    
- **So sánh các VCL (xét $K=\lim_{x\rightarrow x_0}\frac{\alpha(x)}{\beta(x)}$):** 18
    
    - $K=\infty$: $\alpha(x)$ là VCL bậc cao hơn $\beta(x)$19.
        
    - $K=0$: $\alpha(x)$ là VCL bậc thấp hơn $\beta(x)$20.
        
    - $K\ne 0$: $\alpha(x), \beta(x)$ là VCL **cùng bậc**21.
        
        - $K=1$: $\alpha(x), \beta(x)$ là 2 VCL **tương đương** ($\alpha(x)\sim\beta(x)$)22.
            

---

### 3. Các Dạng Vô Định và Phương pháp Giải

Các dạng vô định thường gặp là $\frac{0}{0}$, $\frac{\infty}{\infty}$, $0\cdot\infty$, $\infty-\infty$, $1^\infty$, $0^0$, $\infty^0$232323232323232323.

#### 🛠️ Các Phương pháp giải trọng tâm

1. **Phương pháp Thay thế tương đương (dạng $\frac{0}{0}, \frac{\infty}{\infty}, 0\cdot\infty$):** 24
    
    - Có thể thay thế VCB/VCL tương đương vào **tích** hoặc **thương**25.
        
    - **Chú ý:** **Không nên** thay thế tương đương vào **hiệu** (đặc biệt hiệu của hai VCB tương đương)26262626.
        
    - _Ví dụ minh họa:_ VD4 sử dụng $\lim_{x\rightarrow 0^+}\frac{e^{x^2}-1}{x^2+x^3} = \lim_{x\rightarrow 0^+}\frac{x^2}{x^2} = 1$ (do $e^{x^2}-1 \sim x^2$ và $x^2+x^3 \sim x^2$ khi $x\rightarrow 0$)27.
        
2. **Quy tắc L'Hospital (Lôpitan) (dạng $\frac{0}{0}, \frac{\infty}{\infty}$):** 28
    
    $$\lim_{x\rightarrow x_0}\frac{f(x)}{g(x)}=\lim_{x\rightarrow x_0}\frac{f'(x)}{g'(x)}$$
    
    - _Ví dụ minh họa:_ VD3, $\lim_{x\rightarrow 1}\frac{x^{100}-2x+1}{x^{50}-2x+1} = \lim_{x\rightarrow 1}\frac{100x^{99}-2}{50x^{49}-2} = \frac{98}{48} = \frac{49}{24}$29.
        
3. **Quy tắc Ngắt bỏ:** 30
    
    - **Ngắt bỏ VCB bậc cao** khi $x\rightarrow 0$: $x+x^2 \sim x$31.
        
    - **Ngắt bỏ VCL bậc thấp** khi $x\rightarrow \infty$: $x+x^3 \sim x^3$32.
        
4. **Dạng $\infty-\infty$:**
    
    - Phương pháp: **Quy đồng** để đưa về dạng $\frac{0}{0}$ hoặc $\frac{\infty}{\infty}$33.
        
5. **Dạng Mũ $0^0, \infty^0, 1^\infty$:**
    
    - Sử dụng công thức chuyển đổi: $\lim_{x\rightarrow x_0}u(x)^{v(x)}=e^{\lim_{x\rightarrow x_0}v(x)\ln(u(x))}$34.
        
    - _Ví dụ minh họa:_ VD5, $\lim_{x\rightarrow 0^+}(\cos\sqrt{x})^{\frac{1}{x}} = e^{\lim_{x\rightarrow 0^+}\frac{\ln(\cos\sqrt{x})}{x}} = e^{-1/2}$35353535.
        

---

### 4. Nguyên lý Kẹp (Squeeze Theorem)

- Nếu có $f(x)\le g(x)\le h(x)$ và $\lim_{x\rightarrow x_0}f(x)=\lim_{x\rightarrow x_0}h(x)=L$, thì $\lim_{x\rightarrow x_0}g(x)=L$36.
    

---

Bạn muốn tôi giải thích rõ hơn về một khái niệm hay phương pháp nào trong số này không?