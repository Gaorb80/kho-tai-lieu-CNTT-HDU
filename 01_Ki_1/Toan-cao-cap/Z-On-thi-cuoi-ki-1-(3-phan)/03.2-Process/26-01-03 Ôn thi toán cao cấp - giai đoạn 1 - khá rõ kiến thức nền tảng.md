---
tags:
  - Math
  - university
  - Exame
  - In_progress
source: "[[z_Data_Media/old data note/Daily Note 2025 Sep2Dec/A_Ôn_cuồi_kỳ_1 2025/Toán_Cao_cấp/Ôn thi chi tiết/_data-view+Road_Map - Math 2025-2026 (1)]]"
---
# Đôi lời:
phần kiến thức này trước tôi học tương đối kỹ rồi, nên giờ tôi sẽ ôn tập rộng lại nguyên cái phầ giai đoạn 1 này
# Bài tập ôn tập (NotebookLM)
Dựa trên các nguồn tài liệu bạn cung cấp, tôi đã tổng hợp các bài tập cụ thể tương ứng với từng bước trong **Giai đoạn 1** để bạn có thể ôn tập và rèn luyện kỹ năng biến đổi số học trên ma trận.

### Bước 1: Các phép toán Ma trận cơ bản

*   **Phép cộng và nhân vô hướng:**
    *   **Bài tập:** Cho ma trận $A = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix}$ và $B = \begin{pmatrix} -2 & 6 \\ 7 & 1 \end{pmatrix}$. Hãy tính ma trận $2A + B$.
    *   **Bài tập mẫu:** Tính tổng $A+B$ với $A = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix}$ và $B = \begin{pmatrix} 5 & 6 \\ 7 & 8 \end{pmatrix}$.
*   **Phép nhân ma trận:**
    *   **Bài tập:** Thực hiện phép nhân $A \times B$ với $A = \begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \end{pmatrix}$ và $B = \begin{pmatrix} 7 & 8 \\ 9 & 10 \\ 11 & 12 \end{pmatrix}$.
    *   **Lưu ý:** Trước khi nhân, hãy kiểm tra điều kiện: số cột của ma trận trước phải bằng số hàng của ma trận sau.

### Bước 2: Định thức (Determinant)

*   **Quy tắc Sarrus (Cho ma trận cấp 3):**
    *   **Bài tập:** Tính định thức của ma trận $M = \begin{pmatrix} 1 & 2 & 3 \\ 4 & 5 & 6 \\ 7 & 8 & 9 \end{pmatrix}$ bằng quy tắc 6 đường chéo.
*   **Khai triển Laplace (Dùng cho mọi cấp):**
    *   **Bài tập:** Tính định thức của ma trận $N = \begin{pmatrix} 3 & 0 & 5 \\ 2 & 1 & 3 \\ 1 & -2 & 4 \end{pmatrix}$ bằng cách khai triển theo dòng 1.
*   **Tính chất của định thức (Tráo hàng):**
    *   **Bài tập:** Nếu $\Delta = \begin{vmatrix} a & b & c \\ a' & b' & c' \\ a'' & b'' & c'' \end{vmatrix}$, hãy xác định dấu của định thức mới $\begin{vmatrix} a' & b' & c' \\ a'' & b'' & c'' \\ a & b & c \end{vmatrix}$ bằng cách đếm số lần tráo hàng.
*   **Mẹo nhận biết nhanh:**
    *   **Bài tập:** Giải phương trình $\det(A) = 0$ với ma trận chứa biến $x$, tìm $x$ để có hai hàng giống hệt nhau (khi đó định thức bằng 0).

### Bước 3: Ma trận nghịch đảo ($A^{-1}$)

*   **Tìm nghịch đảo ma trận 2x2 (Công thức nhanh):**
    *   **Bài tập 1:** Tìm $A^{-1}$ của ma trận $A = \begin{pmatrix} 3 & 1 \\ 5 & 2 \end{pmatrix}$.
    *   **Bài tập 2:** Tìm $A^{-1}$ của ma trận $A = \begin{pmatrix} 4 & 7 \\ 2 & 6 \end{pmatrix}$.
*   **Điều kiện tồn tại:** Luôn kiểm tra định thức $\det(A)$ trước khi tính. Nếu $\det(A) = 0$, ma trận không có nghịch đảo.
*   **Phương pháp Gauss-Jordan:** Lập ma trận mở rộng $[A|I]$ và thực hiện các phép biến đổi sơ cấp để đưa về dạng $[I|A^{-1}]$.

### Bước 4: Giải Hệ phương trình tuyến tính

*   **Giải bằng phương pháp Ma trận nghịch đảo ($X = A^{-1}B$ hoặc $X = BA^{-1}$):**
    *   **Bài tập (Dạng $AX = B$):** Giải tìm $X$ biết $A = \begin{pmatrix} 1 & 2 \\ 0 & 3 \end{pmatrix}, B = \begin{pmatrix} 3 & 1 \\ 4 & 2 \end{pmatrix}$.
    *   **Bài tập (Dạng $XA = B$):** Giải tìm $X$ biết $A = \begin{pmatrix} 5 & 2 \\ 1 & 1 \end{pmatrix}, B = \begin{pmatrix} 10 & 6 \\ 3 & 2 \end{pmatrix}$.
    *   **Bài tập biến đổi nâng cao:** Giải phương trình $XA - B = 2I$ với $A = \begin{pmatrix} 1 & 2 \\ 0 & 1 \end{pmatrix}, B = \begin{pmatrix} 2 & 1 \\ -1 & 0 \end{pmatrix}$.
*   **Giải bằng phương pháp khử Gauss (Đưa về hệ bậc thang):**
    *   **Bài tập hệ 3 ẩn:** Giải hệ $\begin{cases} x + y + 2z = 9 \\ 2x + 4y - 3z = 1 \\ 3x + 6y - 5z = 0 \end{cases}$ bằng cách lập ma trận bổ sung $[A|B]$ và khử các ẩn số ở hàng 2, 3.
    *   **Bài tập hệ 4 ẩn:** Giải hệ phương trình có vô số nghiệm (phụ thuộc tham số tự do): $\begin{cases} 3x_1 + 4x_2 + x_3 + 2x_4 = 3 \\ 6x_1 + 8x_2 + 2x_3 + 5x_4 = 7 \\ 9x_1 + 12x_2 + 3x_3 + 10x_4 = 13 \end{cases}$.

**Gợi ý:** Bạn nên bắt đầu từ việc làm thuần thục các phép toán ma trận 2x2 trong phần giải phương trình ma trận trước, sau đó mới chuyển sang phương pháp khử Gauss cho các hệ phương trình 3-4 ẩn để tránh nhầm lẫn trong tính toán.

## Hỏi đáp dạng bài quên mất cách làm
### Q1: - triển khai Laplace
Tôi không nhớ cách làm dạng bài này rồi:
*   **Khai triển Laplace (Dùng cho mọi cấp):**
    *   **Bài tập:** Tính định thức của ma trận $N = \begin{pmatrix} 3 & 0 & 5 \\ 2 & 1 & 3 \\ 1 & -2 & 4 \end{pmatrix}$ bằng cách khai triển theo dòng 1.
### A1:
Chúng ta sẽ cùng khám phá lại phương pháp Khai triển Laplace (Laplace Expansion) nhé. Tôi sẽ đặt các câu hỏi dẫn dắt để bạn dần nhớ lại cách làm. 🧩

Khai triển Laplace là kỹ thuật giúp chúng ta "bẻ nhỏ" một ma trận lớn thành các ma trận nhỏ hơn để tính định thức (). Ý tưởng chính là chọn một dòng (hoặc cột) bất kỳ, sau đó lấy từng phần tử của dòng đó nhân với **phần bù đại số** tương ứng.

Công thức cho dòng 1 của ma trận cấp 3 sẽ là:


Trong đó  là phần bù đại số, nó chứa một cái "dấu" cực kỳ quan trọng. Để xác định dấu này nhanh mà không cần tính , bạn có thể nhìn vào bảng dấu đan xen dưới đây:

|  | Cột 1 | Cột 2 | Cột 3 |
| --- | --- | --- | --- |
| **Dòng 1** | **+** | **-** | **+** |
| **Dòng 2** | - | + | - |
| **Dòng 3** | + | - | + |

Bây giờ, hãy nhìn vào **Dòng 1** của ma trận .

Theo bạn, ba phần tử của Dòng 1 này khi đi kèm với dấu (+ hoặc -) từ bảng trên sẽ trở thành những giá trị nào (ví dụ: )?

*nguồn tham kháo: https://vi.wikipedia.org/wiki/Khai_tri%E1%BB%83n_Laplace*

