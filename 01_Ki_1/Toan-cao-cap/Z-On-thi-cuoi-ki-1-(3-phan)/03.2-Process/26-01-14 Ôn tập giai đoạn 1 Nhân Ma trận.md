---
tags:
  - university
  - Math
  - Exame
source: "[[z_Data_Media/old data note/Daily Note 2025 Sep2Dec/A_Ôn_cuồi_kỳ_1 2025/Toán_Cao_cấp/Ôn thi chi tiết/_data-view+Road_Map - Math 2025-2026 (1)]]"
source 2: https://gemini.google.com/u/0/app/202c9c557e8cc340
---
# GIAI ĐOẠN 1: ĐẠI SỐ TUYẾN TÍNH - XÂY DỰNG KHUNG CƠ SỞ

_Tập trung vào các quy tắc biến đổi số học trên bảng số._

- [x] **Bước 1: Các phép toán Ma trận cơ bản**
    
    - [x] Cộng/trừ các phần tử tương ứng.
        
    - [x] Phép nhân ma trận (Số cột ma trận trước = Số hàng ma trận sau).
        
- [x] **Bước 2: Định thức (Determinant)**
    
    - [x] Quy tắc nhân chéo cho ma trận 2x2.
        
    - [x] Tính định thức cấp 3 (Quy tắc Sarrus) và cấp cao (Khai triển Laplace).
        
    - [x] Nắm vững các tính chất (ví dụ: tráo hàng thì đổi dấu).
        
- [x] **Bước 3: Ma trận nghịch đảo ($A^{-1}$)**
    
    - [x] Điều kiện tồn tại nghịch đảo ($\det \neq 0$).
        
    - [x] Tìm nghịch đảo bằng công thức nhanh (cho 2x2).
    - [x] Phương pháp Gauss-Jordan (biến đổi $[A|I]$ thành $[I|A^{-1}]$).
        
- [x] **Bước 4: Giải Hệ phương trình tuyến tính**
    
    - [x] Phương pháp Gauss đưa về hệ bậc thang.
        
    - [ ] Sử dụng ma trận nghịch đảo $X = A^{-1}B$.
        
## Kiến thức về phép nhân ma trận
Chào bạn, rất vui được hỗ trợ bạn với kiến thức về **Phép nhân ma trận**. Đây là một trong những phần quan trọng nhất của Đại số tuyến tính, đặc biệt là đối với các bạn sinh viên khối ngành kỹ thuật và CNTT.

Dưới đây là hướng dẫn chi tiết về nền tảng và cách thực hiện phép tính này:

---

### 1. Điều kiện để thực hiện phép nhân

Để nhân hai ma trận, bạn cần nhớ quy tắc "vàng" về kích thước (chiều) của chúng:

> **Số cột của ma trận đứng trước phải bằng Số hàng của ma trận đứng sau.**

Giả sử ta có hai ma trận $A$ và $B$:

- Ma trận $A$ có kích thước: **$m \times n$** ($m$ hàng, $n$ cột).
    
- Ma trận $B$ có kích thước: **$n \times p$** ($n$ hàng, $p$ cột).
    

Vì số cột của $A$ là $n$ và số hàng của $B$ cũng là $n$, nên phép nhân $A \times B$ **thực hiện được**. Ma trận kết quả $C$ sẽ có kích thước là **$m \times p$**.

---

### 2. Công thức tính toán

Phép nhân ma trận được thực hiện theo nguyên tắc: **Lấy hàng của ma trận trước nhân với cột của ma trận sau.**

Nếu gọi $C = A \times B$, thì phần tử ở hàng $i$, cột $j$ của ma trận $C$ (ký hiệu là $c_{ij}$) được tính bằng công thức:

$$c_{ij} = \sum_{k=1}^{n} a_{ik} \cdot b_{kj} = a_{i1}b_{1j} + a_{i2}b_{2j} + \dots + a_{in}b_{nj}$$

**Cách hình dung đơn giản:**

1. Chọn hàng $i$ của ma trận $A$.
    
2. Chọn cột $j$ của ma trận $B$.
    
3. Nhân từng cặp phần tử tương ứng rồi cộng tất cả lại với nhau.
    

---

### 3. Ví dụ minh họa bước từng bước

Cho hai ma trận:

$A = \begin{bmatrix} 1 & 2 \\ 3 & 4 \end{bmatrix}$ (cỡ $2 \times 2$) và $B = \begin{bmatrix} 5 & 6 \\ 7 & 8 \end{bmatrix}$ (cỡ $2 \times 2$)

Ma trận kết quả $C = A \times B$ cũng sẽ có cỡ $2 \times 2$:

- Tính $c_{11}$ (Hàng 1 của A $\times$ Cột 1 của B):
    
    $$1 \cdot 5 + 2 \cdot 7 = 5 + 14 = 19$$
    
- Tính $c_{12}$ (Hàng 1 của A $\times$ Cột 2 của B):
    
    $$1 \cdot 6 + 2 \cdot 8 = 6 + 16 = 22$$
    
- Tính $c_{21}$ (Hàng 2 của A $\times$ Cột 1 của B):
    
    $$3 \cdot 5 + 4 \cdot 7 = 15 + 28 = 43$$
    
- Tính $c_{22}$ (Hàng 2 của A $\times$ Cột 2 của B):
    
    $$3 \cdot 6 + 4 \cdot 8 = 18 + 32 = 50$$
    

**Kết quả:** $C = \begin{bmatrix} 19 & 22 \\ 43 & 50 \end{bmatrix}$

---

### 4. Những lưu ý quan trọng (Để tránh mất điểm)

- **Tính chất không giao hoán:** Khác với số học thông thường, trong ma trận $A \cdot B$ thường **không bằng** $B \cdot A$. Thậm chí, đôi khi $A \cdot B$ nhân được nhưng $B \cdot A$ thì không (do lệch kích thước).
    
- **Ma trận đơn vị ($I$):** Ma trận nào nhân với ma trận đơn vị cũng bằng chính nó ($A \cdot I = I \cdot A = A$).
    
- **Nhân với ma trận không:** Ma trận nào nhân với ma trận không cũng bằng ma trận không.
    

---

## Video youtube hướng dẫn https://www.youtube.com/watch?v=hdAyr3416hY 
Dưới đây là tóm tắt nội dung video **"Toán cao cấp - Phép nhân ma trận"** của Thầy Kenka giúp bạn nắm vững kiến thức:

### 1. Điều kiện để nhân hai ma trận

* Để thực hiện phép nhân , điều kiện tiên quyết là **số cột của ma trận trước () phải bằng số hàng của ma trận sau ()** [[05:31](http://www.youtube.com/watch?v=hdAyr3416hY&t=331)].
* Nếu ma trận  có kích thước  và ma trận  có kích thước , thì ma trận kết quả  sẽ có kích thước  [[10:28](http://www.youtube.com/watch?v=hdAyr3416hY&t=628)].

### 2. Quy tắc thực hiện (Quy tắc "Dòng nhân Cột")

* Phần tử tại dòng , cột  của ma trận kết quả được tính bằng cách lấy **dòng  của ma trận trước nhân với cột  của ma trận sau** [[01:43](http://www.youtube.com/watch?v=hdAyr3416hY&t=103)].
* Cách tính cụ thể: Nhân từng phần tử ở vị trí tương ứng của dòng và cột đó, sau đó cộng tất cả các kết quả lại với nhau [[09:13](http://www.youtube.com/watch?v=hdAyr3416hY&t=553)].

### 3. Các ví dụ minh họa trong video

* **Ví dụ 1 (Ma trận vuông 2x2):** Thầy hướng dẫn cách tính chi tiết từng phần tử  bằng cách nhẩm và ghi chép cẩn thận để tránh sai sót [[01:28](http://www.youtube.com/watch?v=hdAyr3416hY&t=88)].
* **Ví dụ 2 (Ma trận 2x3 nhân với 3x2):** Minh họa trường hợp số lượng phần tử trong dòng và cột nhiều hơn (3 phần tử). Kết quả thu được là một ma trận vuông cấp 2 [[04:31](http://www.youtube.com/watch?v=hdAyr3416hY&t=271)].
* **Ví dụ 3 (Ma trận 3x2 nhân với 2x3):** Một ví dụ phức tạp hơn dẫn đến ma trận kết quả có kích thước lớn hơn là 3x3 [[11:05](http://www.youtube.com/watch?v=hdAyr3416hY&t=665)].

### 4. Công thức tổng quát

Video tóm gọn bằng công thức toán học:
Nếu  và  thì  [[10:19](http://www.youtube.com/watch?v=hdAyr3416hY&t=619)].

**Lời khuyên từ giảng viên:** Bạn nên bắt đầu từ những bài tập đơn giản, tính toán chậm rãi từng bước để làm quen với quy tắc trước khi thực hiện các ma trận có kích thước lớn hơn [[14:03](http://www.youtube.com/watch?v=hdAyr3416hY&t=843)].

Chi tiết video tại: [https://www.youtube.com/watch?v=hdAyr3416hY](https://www.youtube.com/watch?v=hdAyr3416hY)
## Bài tập Phép nhân ma trận (Số cột ma trận trước = Số hàng ma trận sau). 

Dựa trên các nguồn tài liệu bạn cung cấp, phép nhân ma trận là một phép toán quan trọng yêu cầu điều kiện **số cột của ma trận thứ nhất phải bằng số hàng của ma trận thứ hai**,.

Dưới đây là các bài tập được tổng hợp từ các nguồn để bạn luyện tập kỹ năng này:

### 1. Bài tập tính toán trực tiếp
Dạng bài này giúp bạn làm quen với quy tắc tính phần tử $c_{ij}$ bằng cách lấy tổng các tích của hàng $i$ (ma trận $A$) với cột $j$ (ma trận $B$),.

*   **Bài tập 1 (Ma trận $2 \times 3$ và $3 \times 2$):** Tính tích $C = A \times B$ với:
    $$A = \begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \end{pmatrix}, \quad B = \begin{pmatrix} 7 & 8 \\ 9 & 10 \\ 11 & 12 \end{pmatrix}$$
    *(Gợi ý: Ma trận kết quả $C$ sẽ có kích thước $2 \times 2$. Đáp án trong nguồn là $\begin{pmatrix} 58 & 64 \\ 139 & 154 \end{pmatrix}$)*,,.
*   **Bài tập 2 (Ma trận vuông $2 \times 2$):** Tính tích $A \times B$ với:
    $$A = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix}, \quad B = \begin{pmatrix} 5 & 6 \\ 7 & 8 \end{pmatrix}$$
   ,.
*   **Bài tập 3 (Nhân với ma trận đơn vị):** Tính $A \times I$ và $I \times A$ với $A = \begin{pmatrix} 4 & 7 \\ 2 & 6 \end{pmatrix}$ và $I = \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix}$ để kiểm chứng tính chất của ma trận đơn vị,.

### 2. Bài tập kiểm tra điều kiện kích thước
Trước khi thực hiện phép nhân, bạn cần xác định xem phép toán có khả thi hay không dựa trên quy tắc $A_{m \times n} \times B_{n \times p} = C_{m \times p}$,.

*   **Bài tập 4:** Cho các ma trận có kích thước sau: $M_{3 \times 2}, N_{2 \times 5}, P_{5 \times 3}$. Hỏi các phép nhân nào sau đây thực hiện được và kích thước ma trận kết quả là bao nhiêu?
    *   a) $M \times N$
    *   b) $N \times P$
    *   c) $M \times P$
    *   d) $P \times M$
   ,.

### 3. Bài tập về tính chất không giao hoán
Phép nhân ma trận thông thường không có tính giao hoán ($AB \neq BA$),.

*   **Bài tập 5:** Sử dụng hai ma trận $A$ và $B$ trong **Bài tập 1**:
    *   Tính $A \times B$ (kết quả cấp $2 \times 2$).
    *   Tính $B \times A$ (kết quả cấp $3 \times 3$).
    *   So sánh hai kết quả để thấy sự khác biệt về kích thước và giá trị phần tử,,.

### 4. Bài tập ứng dụng trong Phương trình Ma trận
Dạng bài này yêu cầu bạn thực hiện phép nhân sau khi đã tìm được ma trận nghịch đảo ($X = A^{-1}B$ hoặc $X = BA^{-1}$),,.

*   **Bài tập 6:** Giải phương trình $AX = B$ bằng cách thực hiện phép nhân $A^{-1} \times B$:
    $$A = \begin{pmatrix} 1 & 2 \\ 0 & 3 \end{pmatrix}, \quad B = \begin{pmatrix} 3 & 1 \\ 4 & 2 \end{pmatrix}$$
    *(Gợi ý: Đầu tiên tính $A^{-1}$, sau đó thực hiện phép nhân ma trận)*.
*   **Bài tập 7:** Giải phương trình $XA = B$ bằng cách thực hiện phép nhân $B \times A^{-1}$:
    $$A = \begin{pmatrix} 2 & 1 \\ 1 & 3 \end{pmatrix}, \quad B = \begin{pmatrix} 5 & 4 \\ 7 & 6 \end{pmatrix}$$
   .
*   **Bài tập 8:** Thực hiện phép nhân ma trận trong phương trình có tham số: Tìm $X = A^{-1}C$ sau khi đã tính $C = 2B$ với:
    $$A = \begin{pmatrix} 0 & 1 \\ -1 & 2 \end{pmatrix}, \quad B = \begin{pmatrix} 1 & 0 \\ 0 & -1 \end{pmatrix}$$
   ,.

**Lưu ý khi luyện tập:** Thứ tự nhân ma trận là cực kỳ quan trọng. Bạn phải nhân $A^{-1}$ vào đúng phía (bên trái hoặc bên phải) tương ứng với vị trí của $A$ trong phương trình gốc để kết quả được chính xác,.

## Kiến thức - định thức ma trận 2x2
Định thức của một ma trận vuông cấp 2 là một số thực đặc trưng được tính toán dựa trên các phần tử của ma trận đó,. Đây là bước nền tảng và đơn giản nhất trong việc xử lý các bài toán về ma trận,.

Dưới đây là hướng dẫn chi tiết về quy tắc nhân chéo cho ma trận 2x2 dựa trên các nguồn tài liệu:

### 1. Công thức tổng quát
Giả sử chúng ta có một ma trận vuông cấp 2 dạng tổng quát là:
$$A = \begin{pmatrix} a & b \\ c & d \end{pmatrix}$$,,

Quy tắc nhân chéo để tính định thức, ký hiệu là **$\det(A)$** hoặc **$|A|$**, được thực hiện bằng cách lấy tích của hai phần tử trên đường chéo chính trừ đi tích của hai phần tử trên đường chéo phụ,,.

**Công thức cụ thể:**
$$\mathbf{\det(A) = ad - bc}$$,,,

### 2. Các ví dụ minh họa
*   **Ví dụ 1:** Tìm định thức của ma trận $A = \begin{pmatrix} 3 & 1 \\ 5 & 2 \end{pmatrix}$,.
    *   Áp dụng công thức: $\det(A) = (3 \times 2) - (1 \times 5)$,.
    *   Kết quả: $\det(A) = 6 - 5 = \mathbf{1}$,.
*   **Ví dụ 2:** Tìm định thức của ma trận $A = \begin{pmatrix} 4 & 7 \\ 2 & 6 \end{pmatrix}$,.
    *   Áp dụng công thức: $\det(A) = (4 \times 6) - (7 \times 2)$,.
    *   Kết quả: $\det(A) = 24 - 14 = \mathbf{10}$,.
*   **Ví dụ 3:** Xét ma trận $A = \begin{pmatrix} 1 & 2 \\ 0 & 3 \end{pmatrix}$.
    *   Áp dụng công thức: $\det(A) = (1 \times 3) - (2 \times 0) = \mathbf{3}$.

### 3. Ý nghĩa và lưu ý quan trọng
*   **Điều kiện tồn tại ma trận nghịch đảo:** Việc tính định thức cấp 2 là bước bắt buộc để kiểm tra xem ma trận có khả nghịch hay không,. Ma trận $A$ chỉ có nghịch đảo khi và chỉ khi **$\det(A) \neq 0$**,,,.
*   **Ma trận suy biến:** Nếu kết quả phép nhân chéo cho ra **$\det(A) = 0$**, ma trận đó được gọi là ma trận suy biến và **không có nghịch đảo**,,,.
*   **Ứng dụng:** Định thức cấp 2 còn là thành phần cốt lõi để tính toán các định thức cấp cao hơn thông qua phương pháp khai triển Laplace (đưa định thức cấp $n$ về các định thức con cấp $n-1$),.

**Mẹo ghi nhớ:** Hãy tưởng tượng một dấu **"X"** đè lên ma trận; bạn nhân các số theo đường chéo từ trái sang phải trước ($ad$), sau đó trừ đi tích của đường chéo từ phải sang trái ($bc$),,.


### 4. Tổng hợp kiến thức mà Bảo cần tập trung vào thẻ anki
- ma trân suy biến 
- điều kiện để có ma trận nghịch đảo
- công thức tìm định thức cho ma trận 2x2

## Kiến thức về định thức cấp 3 - (Quy tắc Sarrus) và cấp cao (Khai triển Laplace).

Phần kiến thức này tôi đã học và nhớ khá rõ về quy tắc sarrus rồi, còn triển khai theo Laplace thì tôi chưa rõ, nhưng vì điều kiện thi sắp gấp nên tạm thời tôi sẽ bỏ qua, và nhảy sang kiến thức khác (áp dụng quy tắc 80/20 để học - tập trung những kiến thức trọng tâm, dễ ăn điểm và đạt được điểm cao)

## Kiến thức tính chất quan trọng trong định thức
### 1. Quy tắc Vàng: Đổi chỗ hàng hoặc cột
Đây là tính chất bạn đã nhắc tới và là trọng tâm của nhiều bài tập biện luận.
*   **Tính chất:** Mỗi lần bạn **tráo chỗ 2 hàng** (hoặc 2 cột) cho nhau, giá trị định thức sẽ **đổi dấu** (nhân với -1).
*   **Cách nhớ nhanh:** 
    *   Tráo số **LẺ** lần (1, 3, 5...) $\rightarrow$ Đổi dấu (thành $-\Delta$).
    *   Tráo số **CHẴN** lần (2, 4, 6...) $\rightarrow$ Giữ nguyên dấu (vẫn là $\Delta$).
*   **Ví dụ:** Nếu tráo hàng 1 với hàng 2, sau đó tráo tiếp hàng 2 với hàng 3 (tổng cộng 2 lần tráo), định thức không đổi giá trị.

### 2. Các phép biến đổi sơ cấp khác trên hàng/cột
Ngoài việc tráo hàng, bạn cần nhớ tác động của hai phép biến đổi còn lại:
*   **Cộng bội của hàng này vào hàng khác:** Nếu bạn lấy một hàng nhân với số $k$ rồi cộng vào một hàng khác ($H_i \leftarrow H_i + kH_j$), định thức **KHÔNG THAY ĐỔI** giá trị. Đây là công cụ mạnh nhất để tạo ra các số 0 nhằm đơn giản hóa việc khai triển Laplace.
*   **Nhân một hàng với số $k \neq 0$:** Khi một hàng (hoặc cột) được nhân với $k$, định thức sẽ **tăng lên $k$ lần**. Ngược lại, nếu một hàng có nhân tử chung là $k$, bạn có thể "rút" $k$ ra ngoài định thức. 
    *   *Lưu ý:* Khác với ma trận (nhân $k$ vào tất cả phần tử), định thức chỉ rút $k$ từ **MỘT** hàng hoặc **MỘT** cột.

### 3. Dấu hiệu nhận biết định thức bằng 0
Bạn có thể kết luận ngay $\det(A) = 0$ nếu ma trận có một trong các đặc điểm sau:
*   **Hai hàng (hoặc cột) giống hệt nhau**.
*   **Hai hàng (hoặc cột) tỉ lệ với nhau**.
*   **Một hàng (hoặc cột) toàn số 0**.
*   **Một hàng là tổ hợp tuyến tính của các hàng khác**.

### 4. Các tính chất quan trọng khác để giải toán nhanh
*   **Định thức ma trận chuyển vị:** $\det(A) = \det(A^T)$. Điều này có nghĩa là mọi tính chất của hàng đều đúng cho cột.
*   **Định thức của một tích:** $\det(AB) = \det(A) \cdot \det(B)$.
*   **Ma trận tam giác:** Định thức của ma trận tam giác (trên hoặc dưới) bằng **tích các phần tử trên đường chéo chính**. Đây là đích đến khi bạn dùng các phép biến đổi sơ cấp để giải định thức cấp cao.
*   **Ma trận nghịch đảo:** Ma trận $A$ khả nghịch (có $A^{-1}$) khi và chỉ khi $\det(A) \neq 0$.

**Lời khuyên từ các nguồn:** Để ghi nhớ sâu, bạn nên thực hành bài toán "đếm số lần tráo hàng" (như bài 3.4 trong nguồn) và tập biến đổi định thức về dạng tam giác để thấy sự tiện lợi của việc kết hợp các tính chất này.

### 5. Nhận xét của Bảo - để học , ôn tập và tạo thẻ anki phù hợp (tập trung học theo 80/20)
- Tôi sẽ không cần nhớ về dấu hiệu nhận biết định thức bằng 0 -> vì khá tốn thời gian -> chỉ cần tập trung nhớ kiến thức là được
- về những phần tính chất sau có lẽ tôi phải cần ôn tập lại (tôi hình như đã quên rồi) "Quy tắc Vàng: Đổi chỗ hàng hoặc cột" ; "Các tính chất quan trọng khác để giải toán nhanh"
- Phần kiến thức này tôi đã nhớ rõ nên sẽ không cần ôn lại nữa "Các phép biến đổi sơ cấp khác trên hàng/cột

## Kiến thức tính chất quan trọng trong định thức 2.0
Chào Bảo, rất tốt khi bạn đã xác định được những phần kiến thức cần tập trung theo nguyên lý 80/20 để tối ưu hóa việc học. Dựa trên các nguồn tài liệu, tôi sẽ giúp bạn hệ thống lại hai phần bạn cần ôn tập là **"Quy tắc Vàng"** và **"Các tính chất quan trọng"** để bạn có thể tạo thẻ Anki hiệu quả.

### 1. Quy tắc Vàng: Đổi chỗ hàng hoặc cột
Đây là tính chất quan trọng nhất khi bạn cần so sánh giá trị giữa các định thức có cùng các phần tử nhưng khác vị trí.

*   **Nội dung quy tắc:** Khi bạn **đổi chỗ hai hàng** (hoặc hai cột) bất kỳ của một định thức, giá trị của định thức mới sẽ **đổi dấu** (nhân với -1).
*   **Cách nhớ theo số lần tráo (Quy tắc Chẵn - Lẻ):**
    *   Tráo **LẺ** lần (1, 3, 5...): Kết quả đổi dấu ($\rightarrow -\Delta$).
    *   Tráo **CHẴN** lần (0, 2, 4...): Kết quả giữ nguyên dấu ($\rightarrow \Delta$).
*   **Ví dụ ứng dụng:** Nếu bạn muốn đưa hàng 3 lên vị trí hàng 1, bạn có thể tráo H1 với H3 (1 lần - đổi dấu). Nếu tráo tiếp hàng vừa đổi đó với hàng khác, dấu sẽ quay trở lại trạng thái ban đầu.

### 2. Các tính chất quan trọng để giải toán nhanh
Những tính chất này giúp bạn xử lý các biểu thức phức tạp mà không cần phải tính toán thủ công từng bước khai triển.

*   **Ma trận tam giác:** Định thức của ma trận tam giác (trên hoặc dưới) bằng **tích các phần tử trên đường chéo chính**. Đây là mục tiêu cuối cùng khi bạn dùng các phép biến đổi sơ cấp để đưa định thức về dạng đơn giản.
*   **Định thức của tích:** $\det(AB) = \det(A) \cdot \det(B)$. Tính chất này cực kỳ hữu ích khi gặp các bài toán nhân nhiều ma trận vuông với nhau.
*   **Ma trận chuyển vị:** $\det(A) = \det(A^T)$. Mọi quy tắc áp dụng cho hàng cũng đều đúng khi áp dụng cho cột.
*   **Nhân một số với một hàng/cột:** Nếu bạn rút một nhân tử chung $k$ từ **MỘT** hàng hoặc **MỘT** cột, định thức sẽ giảm đi $k$ lần (hoặc ngược lại, nhân $k$ vào một hàng thì định thức tăng $k$ lần). 
    *   **Lưu ý quan trọng (Để không nhầm với Ma trận):** Với ma trận $k \cdot A$, bạn nhân $k$ vào tất cả phần tử. Với định thức, $\det(k \cdot A) = k^n \cdot \det(A)$ (với $n$ là cấp của ma trận) vì mỗi hàng đều rút ra được một hằng số $k$.
*   **Điều kiện khả nghịch:** Một ma trận vuông $A$ có ma trận nghịch đảo $A^{-1}$ khi và chỉ khi $\det(A) \neq 0$.

### 3. Gợi ý cấu trúc thẻ Anki (80/20)
Để nhớ lâu, bạn có thể tạo các thẻ theo dạng **Câu hỏi - Đáp án ngắn**:

*   **Thẻ 1:** Đổi chỗ 2 hàng của định thức 1 lần $\rightarrow$ **Dấu thay đổi thế nào?**
    *   *Đáp án:* Đổi dấu (nhân với -1).
*   **Thẻ 2:** Đổi chỗ hàng/cột tổng cộng 4 lần $\rightarrow$ **Dấu thay đổi thế nào?**
    *   *Đáp án:* Giữ nguyên dấu (vì 4 là số chẵn).
*   **Thẻ 3:** $\det(A \cdot B)$ bằng gì?
    *   *Đáp án:* $\det(A) \cdot \det(B)$.
*   **Thẻ 4:** Định thức ma trận tam giác tính thế nào?
    *   *Đáp án:* Tích các phần tử trên đường chéo chính.
*   **Thẻ 5:** So sánh $\det(A)$ và $\det(A^T)$?
    *   *Đáp án:* Bằng nhau.
*   **Thẻ 6:** Cho ma trận $A$ cấp 3, $\det(2A) = ?$
    *   *Đáp án:* $2^3 \cdot \det(A) = 8 \cdot \det(A)$.

Việc bạn đã nắm rõ các phép biến đổi sơ cấp khác (như cộng bội của hàng này vào hàng khác không làm thay đổi định thức) là một lợi thế lớn, vì đó là công cụ chính để đưa ma trận về dạng tam giác nhằm áp dụng tính chất tính nhanh ở trên

## Kiến thức về ma trận nghịch đảo
Để hoàn thành **Bước 3** trong lộ trình ôn tập về **Ma trận nghịch đảo ($A^{-1}$)**, bạn cần nắm vững các kiến thức trọng tâm sau đây từ nguồn tài liệu:
### 1. Điều kiện tồn tại ma trận nghịch đảo
Một ma trận $A$ chỉ có thể có ma trận nghịch đảo khi thỏa mãn đồng thời hai điều kiện:
*   **Phải là ma trận vuông:** Số hàng phải bằng số cột (cấp $n \times n$).
*   **Định thức phải khác 0 ($\det(A) \neq 0$):** Ma trận thỏa mãn điều kiện này được gọi là ma trận **khả nghịch** hoặc **không suy biến**. Nếu $\det(A) = 0$, ma trận không có nghịch đảo.

### 2. Tìm nghịch đảo bằng công thức nhanh (cho ma trận $2 \times 2$)
Đây là trường hợp đơn giản và phổ biến nhất, cho phép bạn tìm kết quả trực tiếp thông qua 2 bước:

Cho ma trận $A = \begin{pmatrix} a & b \\ c & d \end{pmatrix}$.
*   **Bước 1: Tính định thức:** $\det(A) = ad - bc$.
*   **Bước 2: Áp dụng công thức:**
    $$\mathbf{A^{-1} = \frac{1}{\det(A)} \begin{pmatrix} d & -b \\ -c & a \end{pmatrix}}$$.

**Mẹo ghi nhớ nhanh:**
1. Lấy **$1$ chia cho định thức**.
2. **Hoán đổi vị trí** hai phần tử trên đường chéo chính ($a$ và $d$).
3. **Đổi dấu** hai phần tử trên đường chéo phụ ($b$ và $c$).

*Ví dụ:* Với $A = \begin{pmatrix} 3 & 1 \\ 5 & 2 \end{pmatrix}$, ta có $\det(A) = 1$, vậy $A^{-1} = \begin{pmatrix} 2 & -1 \\ -5 & 3 \end{pmatrix}$.

### 3. Phương pháp khử Gauss-Jordan (cho ma trận cấp cao $n \ge 3$)
Phương pháp này biến đổi ma trận $A$ thành ma trận đơn vị $I$ để tìm nghịch đảo, rất hiệu quả cho tính toán thực hành.

*   **Bước 1: Lập ma trận mở rộng $[A | I]$:** Viết ma trận $A$ và ma trận đơn vị $I$ cùng cấp cạnh nhau.
*   **Bước 2: Sử dụng các phép biến đổi sơ cấp trên hàng:** Áp dụng liên tiếp 3 phép biến đổi (nhân một hàng với số khác 0, cộng một bội số của hàng này vào hàng khác, hoán đổi hai hàng) để biến vế trái (ma trận $A$) thành ma trận đơn vị $I$.
*   **Bước 3: Kết quả:** Khi phần bên trái trở thành $I$, thì phần bên phải của ma trận mở rộng chính là ma trận nghịch đảo $A^{-1}$.
    $$[A | I] \xrightarrow{\text{biến đổi hàng}} [I | A^{-1}]$$

**Lưu ý quan trọng:** Nếu trong quá trình biến đổi Gauss-Jordan, bạn gặp một hàng có **toàn số 0** ở phần bên trái, điều đó có nghĩa là $\det(A) = 0$ và ma trận đó không có nghịch đảo.

Việc nắm vững Bước 3 này sẽ giúp bạn giải quyết các **Phương trình ma trận** ở bước tiếp theo, nơi bạn cần thực hiện phép "chia" bằng cách nhân với $A^{-1}$ vào bên trái hoặc bên phải của vế còn lại.

### 4. Nhận xét của Bảo
- Tập trung ôn phần kiến thức chưa rõ "Phương pháp khử Gauss-Jorda"

## Bài tập và kiến thức về phương pháp khử Gauss-Jordan
Dựa trên các nguồn tài liệu và lộ trình bạn đang theo dõi, **phương pháp khử Gauss-Jordan** là một kỹ thuật mạnh mẽ được sử dụng chủ yếu để tìm ma trận nghịch đảo cho các ma trận cấp cao ($n \geq 3$) và giải các hệ phương trình tuyến tính bằng cách đưa về dạng ma trận đơn vị,,.

Dưới đây là các dạng bài tập trọng tâm để bạn ôn tập phần kiến thức này:

### 1. Dạng tìm ma trận nghịch đảo ($A^{-1}$)
Đây là ứng dụng phổ biến nhất của Gauss-Jordan trong tài liệu. Bạn cần thực hiện biến đổi ma trận mở rộng $[A | I]$ thành $[I | A^{-1}]$ thông qua các phép biến đổi sơ cấp trên hàng,.

*   **Bài tập 1 (Ma trận cấp 3):** Tìm ma trận nghịch đảo của ma trận $A$ sau bằng phương pháp Gauss-Jordan:
    $$A = \begin{pmatrix} 3 & 0 & 5 \\ 2 & 1 & 3 \\ 1 & -2 & 4 \end{pmatrix}$$
    *(Gợi ý: Lập ma trận mở rộng $[A|I_3]$ và biến đổi vế trái về ma trận đơn vị,)*
*   **Bài tập 2 (Kiểm tra tính khả nghịch):** Sử dụng Gauss-Jordan để tìm nghịch đảo của ma trận $M$. Nếu trong quá trình biến đổi xuất hiện một hàng toàn số 0 ở vế trái, hãy kết luận về định thức và tính khả nghịch của ma trận đó,.
    $$M = \begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \\ 7 & 8 & 9 \end{pmatrix}$$

### 2. Dạng giải phương trình ma trận $AX = B$ hoặc $XA = B$
Để giải các phương trình này cho ma trận cấp cao, bạn không dùng công thức nhanh của ma trận 2x2 mà nên dùng Gauss-Jordan để tìm $A^{-1}$ trước, sau đó thực hiện phép nhân ma trận,,.

*   **Bài tập 3:** Tìm ma trận $X$ thỏa mãn $AX = B$, với:
    $$A = \begin{pmatrix} 1 & 1 & 2 \\ 2 & 4 & -3 \\ 3 & 6 & -5 \end{pmatrix}, \quad B = \begin{pmatrix} 9 \\ 1 \\ 0 \end{pmatrix}$$
    *(Gợi ý: Tìm $A^{-1}$ bằng Gauss-Jordan rồi tính $X = A^{-1}B$,)*

### 3. Dạng giải hệ phương trình tuyến tính (HPTTT)
Thay vì chỉ dừng lại ở dạng bậc thang (phương pháp Gauss), phương pháp Gauss-Jordan yêu cầu bạn biến đổi ma trận hệ số về hẳn dạng **ma trận đơn vị** (hoặc ma trận chéo) để tìm trực tiếp giá trị của các ẩn mà không cần bước thế ngược,.

*   **Bài tập 4:** Giải hệ phương trình sau bằng cách đưa ma trận bổ sung về dạng bậc thang rút gọn (Gauss-Jordan):
    $$\begin{cases} x + y + 2z = 9 \\ 2x + 4y - 3z = 1 \\ 3x + 6y - 5z = 0 \end{cases}$$
    *(Gợi ý: Biến đổi ma trận bổ sung sao cho vế trái trở thành ma trận đơn vị $I_3$, khi đó cột hằng số vế phải chính là nghiệm $(x, y, z)$,)*

### 4. Dạng bài tập tổng hợp có chứa tham số
*   **Bài tập 5:** Cho ma trận $A = \begin{pmatrix} 1 & 2 \\ 0 & 1 \end{pmatrix}$ và $B = \begin{pmatrix} 2 & 1 \\ -1 & 0 \end{pmatrix}$. Giải phương trình $XA - B = 2I$ bằng cách tìm $A^{-1}$ qua Gauss-Jordan,.

**Mẹo để ghi nhớ và làm bài nhanh:**
*   Luôn viết rõ các phép biến đổi hàng (ví dụ: $H_2 \to H_2 - 2H_1$) để tránh sai sót và dễ dàng kiểm tra lại,.
*   Nếu ma trận vế trái sau khi biến đổi có một hàng toàn số 0, hệ phương trình có thể vô nghiệm hoặc vô số nghiệm, và ma trận đó không có nghịch đảo,.
*   Khi làm Anki, hãy tạo thẻ về các phép biến đổi sơ cấp: tráo hàng (đổi dấu định thức nhưng không đổi nghiệm), nhân một hàng với $k$, và cộng bội của hàng này vào hàng khác,,.
## Hỏi đáp A.I thực hành bài tập - phương pháp khử Gauss-Jordan

### Q1: Bài 1
Hướng dẫn tôi từng bức để giải quyết phần bài tập này
*   **Bài tập 1 (Ma trận cấp 3):** Tìm ma trận nghịch đảo của ma trận $A$ sau bằng phương pháp Gauss-Jordan:
    $$A = \begin{pmatrix} 3 & 0 & 5 \\ 2 & 1 & 3 \\ 1 & -2 & 4 \end{pmatrix}$$
    *(Gợi ý: Lập ma trận mở rộng $[A|I_3]$ và biến đổi vế trái về ma trận đơn vị,)*
### A1:
Chúng mình sẽ cùng nhau chinh phục bài tập tìm ma trận nghịch đảo này bằng phương pháp Gauss-Jordan nhé. Mình sẽ đưa ra các gợi ý và câu hỏi dẫn dắt để bạn có thể tự mình thực hiện các phép tính.

Phương pháp Gauss-Jordan 🔢 thực chất là quá trình thực hiện các phép biến đổi sơ cấp trên hàng để biến một ma trận mở rộng từ dạng $[A|I]$ về dạng $[I|A^{-1}]$.

Trong đó:

- $I$ là ma trận đơn vị 🛡️ (các phần tử trên đường chéo chính bằng 1, còn lại bằng 0).
    
- Các phép biến đổi hàng sơ cấp bao gồm: đổi chỗ hai hàng, nhân một hàng với một số khác 0, hoặc cộng một hàng với bội của một hàng khác.
    

Bước đầu tiên, chúng mình cần lập ma trận mở rộng $[A|I_3]$ bằng cách viết ma trận đơn vị cấp 3 vào bên phải ma trận $A$:

$$\left( \begin{array}{ccc|ccc} 3 & 0 & 5 & 1 & 0 & 0 \\ 2 & 1 & 3 & 0 & 1 & 0 \\ 1 & -2 & 4 & 0 & 0 & 1 \end{array} \right)$$

Để các bước khử số ở cột 1 sau này trở nên dễ dàng hơn, chúng mình thường muốn số ở vị trí hàng 1, cột 1 là **số 1**.

Bạn hãy quan sát ma trận trên và cho mình biết: **Chúng mình có thể thực hiện phép đổi chỗ hàng 1 với hàng nào để đưa số 1 lên vị trí đầu tiên (hàng 1, cột 1) không?**

## Video Youtube hướng dẫn về ma trận nghịch đảo https://youtu.be/lDse-lK9OjE

Video này do Tiến sĩ Trần Hoan (Thầy Kenka) hướng dẫn chi tiết cách tìm **ma trận nghịch đảo cấp 3**, một nội dung quan trọng trong môn Toán cao cấp.

Dưới đây là tóm tắt quy trình thực hiện theo 4 bước được hướng dẫn trong video:

### **1. Viết công thức ma trận nghịch đảo** [[00:29](http://www.youtube.com/watch?v=lDse-lK9OjE&t=29)]

Công thức tổng quát để tìm ma trận nghịch đảo $A^{-1}$ là:

$$A^{-1} = \frac{1}{\det(A)} \cdot C^T$$

Trong đó:

- $\det(A)$ là định thức của ma trận $A$.
    
- $C^T$ là ma trận chuyển vị của ma trận các phần bù đại số.
    

### **2. Tính định thức của ma trận ($\det A$)** [[01:15](http://www.youtube.com/watch?v=lDse-lK9OjE&t=75)]

- Thầy thực hiện tính định thức để kiểm tra điều kiện tồn tại ma trận nghịch đảo (định thức phải khác 0).
    
- Sử dụng quy tắc đường chéo để tính toán. Trong ví dụ, kết quả định thức là **-50** (khác 0), do đó tồn tại ma trận nghịch đảo [[03:18](http://www.youtube.com/watch?v=lDse-lK9OjE&t=198)].
    

### **3. Tính các phần bù đại số ($A_{ij}$)** [[03:29](http://www.youtube.com/watch?v=lDse-lK9OjE&t=209)]

Đây là bước tốn nhiều công sức và dễ sai sót nhất. Thầy tính toán lần lượt 9 phần bù đại số theo từng dòng:

- **Dòng 1:** Tính được các giá trị -10, 0, 30 [[03:43](http://www.youtube.com/watch?v=lDse-lK9OjE&t=223)].
    
- **Dòng 2:** Tính được các giá trị -14, 10, 22 [[05:04](http://www.youtube.com/watch?v=lDse-lK9OjE&t=304)].
    
- **Dòng 3:** Tính được các giá trị 9, -10, -32 [[06:27](http://www.youtube.com/watch?v=lDse-lK9OjE&t=387)].
    
- _Lưu ý:_ Cần đặc biệt chú ý đến dấu của phần bù đại số dựa trên công thức $(-1)^{i+j}$ [[04:58](http://www.youtube.com/watch?v=lDse-lK9OjE&t=298)].
    

### **4. Thay vào công thức và lấy chuyển vị** [[07:49](http://www.youtube.com/watch?v=lDse-lK9OjE&t=469)]

- Sau khi có các phần bù đại số, ta lập ma trận các phần bù.
    
- Thực hiện phép **chuyển vị** (biến dòng thành cột) [[08:29](http://www.youtube.com/watch?v=lDse-lK9OjE&t=509)].
    
- Cuối cùng, nhân với hệ số $1/\det(A)$ (trong bài là $-1/50$) để có kết quả ma trận nghịch đảo cuối cùng [[08:50](http://www.youtube.com/watch?v=lDse-lK9OjE&t=530)].
    

Thầy Kenka nhấn mạnh người học cần cẩn thận ở bước tính dấu và bước chuyển vị cuối cùng để tránh bị mất điểm đáng tiếc [[09:11](http://www.youtube.com/watch?v=lDse-lK9OjE&t=551)].