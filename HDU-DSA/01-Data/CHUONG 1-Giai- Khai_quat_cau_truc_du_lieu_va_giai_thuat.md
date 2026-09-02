---
tags:
  - DSA
  - cau-truc-du-lieu
  - giai-thuat
  - do-phuc-tap-thuat-toan
  - de-quy
  - chuong-1
  - loi-giai
related:
  - "[[CHUONG 1- Khai_quat_cau_truc_du_lieu_va_giai_thuat]]"
  - "[[CHUONG-2-Cac-kieu-du-lieu-truu-tuong-co-ban]]"
  - "[[Claude_danh-gia-do-phuc-tap-thuat-toan]]"
  - "[[gemini_deep_research_danh-gia-do-phuc-tap-thuat-toan]]"
---
# Lời giải - Chương 1: Khái quát cấu trúc dữ liệu và giải thuật

## 1. Bài tập lý thuyết

### Bài 1. Tìm ví dụ minh họa mối quan hệ giữa cấu trúc dữ liệu và giải thuật

> **Nhận xét:** Giải thuật và cấu trúc dữ liệu có mối quan hệ mật thiết, bổ trợ cho nhau. Một cấu trúc dữ liệu tốt sẽ giúp giải thuật hoạt động hiệu quả hơn, và ngược lại, giải thuật tốt sẽ khai thác tối ưu cấu trúc dữ liệu.

**Ví dụ 1: Tìm kiếm số nguyên trong một dãy số**
- Nếu dữ liệu lưu trong **mảng chưa sắp xếp**, chỉ có thể dùng **tìm kiếm tuần tự** với độ phức tạp $O(n)$.
- Nếu dữ liệu lưu trong **mảng đã sắp xếp**, có thể dùng **tìm kiếm nhị phân** với độ phức tạp $O(\log n)$, nhanh hơn rất nhiều.

→ Cùng một bài toán, cấu trúc dữ liệu khác nhau dẫn đến giải thuật khác nhau và hiệu quả khác nhau.

**Ví dụ 2: Quản lý hàng đợi in (printer queue)**
- Nếu dùng **mảng** để biểu diễn hàng đợi thì việc xen/thêm giữa mảng là $O(n)$ vì phải dời các phần tử.
- Nếu dùng **danh sách liên kết** (linked list) thì việc thêm/xóa chỉ là thay đổi con trỏ, chi phí $O(1)$.

→ Với yêu cầu thêm/xóa thường xuyên, danh sách liên kết phù hợp hơn mảng.

**Ví dụ 3: Biểu diễn đồ thị**
- Dùng **ma trận kề** phù hợp với giải thuật cần kiểm tra nhanh sự liên kết giữa hai đỉnh ($O(1)$).
- Dùng **danh sách kề** phù hợp với giải thuật duyệt đồ thị (DFS, BFS) và khi đồ thị thưa.

**Ví dụ 4: Từ điển (Dictonary)**
- Nếu lưu danh sách từ **không sắp xếp**, tìm kiếm là $O(n)$.
- Nếu dùng **cây nhị phân tìm kiếm (BST)** cân bằng, tìm kiếm là $O(\log n)$.
- Nếu dùng **bảng băm (hash table)**, tìm kiếm gần như $O(1)$.

---

### Bài 2. Kiểu dữ liệu tiên định trong ngôn ngữ lập trình

**Các kiểu dữ liệu cơ bản trong C:**
- `int` – số nguyên
- `float`, `double` – số thực
- `char` – ký tự
- `void` – không có giá trị
- (Kiểu mảng, con trỏ là kiểu dẫn xuất từ các kiểu cơ bản)

**Trong Java:**
- `byte`, `short`, `int`, `long` – số nguyên
- `float`, `double` – số thực
- `char` – ký tự
- `boolean` – đúng/sai

**Kết luận:** Các kiểu dữ liệu tiên định **KHÔNG đủ** để đáp ứng mọi yêu cầu tổ chức dữ liệu. Lý do:
- Chúng chỉ biểu diễn các giá trị đơn giản (số, ký tự...).
- Trong thực tế, các đối tượng phức tạp (sinh viên, hóa đơn, xe...) cần nhiều thuộc tính khác nhau.

**Ví dụ:** Để quản lý một sinh viên, ta cần `MãSV`, `Tên`, `Lớp`, `Điểm`... Không thể biểu diễn tất cả bằng một kiểu `int` hay `char` duy nhất. Cần tạo kiểu dữ liệu mới có cấu trúc. Vì vậy hầu hết ngôn ngữ đều cho phép định nghĩa kiểu dữ liệu có cấu trúc (struct trong C, class trong Java, record trong Pascal...).

---

### Bài 3. Ngôn ngữ lập trình nên cho phép tự định nghĩa kiểu dữ liệu có cấu trúc không?

**Có**, ngôn ngữ lập trình nên cho phép người dùng định nghĩa thêm kiểu dữ liệu có cấu trúc.

**Giải thích:**
- Kiểu dữ liệu tiên định chỉ đáp ứng nhu cầu dữ liệu đơn giản.
- Đối tượng trong thế giới thực thường có nhiều thuộc tính khác nhau về kiểu => cần nhóm chúng lại thành một đơn vị thống nhất.
- Việc tự định nghĩa kiểu dữ liệu giúp chương trình **rõ ràng**, **dễ bảo trì**, **tái sử dụng** mã nguồn và phản ánh đúng cấu trúc của đối tượng.

**Ví dụ trong C với kiểu `struct`:**
```c
// Định nghĩa kiểu dữ liệu SinhVien
typedef struct {
    char maSV[10];
    char ten[50];
    float diemTB;
} SinhVien;

// Dùng kiểu vừa định nghĩa
SinhVien sv;
sv.diemTB = 8.5;
```

**Ví dụ trong Java với `class`:**
```java
class HoaDon {
    String maHD;
    Date ngayLap;
    double tongTien;
}
```

Như vậy, ngôn ngữ cần cho phép tự định nghĩa kiểu dữ liệu có cấu trúc để mô hình hóa đối tượng thực tế một cách tự nhiên.

---

### Bài 4. Phân biệt cấu trúc dữ liệu và cấu trúc lưu trữ

**Cấu trúc dữ liệu (Data Structure):**
- Là cách **tổ chức dữ liệu theo logic**, mang tính khái niệm, trừu tượng.
- Mô tả mối quan hệ logic giữa các phần tử dữ liệu.
- Ví dụ: ngăn xếp (stack), hàng đợi (queue), cây, đồ thị...

**Cấu trúc lưu trữ (Storage Structure):**
- Là cách **cài đặt, lưu trữ dữ liệu trên bộ nhớ máy tính**, mang tính vật lý.
- Mô tả dữ liệu được lưu ở đâu, theo thứ tự nào trong bộ nhớ.
- Ví dụ: mảng (lưu liên tiếp), danh sách liên kết (lưu không liên tiếp)...

| Tiêu chí | Cấu trúc dữ liệu | Cấu trúc lưu trữ |
| --- | --- | --- |
| Bản chất | Logic, khái niệm, trừu tượng | Vật lý, cụ thể trên bộ nhớ |
| Mức độ | Cao (mức người dùng) | Thấp (mức máy tính) |
| Thay đổi | Cố định theo bài toán | Có thể chọn nhiều cách khác nhau cho cùng 1 cấu trúc dữ liệu |

**Câu hỏi 1:** Một cấu trúc dữ liệu có thể có nhiều cấu trúc lưu trữ không?

> **Có.** Cùng một cấu trúc dữ liệu (ví dụ stack/ngăn xếp) có thể được cài đặt bằng **mảng** (lưu liên tiếp) hoặc bằng **danh sách liên kết** (lưu không liên tiếp). Cả hai đều thể hiện cùng một thao tác đẩy/pop.

**Câu hỏi 2:** Ngược lại, một cấu trúc lưu trữ có thể tương ứng với nhiều cấu trúc dữ liệu không?

> **Có.** Cùng một cấu trúc lưu trữ là **mảng** có thể dùng để cài đặt nhiều cấu trúc dữ liệu khác nhau: ngăn xếp, hàng đợi, danh sách tuyến tính, bảng băm...

**Ví dụ minh họa:**
- **Cấu trúc dữ liệu "ngăn xếp"** có thể lưu bằng:
  - Mảng (array) – bộ nhớ liên tiếp
  - Danh sách liên kết – bộ nhớ không liên tiếp
- **Cấu trúc lưu trữ "mảng"** có thể biểu diễn:
  - Ngăn xếp
  - Hàng đợi
  - Bảng băm
  - Danh sách tuyến tính

---

### Bài 5. Biểu diễn bảng giờ tàu

**Yêu cầu:** Cần truy xuất nhanh giờ khởi hành, giờ đến của một chuyến tàu bất kỳ tại một nhà ga bất kỳ.

**Cấu trúc dữ liệu đề xuất:** Dùng kết hợp `struct` + mảng (array) và lập chỉ mục theo nhà ga.

```c
// Cấu trúc một chuyến tàu tại một ga
typedef struct {
    char maChuyen[10];      // mã chuyến tàu
    char gaDi[30];          // ga khởi hành
    char gaDen[30];         // ga đến
    char gioKhoiHanh[6];    // giờ khởi hành HH:MM
    char gioDen[6];         // giờ đến HH:MM
} ChuyenTau;

// Danh sách các chuyến tàu
ChuyenTau danhSachTau[MAX_TAU];
int soChuyen = 0;
```

**Cách tổ chức để truy xuất nhanh:**

Theo yêu cầu "truy xuất giờ khởi hành, giờ đến của một chuyến tàu bất kỳ tại một nhà ga bất kỳ", cách truy xuất hiệu quả nhất là **lập chỉ mục theo nhà ga** hoặc **sắp xếp mảng theo ga + tìm kiếm nhị phân**:

```c
// Giả sử mảng danhSachTau được sắp xếp tăng dần theo (gaDi, gioKhoiHanh)
// Hàm tìm giờ khởi hành của chuyến tàu maX tại ga "gaDi"
char* timGioKhoiHanh(char *ga, char *maX) {
    for (int i = 0; i < soChuyen; i++) {
        if (strcmp(danhSachTau[i].gaDi, ga) == 0 &&
            strcmp(danhSachTau[i].maChuyen, maX) == 0) {
            return danhSachTau[i].gioKhoiHanh;
        }
    }
    return NULL; // không tìm thấy
}
```

**Nhận xét về cách tổ chức:**
- **Mảng + struct:** đơn giản, truy xuất tuần tự.
- **Sắp xếp theo ga + nhị phân:** giảm chi phí tìm kiếm xuống $O(\log n)$.
- **Hash theo ga (chỉ mục phụ):** truy xuất gần $O(1)$ — tốt nhất nếu có nhiều ga.

---

## 2. Bài tập thực hành

### Bài 6. Quản lý nhân viên công ty

**Phân tích bài toán:**

- **Thông tin tĩnh (lý lịch):** mã NV, tên NV, tình trạng gia đình, số con, trình độ văn hóa, lương căn bản.
- **Thông tin động (chấm công):** nghỉ có phép, nghỉ không phép, làm thêm, kết quả công việc, lương thực lĩnh.
- **Quy tắc tính lương:**
  - Lương thực lĩnh = Lương căn bản + Phụ trội
  - Số con > 2: Phụ trội = +5% lương căn bản
  - Trình độ CH: Phụ trội = +10% lương căn bản
  - Làm thêm: +4% lương căn bản / ngày
  - Nghỉ không phép: -5% lương căn bản / ngày

**Cấu trúc dữ liệu đề xuất** (tách riêng thông tin tĩnh và động như lưu ý):

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_NV 50

typedef struct {
    char maNV[9];        // mã nhân viên (8 ký tự + null)
    char tenNV[21];      // tên nhân viên (20 ký tự + null)
    char tinhTrangGD;    // M hoặc S
    int soCon;           // <= 20
    char trinhDo[3];     // C1, C2, C3, ĐH, CH
    double luongCoBan;   // <= 1000000
} LyLich;

typedef struct {
    int ngayNghiPhep;    // <= 28
    int ngayNghiKPhep;   // <= 28
    int ngayLamThem;     // <= 28
    char ketQua[3];      // T, TB, K
    double luongThucLinh;// <= 2000000
} ChamCong;

typedef struct {
    LyLich liLich;
    ChamCong chamCong;
} NhanVien;

NhanVien ds[MAX_NV];
int soLuong = 0;

// ---------- Tính lương thực lĩnh ----------
double tinhPhuTroi(NhanVien *nv) {
    double pt = 0;
    if (nv->liLich.soCon > 2)
        pt += 0.05 * nv->liLich.luongCoBan;
    if (strcmp(nv->liLich.trinhDo, "CH") == 0)
        pt += 0.10 * nv->liLich.luongCoBan;
    pt += 0.04 * nv->liLich.luongCoBan * nv->chamCong.ngayLamThem;
    pt -= 0.05 * nv->liLich.luongCoBan * nv->chamCong.ngayNghiKPhep;
    return pt;
}

void capNhatLuong(NhanVien *nv) {
    nv->chamCong.luongThucLinh = nv->liLich.luongCoBan + tinhPhuTroi(nv);
}

// ---------- Cập nhật (thêm/xóa/sửa) ----------
void themNV() {
    if (soLuong >= MAX_NV) {
        printf("Danh sách đã đầy!\n"); return;
    }
    NhanVien nv;
    printf("Nhập mã NV (8 ký tự): "); scanf("%s", nv.liLich.maNV);
    printf("Nhập tên NV: "); scanf("%20s", nv.liLich.tenNV);

    // Kiểm tra mã trùng
    for (int i = 0; i < soLuong; i++) {
        if (strcmp(ds[i].liLich.maNV, nv.liLich.maNV) == 0) {
            printf("Mã NV đã tồn tại!\n"); return;
        }
    }
    printf("Tình trạng gia đình (M/S): "); scanf(" %c", &nv.liLich.tinhTrangGD);
    printf("Số con: "); scanf("%d", &nv.liLich.soCon);
    printf("Trình độ (C1/C2/C3/ĐH/CH): "); scanf("%s", nv.liLich.trinhDo);
    printf("Lương căn bản: "); scanf("%lf", &nv.liLich.luongCoBan);
    // Khởi tạo chấm công
    nv.chamCong.ngayNghiPhep = 0;
    nv.chamCong.ngayNghiKPhep = 0;
    nv.chamCong.ngayLamThem = 0;
    strcpy(nv.chamCong.ketQua, "TB");
    nv.chamCong.luongThucLinh = nv.liLich.luongCoBan;

    ds[soLuong++] = nv;
    capNhatLuong(&ds[soLuong - 1]);
    printf("Thêm thành công!\n");
}

void xoaNV() {
    char ma[9];
    printf("Nhập mã NV cần xóa: "); scanf("%s", ma);
    for (int i = 0; i < soLuong; i++) {
        if (strcmp(ds[i].liLich.maNV, ma) == 0) {
            for (int j = i; j < soLuong - 1; j++)
                ds[j] = ds[j + 1];
            soLuong--;
            printf("Đã xóa!\n"); return;
        }
    }
    printf("Không tìm thấy!\n");
}

// ---------- Chấm công ----------
void chamCongNV() {
    char ma[9]; int thang;
    printf("Nhập mã NV: "); scanf("%s", ma);
    for (int i = 0; i < soLuong; i++) {
        if (strcmp(ds[i].liLich.maNV, ma) == 0) {
            printf("Ngày nghỉ có phép: "); scanf("%d", &ds[i].chamCong.ngayNghiPhep);
            printf("Ngày nghỉ không phép: "); scanf("%d", &ds[i].chamCong.ngayNghiKPhep);
            printf("Ngày làm thêm: "); scanf("%d", &ds[i].chamCong.ngayLamThem);
            printf("Kết quả (T/TB/K): "); scanf("%s", ds[i].chamCong.ketQua);
            capNhatLuong(&ds[i]);
            printf("Đã cập nhật chấm công!\n"); return;
        }
    }
    printf("Không tìm thấy!\n");
}

// ---------- Xem bảng lương ----------
void xemBangLuong() {
    printf("\n%-9s %-20s %12s %12s\n", "Mã NV", "Tên NV", "Lương CB", "Lương thực lĩnh");
    for (int i = 0; i < soLuong; i++) {
        printf("%-9s %-20s %12.0f %12.0f\n",
            ds[i].liLich.maNV, ds[i].liLich.tenNV,
            ds[i].liLich.luongCoBan, ds[i].chamCong.luongThucLinh);
    }
}

// ---------- Tìm thông tin nhân viên ----------
void timNV() {
    char ma[9];
    printf("Nhập mã NV cần tìm: "); scanf("%s", ma);
    for (int i = 0; i < soLuong; i++) {
        if (strcmp(ds[i].liLich.maNV, ma) == 0) {
            NhanVien *nv = &ds[i];
            printf("Mã: %s | Tên: %s\n", nv->liLich.maNV, nv->liLich.tenNV);
            printf("Tình trạng GD: %c | Số con: %d | Trình độ: %s\n",
                nv->liLich.tinhTrangGD, nv->liLich.soCon, nv->liLich.trinhDo);
            printf("Lương căn bản: %.0f\n", nv->liLich.luongCoBan);
            printf("Nghỉ phép: %d | Nghỉ K phép: %d | Làm thêm: %d | KT: %s\n",
                nv->chamCong.ngayNghiPhep, nv->chamCong.ngayNghiKPhep,
                nv->chamCong.ngayLamThem, nv->chamCong.ketQua);
            printf("Lương thực lĩnh: %.0f\n", nv->chamCong.luongThucLinh);
            return;
        }
    }
    printf("Không tìm thấy!\n");
}

// ---------- Menu chính ----------
int main() {
    int chon;
    do {
        printf("\n===== QUẢN LÝ NHÂN VIÊN =====\n");
        printf("1. Thêm nhân viên\n");
        printf("2. Xóa nhân viên\n");
        printf("3. Chấm công\n");
        printf("4. Xem bảng lương\n");
        printf("5. Tìm nhân viên\n");
        printf("0. Thoát\n");
        printf("Chọn: "); scanf("%d", &chon);
        switch (chon) {
            case 1: themNV(); break;
            case 2: xoaNV(); break;
            case 3: chamCongNV(); break;
            case 4: xemBangLuong(); break;
            case 5: timNV(); break;
        }
    } while (chon != 0);
    return 0;
}
```

**Giải thích cấu trúc:**
- Dùng `struct LyLich` (tĩnh) và `struct ChamCong` (động), tách riêng như lưu ý của đề bài.
- `NhanVien` gộp cả hai; mảng `ds[MAX_NV]` tối đa 50 người.
- Quy tắc tính lương được cài bằng hàm `tinhPhuTroi()` và `capNhatLuong()`.

---

### Bài 7. Tính thời gian thực hiện các đoạn chương trình

#### a) Tính tổng của n số

```c
Sum = 0;
for (i = 1; i <= n; i++) {
    scanf("%d", &x);
    Sum = Sum + x;
}
```

**Phân tích:**
- Lệnh `Sum = 0` thực hiện **1** lần.
- Vòng lặp `for` chạy **n** lần. Mỗi lần:
  - Điều kiện `i <= n` kiểm tra **n + 1** lần (n lần đúng + 1 lần sai để thoát).
  - `i++` thực hiện **n** lần.
  - Thân vòng lặp có 2 lệnh (`scanf` và `Sum = Sum + x`) thực hiện **n** lần mỗi lệnh.

Tổng số phép toán cơ bản:

$$T(n) = 1 + (n+1) + n + 2n = 4n + 2$$

**Kết luận:** Độ phức tạp thời gian = $O(n)$.

#### b) Tính tích hai ma trận vuông cấp n: C = A × B

```c
for (i = 1; i <= n; i++)
  for (j = 1; j <= n; j++) {
    c[i,j] = 0;
    for (k = 1; k <= n; k++)
      c[i,j] = c[i,j] + a[i,k] * b[k,j];
  }
```

**Phân tích:**
- Vòng `i`: n lần.
- Vòng `j` (lồng trong i): n lần → tổng n² lần.
- Vòng `k` (lồng trong j): n lần → tổng n³ lần.
- Trong thân vòng `k` có 2 phép tính (1 nhân + 1 cộng) → **2n³** phép toán.
- Lệnh `c[i,j] = 0` thực hiện n² lần.

Tổng số phép toán:

$$T(n) = 2n^3 + n^2$$

**Kết luận:** Độ phức tạp thời gian = $O(n^3)$.

---

### Bài 8. Giải phương trình đệ quy với T(1) = 1

**Dùng định lý Master:**

Với dạng $T(n) = aT(n/b) + f(n)$, so sánh $f(n)$ với $n^{\log_b a}$:

#### a) $T(n) = 3T(n/2) + n$

- $a = 3$, $b = 2$, $f(n) = n$
- $\log_b a = \log_2 3 \approx 1.585$
- $n^{\log_b a} = n^{1.585}$
- So sánh: $n = n^1 < n^{1.585}$ → **trường hợp 1** của Master Theorem.

$$T(n) = O(n^{\log_2 3})$$

#### b) $T(n) = 3T(n/2) + n^2$

- $a = 3$, $b = 2$, $f(n) = n^2$
- $\log_b a = \log_2 3 \approx 1.585$
- So sánh: $n^2 > n^{1.585}$ → **trường hợp 3** của Master Theorem.
- Kiểm tra điều kiện đều: $3(n/2)^2 = \frac{3}{4}n^2 \le c n^2$ với $c = 3/4 < 1$ ✓

$$T(n) = O(n^2)$$

#### c) $T(n) = 8T(n/2) + n^3$

- $a = 8$, $b = 2$, $f(n) = n^3$
- $\log_b a = \log_2 8 = 3$
- So sánh: $n^3 = n^{\log_b a}$ → **trường hợp 2** của Master Theorem.

$$T(n) = O(n^3 \log n)$$

**Tóm tắt Bài 8:**

| Câu | Phương trình | Kết quả |
| --- | --- | --- |
| a) | $T(n) = 3T(n/2) + n$ | $O(n^{\log_2 3})$ |
| b) | $T(n) = 3T(n/2) + n^2$ | $O(n^2)$ |
| c) | $T(n) = 8T(n/2) + n^3$ | $O(n^3 \log n)$ |

---

### Bài 9. Giải phương trình đệ quy với T(1) = 1

#### a) $T(n) = 4T(n/3) + n$

- $a = 4$, $b = 3$, $f(n) = n$
- $\log_b a = \log_3 4 \approx 1.262$
- $n^{1.262} > n^1$ → **trường hợp 1**.

$$T(n) = O(n^{\log_3 4})$$

#### b) $T(n) = 4T(n/3) + n^2$

- $a = 4$, $b = 3$, $f(n) = n^2$
- $n^2 > n^{1.262}$ → **trường hợp 3**.
- Kiểm tra: $4(n/3)^2 = \frac{4}{9}n^2 \le c n^2$, chọn $c = 4/9 < 1$ ✓

$$T(n) = O(n^2)$$

#### c) $T(n) = 9T(n/3) + n^2$

- $a = 9$, $b = 3$, $f(n) = n^2$
- $\log_b a = \log_3 9 = 2$
- $n^2 = n^{\log_b a}$ → **trường hợp 2**.

$$T(n) = O(n^2 \log n)$$

**Tóm tắt Bài 9:**

| Câu | Phương trình | Kết quả |
| --- | --- | --- |
| a) | $T(n) = 4T(n/3) + n$ | $O(n^{\log_3 4})$ |
| b) | $T(n) = 4T(n/3) + n^2$ | $O(n^2)$ |
| c) | $T(n) = 9T(n/3) + n^2$ | $O(n^2 \log n)$ |

---

### Bài 10. Giải phương trình đệ quy với T(1) = 1

#### a) $T(n) = T(n/2) + 1$

- $a = 1$, $b = 2$, $f(n) = 1$
- $\log_b a = \log_2 1 = 0$
- $n^0 = 1 = f(n)$ → **trường hợp 2** (k = 0).

$$T(n) = O(\log n)$$

*Dễ kiểm chứng: đây chính là tìm kiếm nhị phân.*

#### b) $T(n) = 2T(n/2) + \log n$

- $a = 2$, $b = 2$, $f(n) = \log n$
- $\log_b a = \log_2 2 = 1$
- $f(n) = \log n < n^1$ → **trường hợp 1**.

$$T(n) = O(n)$$

#### c) $T(n) = 2T(n/2) + n$

- $a = 2$, $b = 2$, $f(n) = n$
- $\log_b a = 1$, $f(n) = n = n^{\log_b a}$ → **trường hợp 2** (merge sort).

$$T(n) = O(n \log n)$$

#### d) $T(n) = 2T(n/2) + n^2$

- $a = 2$, $b = 2$, $f(n) = n^2$
- $n^2 > n^1$ → **trường hợp 3**.
- Kiểm tra: $2(n/2)^2 = \frac{1}{2}n^2 \le c n^2$, chọn $c = 1/2 < 1$ ✓

$$T(n) = O(n^2)$$

**Tóm tắt Bài 10:**

| Câu | Phương trình | Kết quả |
| --- | --- | --- |
| a) | $T(n) = T(n/2) + 1$ | $O(\log n)$ |
| b) | $T(n) = 2T(n/2) + \log n$ | $O(n)$ |
| c) | $T(n) = 2T(n/2) + n$ | $O(n \log n)$ |
| d) | $T(n) = 2T(n/2) + n^2$ | $O(n^2)$ |

---

### Bài 11. Giải phương trình đệ quy bằng phương pháp đoán nghiệm

#### a) $T(1) = 2$ và $T(n) = 2T(n-1) + 1$ với $\forall n \ge 2$

**Cách 1 — Khai triển:**

$$T(n) = 2T(n-1) + 1$$
$$= 2[2T(n-2) + 1] + 1 = 4T(n-2) + 2 + 1$$
$$= 8T(n-3) + 4 + 2 + 1$$

Sau k bước:

$$T(n) = 2^k T(n-k) + (2^{k} - 1)$$

Khi $k = n-1$:

$$T(n) = 2^{n-1} T(1) + (2^{n-1} - 1) = 2^{n-1} \cdot 2 + 2^{n-1} - 1 = 2^n + 2^{n-1} - 1$$

**Kết quả:**
$$T(n) = 2^n + 2^{n-1} - 1 = O(2^n)$$

**Cách 2 — Đoán nghiệm rồi kiểm chứng:** Đoán $T(n) = c \cdot 2^n + d$. Thay vào:
- $c \cdot 2^n + d = 2(c 2^{n-1} + d) + 1 = c 2^n + 2d + 1$
- ⟹ $d = 2d + 1$ ⟹ $d = -1$.
- Với $T(1) = 2$: $2c - 1 = 2$ ⟹ $c = 3/2$.
- Vậy $T(n) = \frac{3}{2} \cdot 2^n - 1$, đúng với đáp án trên. ✓

#### b) $T(1) = 1$ và $T(n) = 2T(n-1) + n$ với $\forall n \ge 2$

**Khai triển:**

$$T(n) = 2T(n-1) + n$$
$$= 2[2T(n-2) + (n-1)] + n = 4T(n-2) + 2(n-1) + n$$
$$= 8T(n-3) + 4(n-2) + 2(n-1) + n$$

Sau k bước:

$$T(n) = 2^k T(n-k) + \sum_{i=0}^{k-1} 2^i (n-i)$$

Khi $k = n-1$ (đến $T(1)$):

$$T(n) = 2^{n-1} T(1) + \sum_{i=0}^{n-2} 2^i (n-i)$$
$$= 2^{n-1} + \left[n \sum_{i=0}^{n-2} 2^i - \sum_{i=0}^{n-2} i 2^i\right]$$

Ta có:
- $\sum_{i=0}^{n-2} 2^i = 2^{n-1} - 1$
- $\sum_{i=0}^{n-2} i 2^i = (n-3)2^{n-1} + 2$ (công thức chuẩn)

Vậy:

$$T(n) = n(2^{n-1}-1) - [(n-3)2^{n-1} + 2] + 2^{n-1}$$
$$= 2^{n+1} - n - 2$$

**Kết quả:**
$$T(n) = 2^{n+1} - n - 2 = O(2^n)$$

**Tóm tắt Bài 11:**

| Câu | Nghiệm chính xác | Độ phức tạp |
| --- | --- | --- |
| a) | $T(n) = 2^n + 2^{n-1} - 1$ | $O(2^n)$ |
| b) | $T(n) = 2^{n+1} - n - 2$ | $O(2^n)$ |

---

### Bài 12. Tìm kiếm tuần tự và nhị phân trong mảng sắp xếp

**Đề bài:** Cho mảng n số nguyên tăng dần. Viết hàm tìm một số nguyên, tìm thấy trả về TRUE, ngược lại FALSE. Dùng 2 phương pháp: tuần tự và nhị phân.

```c
#include <stdio.h>
#include <stdbool.h>

// ---------- Tìm kiếm tuần tự ----------
// Duyệt từng phần tử từ đầu đến cuối
bool timTuanTu(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            return true;   // tìm thấy
    }
    return false;          // không tìm thấy
}

// ---------- Tìm kiếm nhị phân ----------
// Dùng thuộc tính mảng đã sắp xếp, chia đôi không gian tìm kiếm
bool timNhiPhan(int a[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x)
            return true;         // tìm thấy
        else if (a[mid] < x)
            left = mid + 1;      // x nằm nửa phải
        else
            right = mid - 1;     // x nằm nửa trái
    }
    return false;
}

// ---------- Ví dụ minh họa ----------
int main() {
    int a[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int x = 23;

    if (timTuanTu(a, n, x))
        printf("Tuần tự: tìm thấy %d\n", x);
    else
        printf("Tuần tự: không tìm thấy\n");

    if (timNhiPhan(a, n, x))
        printf("Nhị phân: tìm thấy %d\n", x);
    else
        printf("Nhị phân: không tìm thấy\n");

    return 0;
}
```

**Phân tích thời gian thực hiện:**

**Tìm kiếm tuần tự:**

| Trường hợp | Số lần so sánh | Độ phức tạp |
| --- | --- | --- |
| Tốt nhất (x ở đầu) | 1 | $\Omega(1)$ |
| Xấu nhất (x ở cuối / không có) | n | $O(n)$ |
| Trung bình | $\frac{n+1}{2}$ | $\Theta(n)$ |

**Tìm kiếm nhị phân:**

Mỗi bước thu hẹp nửa phạm vi tìm kiếm. Số bước tối đa là số lần chia n cho 2 cho đến khi còn 1 phần tử:

Số bước $= \lfloor \log_2 n \rfloor + 1$

| Trường hợp | Số lần so sánh | Độ phức tạp |
| --- | --- | --- |
| Tốt nhất | 1 | $\Omega(1)$ |
| Xấu nhất | $\lfloor \log_2 n \rfloor + 1$ | $O(\log n)$ |

**Kết luận:** Với mảng đã sắp xếp, **tìm kiếm nhị phân $O(\log n)$ nhanh hơn nhiều** so với tuần tự $O(n)$.

---

### Bài 13. Thời gian thực hiện thuật toán đệ quy Tháp Hà Nội

**Thuật toán Tháp Hà Nội (chuyển n đĩa từ cọc A sang cọc C dùng cọc B trung gian):**

```c
void thapHaNoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("Chuyển đĩa 1 từ %c sang %c\n", A, C);
        return;
    }
    // 1. Chuyển n-1 đĩa từ A sang B (dùng C làm trung gian)
    thapHaNoi(n - 1, A, C, B);
    // 2. Chuyển đĩa lớn nhất từ A sang C
    printf("Chuyển đĩa %d từ %c sang %c\n", n, A, C);
    // 3. Chuyển n-1 đĩa từ B sang C (dùng A làm trung gian)
    thapHaNoi(n - 1, B, A, C);
}
```

**Thiết lập phương trình đệ quy:**

Gọi $T(n)$ là số thao tác (lần chuyển đĩa) cần thiết cho n đĩa.

- Với **n = 1**: chỉ cần 1 lần chuyển → $T(1) = 1$.
- Với **n > 1**:
  - Chuyển n-1 đĩa lên cọc trung gian: $T(n-1)$ lần.
  - Chuyển đĩa lớn nhất: 1 lần.
  - Chuyển n-1 đĩa về cọc đích: $T(n-1)$ lần.

Do đó:

$$T(n) = 2T(n-1) + 1, \quad T(1) = 1$$

**Giải phương trình đệ quy (khai triển):**

$$T(n) = 2T(n-1) + 1$$
$$= 2[2T(n-2)+1] + 1 = 4T(n-2) + 3$$
$$= 8T(n-3) + 7$$

Sau $k$ bước:

$$T(n) = 2^k T(n-k) + (2^k - 1)$$

Khi $k = n-1$:

$$T(n) = 2^{n-1} \cdot T(1) + (2^{n-1} - 1) = 2^{n-1} + 2^{n-1} - 1 = 2^n - 1$$

**Kết quả:**
$$T(n) = 2^n - 1$$

Số lần chuyển đĩa tối thiểu (và cũng là tối đa của thuật toán này) là $2^n - 1$, vậy:

$$T(n) = \Theta(2^n)$$

**Ví dụ minh họa:**
- n = 1 → 1 lần chuyển
- n = 2 → 3 lần chuyển
- n = 3 → 7 lần chuyển
- n = 4 → 15 lần chuyển
- n = 10 → 1023 lần chuyển
- n = 64 → $2^{64} - 1$ lần chuyển (bài toán truyền thuyết)

---

### Bài 14. Số tổ hợp chập k của n

**Định nghĩa:**
$$C_n^k = \begin{cases} 1 & khi \ k=0, \ k=n \\ C_{n-1}^{k-1} + C_{n-1}^k & khi \ 0 < k < n \end{cases}$$

#### a) Hàm đệ quy tính số tổ hợp chập k của n

```c
#include <stdio.h>

// Hàm đệ quy tính C(n, k)
long comb(int n, int k) {
    // Điều kiện dừng
    if (k == 0 || k == n)
        return 1;
    // Công thức đệ quy
    return comb(n - 1, k - 1) + comb(n - 1, k);
}

int main() {
    int n = 5, k = 2;
    printf("C(%d, %d) = %ld\n", n, k, comb(n, k));  // C(5,2) = 10
    return 0;
}
```

#### b) Tính thời gian thực hiện

Gọi $T(n, k)$ là số phép toán của hàm `comb(n, k)`.

**Thiết lập phương trình:**

Quan sát: hàm `comb(n,k)` gọi 2 hàm con `comb(n-1, k-1)` và `comb(n-1, k)`.

Với mỗi n, các lời gọi tạo thành một **cây tam giác Pascal** (như tam giác Pascal), và tổng số lời gọi đúng bằng tổng số phần tử trong tam giác.

Theo tam giác Pascal, số lời gọi trong trường hợp **xấu nhất** (k = n/2) tương ứng với tổng các hệ số của $2^n$:

$$T(n) = 1 + 2 + 4 + ... + 2^n = 2^{n+1} - 1$$

**Kết quả:**
$$T(n) = O(2^n)$$

**Giải thích chi tiết:**
- Đệ quy chia bài toán thành **2 bài toán con** ở mỗi mức: $T(n,k) = T(n-1,k-1) + T(n-1,k) + 1$.
- Số lời gọi ở mức i là $2^i$ lần (tạo cây nhị phân đầy đủ đến mức n).
- Tổng số lời gọi: $1 + 2 + 4 + ... + 2^n = 2^{n+1} - 1$.
- Độ phức tạp: $O(2^n)$.

> **Lưu ý:** Thuật toán đệ quy trực tiếp này không hiệu quả cho giá trị n lớn. Có thể cải thiện bằng **quy hoạch động** (dùng tam giác Pascal lưu lại kết quả trung gian) đạt $O(nk)$.

**Cải tiến bằng quy hoạch động:**
```c
long combDP(int n, int k) {
    long C[100][100] = {0};
    for (int i = 0; i <= n; i++) {
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; j++)
            C[i][j] = C[i-1][j-1] + C[i-1][j];
    }
    return C[n][k];   // O(n*k)
}
```

---

## Tổng kết bảng độ phức tạp

| Bài | Nội dung | Kết quả |
| --- | --- | --- |
| 7a | Tính tổng n số | $O(n)$ |
| 7b | Nhân 2 ma trận | $O(n^3)$ |
| 8a | $T(n)=3T(n/2)+n$ | $O(n^{\log_2 3})$ |
| 8b | $T(n)=3T(n/2)+n^2$ | $O(n^2)$ |
| 8c | $T(n)=8T(n/2)+n^3$ | $O(n^3 \log n)$ |
| 9a | $T(n)=4T(n/3)+n$ | $O(n^{\log_3 4})$ |
| 9b | $T(n)=4T(n/3)+n^2$ | $O(n^2)$ |
| 9c | $T(n)=9T(n/3)+n^2$ | $O(n^2 \log n)$ |
| 10a | $T(n)=T(n/2)+1$ | $O(\log n)$ |
| 10b | $T(n)=2T(n/2)+\log n$ | $O(n)$ |
| 10c | $T(n)=2T(n/2)+n$ | $O(n \log n)$ |
| 10d | $T(n)=2T(n/2)+n^2$ | $O(n^2)$ |
| 11 | Đoán nghiệm | $O(2^n)$ |
| 12 | Tuần tự / Nhị phân | $O(n)$ / $O(\log n)$ |
| 13 | Tháp Hà Nội | $O(2^n)$ |
| 14 | Tổ hợp | $O(2^n)$ |
