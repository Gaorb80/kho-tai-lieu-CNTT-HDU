---
tags:
  - Math
  - university
  - Exame
---
# Kiến thức nền tảng
Chào Bảo, đề thi này tập trung rất rõ vào các dạng bài tập thực hành tính toán. Để chinh phục được mã đề 020100091972 của Đại học Hồng Đức, bạn cần trang bị vững vàng 4 khối kiến thức nền tảng sau đây:

### 1. Nền tảng Đại số Tuyến tính (Câu 1 & Câu 2)

Phần này chiếm tới **50% tổng số điểm** (5 điểm). Bạn cần thành thạo:

- **Kỹ thuật tính Định thức (Determinant):** Nắm vững quy tắc Sarrus cho ma trận $3 \times 3$ hoặc phương pháp khai triển theo dòng/cột. Với câu 1a, bạn cần biết cách xử lý khi có tham số $a$ trong ma trận.
    
- **Phép toán Ma trận nghịch đảo:** Ở câu 1b, để tìm $X$ trong phương trình $AX = B$, bạn cần hiểu bản chất $X = A^{-1}B$. Do đó, kỹ năng tìm ma trận nghịch đảo cấp 2 là bắt buộc.
    
- **Giải Hệ phương trình bằng phương pháp Gauss:** Câu 2 là một hệ phương trình có số ẩn (4 ẩn) nhiều hơn số phương trình (3 phương trình). Bạn cần biết cách đưa ma trận về **dạng bậc thang**, biện luận ẩn tự do và viết nghiệm tổng quát.
    

### 2. Nền tảng Giải tích Đa biến (Câu 3 & Câu 4)

Phần này chiếm **50% còn lại**, đòi hỏi tư duy hình học và khả năng tính toán chuẩn xác:

- **Tích phân kép (Double Integral):**
    
    - **Kỹ năng vẽ miền $D$:** Bạn phải biết cách vẽ các đường thẳng $x + y = 1$, $x = 0$, $y = 0$ để xác định miền tích phân là một hình tam giác.
        
    - **Kỹ năng xác định cận:** Chuyển từ miền hình học sang cận tích phân lặp (ví dụ: cho $x$ chạy từ $0$ đến $1$, thì $y$ chạy từ $0$ đến $1-x$).
        
- **Cực trị hàm hai biến:**
    
    - **Đạo hàm riêng:** Biết cách tính $f'_x$ và $f'_y$ (coi biến còn lại là hằng số).
        
    - **Giải hệ phương trình điểm dừng:** Tìm các cặp $(x, y)$ sao cho các đạo hàm riêng bằng 0.
        
    - **Xét dấu biệt thức (Hessian matrix):** Tính các đạo hàm riêng bậc hai $f''_{xx}, f''_{xy}, f''_{yy}$ và sử dụng công thức $\Delta = AC - B^2$ để kết luận điểm đó là cực đại, cực tiểu hay điểm yên ngựa.
        

### 3. Kỹ năng bổ trợ quan trọng

- **Biến đổi biểu thức đại số:** Đặc biệt là kỹ năng giải hệ phương trình phi tuyến ở câu 4 (phần tìm cực trị thường dẫn đến các hệ phương trình có chứa phân số như $y - \frac{8}{x^2} = 0$).
    
- **Tính toán phân số và số thực:** Đề thi không quá đánh đố về lý thuyết nhưng rất dễ sai sót ở các bước biến đổi ma trận hoặc tính tích phân đa thức.
    

---

### 📉 So sánh với Lộ trình hiện tại của Bảo

Lộ trình bạn đã lập ở trên **hoàn toàn bao quát hết** các kiến thức cần thiết cho đề thi này:

- **Câu 1a, 1b:** Nằm ở Bước 1, 2, 3 trong lộ trình của bạn.
    
- **Câu 2:** Nằm ở Bước 4.
    
- **Câu 3:** Nằm ở Bước 11.
    
- **Câu 4:** Nằm ở Bước 9, 10.
    

**Lời khuyên cho Bảo:** Vì ngày thi ghi trên đề là 19/01/2026 (đã trôi qua), nếu bạn đang ôn tập cho các đợt thi tương tự, hãy tập trung luyện **Câu 2 (Hệ phương trình nhiều ẩn)** và **Câu 4 (Cực trị hàm phân thức)** vì đây là hai câu dễ mất điểm do tính toán nhầm nhất.

Bạn có muốn mình hướng dẫn giải chi tiết **Câu 4** về tìm cực trị này không? Đây là dạng bài rất hay xuất hiện trong các đề thi của Đại học Hồng Đức.
# Đề thi 2 tín chỉ
**TRƯỜNG ĐẠI HỌC HỒNG ĐỨC**


**NĂM HỌC: 2025 - 2026**

**ĐỀ THI KẾT THÚC HỌC PHẦN**

- **Tên HP:** Toán cao cấp
    
- **Mã HP:** 114025 - **Số TC:** 02
    
- **Hình thức thi:** Viết
    
- **Thời gian:** 90 phút - **Ngày thi:** S. 19/01/2026
    
- **MÃ ĐỀ THI:** 020100091972
    

---

**Câu 1: (3,00 điểm)**

a) Tính định thức của ma trận sau, với $a$ là một số thực bất kỳ:

$$A = \begin{pmatrix} 3 & a & 0 \\ 2 & 1 & 1 \\ 0 & 4 & 1 \end{pmatrix}$$

b) Tìm ma trận $X$ thỏa mãn:

$$\begin{pmatrix} -2 & 1 \\ -3 & 2 \end{pmatrix} X = \begin{pmatrix} 4 \\ 3 \end{pmatrix}$$

**Câu 2: (2,00 điểm)**

Giải hệ phương trình:

$$\begin{cases} 6x_1 - x_2 + 2x_3 + 2x_4 = 3 \\ x_1 - x_2 + x_3 + 2x_4 = 1 \\ 3x_1 - 2x_2 + 2x_3 + 3x_4 = 2 \end{cases}$$

**Câu 3: (2,00 điểm)**

Tính tích phân $I = \iint_D (x^2 - 2xy) dxdy$, trong đó $D$ là miền giới hạn bởi các đường:

$x + y = 1; x = 0; y = 0$.

**Câu 4: (3,00 điểm)**

Tìm cực trị của hàm số: $f(x, y) = xy + \frac{8}{x} + \frac{1}{y}$.

---

**HẾT**

