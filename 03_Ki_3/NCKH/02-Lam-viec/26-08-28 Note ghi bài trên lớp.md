---
tags:
  - university
  - CSDL
---
#  Note linh tinh
## Chương 2: Mô hình dữ liệu quan hệ:
1. Các khía niệm cơ bản
2. Khoá của lược đồ quan hệ
3. Ngôn ngữ đại số quan hệ
4. Các tao tác cập nhật dữ liệu trên các quan hệ

**1.1 Miền giá trị** là phạm vi giá trị có thể dùng cho 1 thuộc tính
- Miến giá trị (domain) của thuộc tính A: tập hợp các giá trị mà thuộc tính A có thể nhận được và ký hiệu là DOM (A) hoặc Dom (A) hoặc D(A)
- Ví dụ:
	- DOM (GioiTInh) = {"Nam", "Nữ"}
	- D(Diêm) = {0..10}

**1.2. Tích Descartes**

* Gọi $D_1, D_2, ..., D_n$ là $n$ miền. Tích Descartes của $n$ miền là $D_1 \times D_2 \times ... \times D_n$ là tập tất cả $n$ - bộ ($n$ - tuples) $(v_1, v_2, ..., v_n)$ sao cho $v_i \in D_i$ với $i = 1..n$
* Ví dụ: $D_1 = \{0, 1\}, D_2 = \{a, b, c\}$, khi đó
$$D_1 \times D_2 = \{(0, a), (0, b), (0, c), (1, a), (1, b), (1, c)\}$$


**1.3. Quan hệ**
* **Định nghĩa:** Gọi $U = \{A_1, A_2, ..., A_n\}$ là tập hữu hạn của các thuộc tính, mỗi thuộc tính $A_i$ với $i = 1..n$ có miền giá trị tương ứng là $D_i$. Khi đó $r$ là quan hệ xác định trên $n$ thuộc tính nếu $r$ là tập con hoặc trùng với tích Descartes của $D_i$ ($i=1..n$)
$$r \subseteq D_1 \times D_2 \times ... \times D_n$$


* $n$ - số thuộc tính - được gọi là **ngôi** của quan hệ.
* Số hàng của quan hệ được gọi là **lực lượng** của quan hệ đó, $\vert{}r\vert{}$
* Kí hiệu là $r(U)$ hoặc $r(A1, A2, ..., An)$.

- Mỗi quan hệ có thể biểu diễn được dưới dạng bảng 2 chiều
	- Dòng (hàng) tương ứng vứi mọt bộ (bản ghi) của quan hệ
	- Cột tương ứng một thuộc tính

- **Các tính chất của quan hệ:**:
	- Một quan hệ có một tên phân biệt với tên các quan hệ khác
	- Mỗi ô trong bảng (quan hệ) chứa một giá trị nguyên tố
	- Mối thuộc tính trong quan hệ có một tên phân biệt
	- Các giá trị của một thuộc tính thuộc cùng một miền
	- Thứ tự các thuộc tính và các bộ là không quan trọng
	- Các bộ trong quan hệ là phân biệt , nghia là không có hai bộ giống hệt nhau trong một quan hệ
**1. Các khái niệm cơ bản**

* **Ví dụ:**
– **Quan hệ SINH_VIEN_K23B**

| MaSV       | HoTenSV      | NamSinh | GioiTinh | QueQuan   | MaLop   |
| ---------- | ------------ | ------- | -------- | --------- | ------- |
| 1361030001 | Lê Đình Bách | 1996    | Nam      | Thanh Hoá | 136103A |
| 1561030007 | Lê Thị Hoa   | 1998    | Nữ       | Nam Định  | 156103A |

– **Quan hệ LOP_CNTT**

| MaLop   | TenLop      | MaKhoa |
| ------- | ----------- | ------ |
| 136103A | ĐH CNTT K16 | CNTT   |
| 146103A | ĐH CNTT K17 | CNTT   |
| 156103A | ĐH CNTT K18 | CNTT   |

**1.4. Lược đồ quan hệ (Relation Schema)**

* **Định nghĩa:** Lược đồ quan hệ là sự trừu tượng hóa của quan hệ, một sự trừu tượng hóa ở mức độ cấu trúc của một bảng hai chiều.
* Khi nói tới lược đồ quan hệ tức là đề cập tới cấu trúc tổng quát của một quan hệ
* Lược đồ quan hệ R xác định trên tập thuộc tính U={$A_1, A_2, ..., A_n$} được viết là *R(A1, A2,..., An)* hay *R(U)*.
* Ví dụ SINHVIEN (MaSV, HoTenSV, NamSinh, GioiTinh, QueQuan, MaLop) là lược đồ quan hệ của Sinh viên


**1.5. Lược đồ CSDL quan hệ**

* Nhiều lược đồ cùng nằm trong một hệ thống được gọi là *lược đồ CSDL*
* Ký hiệu: $\mathcal{R} = \{R_1, R_2, ......, R_n\}$
* **Ví dụ:**
	SINHVIEN (MaSV, HoDem, TenSV, NamSinh, GioiTinh, QueQuan, MaLop)
	LOP (MaLop, TenLop, MaKhoa)
	KHOA (MaKhoa, TenKhoa, ĐC, SĐT)
	HOCPHAN (MaHP, TenHP, SoTC, HocKy, MoTa)
	KETQUA (MaSV, MaHP, DiemThi)

**2. Khoá của lược đồ quan hệ**

**2.1. Định nghĩa khóa**

* Có nhiều cách khác nhau để định nghĩa khóa:

> **Định nghĩa 2.5 \[5]\[11].** *Khoá của một quan hệ $r$ xác định trên tập thuộc tính $R=\{A_1, A_2, ..., A_n\}$ là tập con $K \subseteq \{A_1, A_2, ..., A_n\}$ nếu với mọi $t_1, t_2 \in r, t_1 \neq t_2$ đều tồn tại một thuộc tính $A \in K$ sao cho giá trị của thuộc tính $t_1$ tại $A$ khác giá trị $t_2$ tại $A$ ($t_1[A] \neq t_2[A]$).*

> **Định nghĩa 2.6. \[5]\[10].** *Quan hệ $R$ định nghĩa trên tập các thuộc tính $U=\{A_1, A_2, ..., A_n\}$. $K \subseteq U$ là khóa của quan hệ $R$ nếu thỏa 2 điều kiện sau đây:*
> * *(i) $K$ xác định được giá trị của $A_j$ với mọi $j = 1, 2, ..., n$*
> * *(ii) Không tồn tại $K' \subset K$ mà $K'$ có thể xác định được giá trị của $A_j$ với mọi $j = 1, 2, ..., n$*


**Lưu ý:** 
- Một lược đồ quan hệ có thể có nhiều khoá
- Một khoá có thể có nhiều thuộc tính

**2.2. Siêu khóa**

> **Định nghĩa 2.7.** *K' được gọi là siêu khoá của r nếu $K \subseteq K' \subseteq R$, với K là khoá của quan hệ $r(A_1, A_2, ..., A_n)$, nghĩa là với $t_1, t_2 \in r$ từ $t_1[K] \neq t_2[K]$ luôn có $t_1[K'] \neq t_2[K']$.*

$K'$ là siêu khóa của quan hệ $R$ nếu $K \subseteq K'$ là một khóa của quan hệ. Một lược đồ quan hệ Q của R luôn có ít nhất một siêu khóa và có thể có nhiều siêu khóa.

* **Ví dụ:**
SINHVIEN (MaSV, HoTen, NamSinh, GioiTinh, QueQuan, MaLop)
Lược đồ SINH_VIEN có khóa là MaSV và một số siêu khóa sau:
K1 = {MaSV, HoTen}
K2 = {MaSV, HoTen, NamSinh}
K3 = {MaSV, GioiTinh}

*K' được gọi là siêu khoá của r nếu $K \subseteq K' \subseteq U$, với K là khoá của quan hệ $r(U)$, $U=\{A1, A2, ..., An\}$*

**2.3. Khóa ngoài**

> **Định nghĩa 2.8.** *K được gọi là khoá ngoài của quan hệ r nếu như K không phải là khoá chính của quan hệ r nhưng nó lại là khoá chính của quan hệ khác.*

* **Ví dụ:**
	SINH_VIEN (MaSV, HoTen, NamSinh, GioiTinh, QueQuan, MaLop)
	LOP (MaLop, TenLop, MaKhoa)
	KHOA (MaKhoa, TenKhoa, ĐC, SĐT)
	HOCPHAN (MaHP, TenHP, SoTC, HocKy, MoTa)
	KETQUA (MaSV, MaHP, DiemThi, LanThi)
* Lưu ý kí hiệu: Khoá chính gạch chân - khoá ngoài kí hiệu bằng nét đứt (trong vở ghi - trình bày tự luộn)
## Bài tập tìm hiểu thêm  trước khi học
**3. Ngôn ngữ đại số quan hệ**
**3.1. Các phép toán tập hợp trên quan hệ**
**3.2. Các phép toán đặc biệt**
**3.3. Các phép toán khác**