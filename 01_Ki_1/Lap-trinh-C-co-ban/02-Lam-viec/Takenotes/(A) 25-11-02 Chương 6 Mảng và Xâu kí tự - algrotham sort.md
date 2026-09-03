
# Kiến thức cần học trong C++ hôm nay
- Hiểu khái nệm về mảng
- Biét về mảng một chiều (Hiểu cách khai báo, sử dụng, truy xuất, lấy địa chỉ, duyệt mảng, sao chép, truyền mảng vào hàm, phát sinh giá trị cho mảng,sắp xếp mảng một chiều, thêm-chèn phần từ vào mảng một chiều, xoá một phần từ khỏi mảng )

# Tóm tắt
Tuyệt vời! Tôi đã tổng hợp và sắp xếp lại toàn bộ kiến thức rời rạc của bạn về **Mảng Một Chiều trong C++** thành một tài liệu học tập logic và dễ hiểu.

---

## 📚 Tóm Tắt Tài Liệu Học Tập về Mảng Một Chiều (C++)

Tài liệu này được tổ chức theo luồng học tập tự nhiên: **Khái niệm → Khai báo → Truy cập → Thao tác cơ bản → Thao tác nâng cao.**

## I. Khái Niệm & Khai Báo Mảng (Array Concept)

### 1. Khái Niệm Cốt Lõi

- **Định nghĩa:** Mảng là một cấu trúc dữ liệu cơ bản dùng để lưu trữ một tập hợp các **phần tử cùng kiểu dữ liệu** (`int`, `float`, `char`,...).
    
- **Đặc điểm:** Các phần tử được lưu trữ trong các **ô nhớ liên tiếp** (tối ưu tốc độ truy cập) và có **kích thước cố định** (không thể thay đổi sau khi khai báo).
    

### 2. Khai Báo và Khởi Tạo

Mảng một chiều là dạng mảng đơn giản nhất, truy cập bằng 1 chỉ mục.

|**Cú Pháp**|**Ví Dụ**|**Mô Tả**|
|---|---|---|
|**Khai báo cơ bản**|`int so_nguyen[5];`|Khai báo 5 phần tử kiểu `int`.|
|**Khởi tạo trực tiếp**|`float diem_so[] = {8.5, 9.0, 7.5};`|Kích thước tự động là 3.|
|**Khởi tạo bằng 0**|`int ket_qua[10] = {0};`|Khởi tạo tất cả 10 phần tử bằng 0.|

---

## II. Truy Cập, Địa Chỉ và Duyệt Mảng

### 1. Truy Xuất và Địa Chỉ

|**Thao tác**|**Cú pháp**|**Giải thích**|
|---|---|---|
|**Truy cập giá trị**|`ten_mang[index]`|Chỉ mục **bắt đầu từ 0** (`ten_mang[0]` là phần tử đầu tiên).|
|**Địa chỉ của phần tử**|`&ten_mang[i]`|Lấy địa chỉ ô nhớ của phần tử thứ `i`.|
|**Địa chỉ mảng**|`ten_mang` hoặc `&ten_mang[0]`|Tên mảng là một con trỏ hằng trỏ đến phần tử đầu tiên. **Quan hệ:** `ten_mang[i]` $\equiv$ `*(ten_mang + i)`.|

### 2. Duyệt Mảng (In, Tính Tổng,...)

Duyệt mảng là truy cập lần lượt từng phần tử.

- **Vòng lặp `for` truyền thống (Dùng khi cần Chỉ số `i`):**
    
    C++
    
    ```
    for (int i = 0; i < kich_thuoc; i++) {
        // Truy cập phần tử bằng chỉ số: arr[i]
    }
    ```
    
- **Vòng lặp Range-based `for` (Dùng khi chỉ cần Giá trị):**
    
    - **Cú pháp tổng quát:** `for (Kiểu_dữ_liệu Biến_lặp : Container)`
        
    
    |**Mục đích**|**Cú pháp**|**Giải thích**|
    |---|---|---|
    |**Đọc giá trị**|`for (int pt : Mang)`|`pt` là **bản sao** giá trị.|
    |**Thay đổi giá trị**|`for (int &pt : Mang)`|`&pt` là **tham chiếu**, thay đổi `pt` sẽ thay đổi mảng gốc.|
    

---

## III. Các Thao Tác Cơ Bản và Nâng Cao

### 1. Truyền Mảng và Sao Chép

- **Truyền vào Hàm:** Khi truyền mảng cơ bản vào hàm, nó **luôn được truyền bằng địa chỉ (tham chiếu)**. Thay đổi trong hàm sẽ ảnh hưởng đến mảng gốc.
    
    - Cú pháp: `void xuat_mang(int arr[], int kich_thuoc);`
        
- **Sao chép Mảng:** Không thể dùng phép gán trực tiếp (`arrA = arrB`). Phải dùng vòng lặp để **sao chép từng phần tử** từ mảng này sang mảng khác.
    

### 2. Phát Sinh Giá Trị

Dùng vòng lặp và hàm phát sinh ngẫu nhiên (cần thư viện `<cstdlib>` và `<ctime>`):

C++

```
srand(time(0)); // Khởi tạo seed
for (int i = 0; i < 10; i++) {
    mang[i] = (rand() % 100) + 1; // Số ngẫu nhiên từ 1 đến 100
}
```

### 3. Sắp Xếp Mảng

Cách tối ưu nhất là sử dụng hàm thư viện chuẩn.

- **Thư viện:** Cần `<algorithm>`
    
- **Sắp xếp Tăng dần (Mặc định):**
    
    C++
    
    ```
    std::sort(mang, mang + kich_thuoc); 
    ```
    
- **Sắp xếp Giảm dần:**
    
    C++
    
    ```
    std::sort(mang, mang + kich_thuoc, std::greater<int>());
    ```
    

### 4. Thêm, Chèn, Xóa Phần Tử (Kỹ thuật Dời chỗ)

Vì mảng có kích thước cố định, các thao tác này yêu cầu phải theo dõi **kích thước hiện tại** (`n`) và sử dụng kỹ thuật dời chỗ:

- **Thêm (Chèn) tại vị trí `k`:** **Dời các phần tử sau `k` về phía sau** để tạo chỗ trống, sau đó gán giá trị mới. (Phải đảm bảo mảng chưa đầy).
    
- **Xóa tại vị trí `k`:** **Dời các phần tử sau `k` về phía trước** để lấp đầy chỗ trống, sau đó giảm kích thước hiện tại (`n--`).

# Kiến thức tổng hợp rời rạc
# Hướng Dẫn Chi Tiết Về Mảng Một Chiều Trong C++

## 1. Khái Niệm Về Mảng (Array Concept)

Mảng là một cấu trúc dữ liệu cơ bản, được sử dụng để lưu trữ một tập hợp các **phần tử cùng kiểu dữ liệu** (ví dụ: tất cả là số nguyên `int`, tất cả là số thực `float`, hoặc tất cả là ký tự `char`).

**Đặc điểm quan trọng:**

1. **Cùng Kiểu Dữ Liệu:** Tất cả các phần tử trong mảng phải có cùng kiểu.
    
2. **Lưu Trữ Liên Tiếp:** Các phần tử được lưu trữ trong các ô nhớ liên tiếp nhau trong bộ nhớ RAM, giúp việc truy cập rất nhanh chóng.
    
3. **Kích Thước Cố Định:** Khi đã khai báo, kích thước của mảng cơ bản (C-style array) là cố định và không thể thay đổi trong quá trình chạy chương trình.
    

## 2. Mảng Một Chiều (One-Dimensional Array)

Mảng một chiều là dạng mảng đơn giản nhất, chỉ cần một chỉ mục (index) để truy xuất đến một phần tử.

### A. Khai Báo và Khởi Tạo Mảng

Bạn có thể khai báo và khởi tạo mảng theo nhiều cách:

|   |   |   |
|---|---|---|
|**Cú Pháp**|**Mô Tả**|**Ví Dụ**|
|**Khai báo cơ bản**|Khai báo một mảng với kích thước cố định.|`int so_nguyen[5];`|
|**Khởi tạo khi khai báo**|Gán giá trị ban đầu cho các phần tử.|`float diem_so[3] = {8.5, 9.0, 7.5};`|
|**Khởi tạo không kích thước**|Kích thước sẽ được xác định bằng số lượng phần tử khởi tạo.|`char chu_cai[] = {'A', 'B', 'C', 'D'};` (Kích thước 4)|
|**Khởi tạo tất cả bằng 0**|Chỉ cần cung cấp một giá trị 0.|`int ket_qua[10] = {0};`|

### B. Truy Cập và Sử Dụng Phần Tử

Các phần tử trong mảng được đánh số thứ tự (gọi là **chỉ mục - index**) bắt đầu từ **0**.

- Phần tử đầu tiên: `ten_mang[0]`
    
- Phần tử cuối cùng: `ten_mang[kich_thuoc - 1]`
    

**Ví dụ:**

```
int arr[5] = {10, 20, 30, 40, 50};
// Để lấy giá trị 30 (phần tử thứ 3):
int gia_tri = arr[2];
// Để thay đổi giá trị 50 thành 99:
arr[4] = 99;
```

### C. Lấy Địa Chỉ Của Mảng và Phần Tử

Trong C++, tên mảng (ví dụ: `arr`) là một con trỏ hằng trỏ đến phần tử đầu tiên của mảng.

- **Địa chỉ của mảng (phần tử đầu tiên):** `arr` hoặc `&arr[0]`
    
- **Địa chỉ của phần tử thứ `i`:** `&arr[i]`
    

Quan hệ giữa chỉ mục và con trỏ:

Truy cập arr[i] tương đương với *(arr + i).

### D. Duyệt Mảng (Traversing)

Duyệt mảng là quá trình truy cập lần lượt từng phần tử của mảng.

1. **Dùng vòng lặp `for` truyền thống:**
    
    ```
    for (int i = 0; i < kich_thuoc; i++) {
        // Truy cập phần tử: arr[i]
    }
    ```
    
2. **Dùng vòng lặp `for-each` (Range-based for loop - C++11 trở lên):**
    
    ```
    for (int phan_tu : ten_mang) {
        // 'phan_tu' là bản sao của từng giá trị
    }
    // Nếu muốn thay đổi giá trị, dùng tham chiếu:
    for (int& phan_tu : ten_mang) {
        phan_tu *= 2; // Gấp đôi giá trị
    }
    ```
    

### E. Sao Chép Mảng

Không thể sao chép mảng cơ bản bằng phép gán trực tiếp (`arrA = arrB`). Bạn cần sao chép từng phần tử:

```
int arrA[5] = {1, 2, 3, 4, 5};
int arrB[5];

for (int i = 0; i < 5; i++) {
    arrB[i] = arrA[i]; // Sao chép từng phần tử
}
```

### F. Truyền Mảng Vào Hàm

Khi truyền mảng cơ bản vào hàm, mảng **luôn được truyền bằng tham chiếu (địa chỉ)**, không phải bằng giá trị. Tức là, mọi thay đổi trong hàm sẽ ảnh hưởng đến mảng gốc.

**Cú pháp hàm nhận mảng:**

```
// Cách 1: Dùng ký hiệu mảng (thông dụng)
void xuat_mang(int arr[], int kich_thuoc);

// Cách 2: Dùng con trỏ
void nhap_mang(int* arr, int kich_thuoc);
```

### G. Phát Sinh Giá Trị Cho Mảng

Thường dùng vòng lặp `for` để gán giá trị theo một quy luật hoặc phát sinh ngẫu nhiên:

```
#include <cstdlib> // Cần thiết cho rand()
#include <ctime>   // Cần thiết cho time()

// Phát sinh số ngẫu nhiên từ 1 đến 100
srand(time(0)); // Khởi tạo seed
for (int i = 0; i < 10; i++) {
    mang[i] = (rand() % 100) + 1;
}
```

### H. Sắp Xếp Mảng Một Chiều

Có thể tự triển khai các thuật toán (như Bubble Sort) hoặc sử dụng hàm có sẵn trong thư viện `<algorithm>`:

```
#include <algorithm>
// ...
std::sort(mang, mang + kich_thuoc); // Sắp xếp tăng dần
```

### I. Thao Tác Thêm, Chèn, Xóa Phần Tử (Kỹ thuật Dời chỗ)

Vì mảng C++ có kích thước cố định, các thao tác này cần phải theo dõi **kích thước hiện tại (`n`)** của mảng và sử dụng _kỹ thuật dời chỗ_.

|   |   |   |
|---|---|---|
|**Thao Tác**|**Mô Tả**|**Kỹ thuật**|
|**Thêm (Insert) vào vị trí `k`**|Dời tất cả phần tử từ vị trí `k` đến cuối về phía sau 1 ô.|`arr[i] = arr[i-1]` (vòng lặp chạy ngược)|
|**Xóa (Delete) tại vị trí `k`**|Dời tất cả phần tử từ vị trí `k+1` đến cuối về phía trước 1 ô.|`arr[i] = arr[i+1]` (vòng lặp chạy xuôi)|

**Lưu ý quan trọng:** Cần đảm bảo rằng mảng chưa đầy khi Thêm/Chèn và mảng không rỗng khi Xóa. Sau mỗi thao tác **thêm/chèn**, tăng kích thước hiện tại (`n++`); sau mỗi thao tác **xóa**, giảm kích thước hiện tại (`n--`).


Chắc chắn rồi! Tôi sẽ giải thích chi tiết và so sánh nó với vòng lặp truyền thống để bạn dễ hình dung cách nó hoạt động.

Lệnh `for (int pt : M7)` được gọi là **vòng lặp `for` dựa trên phạm vi** (Range-Based For Loop), được giới thiệu trong C++11. Nó được thiết kế để làm cho việc duyệt qua các container (như mảng, vector,...) trở nên đơn giản và ít xảy ra lỗi hơn.

---

## 1. Cơ chế hoạt động của `for (int pt : M7)`

Cú pháp `for (Kiểu dữ liệu Biến : Container)` có thể được chia nhỏ như sau:

|**Thành phần**|**Ý nghĩa**|**Giải thích trong ngữ cảnh for (int pt : M7)**|
|---|---|---|
|**`int pt`**|**Khai báo biến lặp**|Đây là một biến tạm thời có tên **`pt`** (kiểu `int`). Trong mỗi lần lặp, biến này sẽ được gán giá trị của một phần tử trong mảng `M7`.|
|**`:`**|**"Trong"**|Dấu hai chấm `:` có nghĩa là "lấy từ" hoặc "trong phạm vi".|
|**`M7`**|**Phạm vi/Container**|Đây là mảng (hoặc bộ chứa) mà bạn muốn duyệt qua.|

### Cách hoạt động từng bước:

Vòng lặp sẽ tự động thực hiện các bước sau cho mảng `M7 = {10, 20, 30, ... 100}`:

1. **Lặp 1:** Lấy phần tử đầu tiên của `M7` (**10**), gán giá trị này vào biến `pt`. Lúc này, `pt = 10`.
    
2. **Lặp 2:** Lấy phần tử thứ hai của `M7` (**20**), gán giá trị này vào biến `pt`. Lúc này, `pt = 20`.
    
3. ...
    
4. **Lặp 10:** Lấy phần tử cuối cùng của `M7` (**100**), gán giá trị này vào biến `pt`. Lúc này, `pt = 100`.
    
5. Sau khi xử lý phần tử cuối cùng, vòng lặp tự động **kết thúc**.
    

**Tóm lại:** Nó đơn giản hóa việc duyệt mảng thành: "Lần lượt lấy từng giá trị trong mảng và xử lý nó".

---

## 2. So sánh với Vòng Lặp `for` Truyền Thống

Đây là lý do bạn thấy nó khác biệt. Vòng lặp `for` truyền thống yêu cầu bạn quản lý chỉ số (index), trong khi vòng lặp dựa trên phạm vi ẩn đi thao tác đó.

|**Vòng lặp for Truyền Thống**|**Vòng lặp for Dựa trên Phạm Vi (Range-Based)**|
|---|---|
|**Cú pháp:**<br><br>  <br><br>`for (khởi tạo; điều kiện; cập nhật)`|**Cú pháp:**<br><br>  <br><br>`for (Kiểu dữ liệu Biến : Container)`|
|`cpp for (int i = 0; i < 10; i++) { int pt = M7[i]; // Phải truy cập bằng chỉ số cout << pt << " "; }`|```cpp|
|for (int pt : M7) {||
|cout << pt << " "; // Truy cập trực tiếp giá trị||
|}||

| **Ưu điểm:** Linh hoạt, có thể duyệt một phần mảng hoặc duyệt ngược. | **Ưu điểm:** Ngắn gọn, dễ đọc, **an toàn hơn** vì không thể vô tình truy cập chỉ số ngoài phạm vi mảng (array out-of-bounds). |
| **Nhược điểm:** Phải tự tính toán kích thước mảng (ở đây là 10) và tự quản lý biến chỉ số `i`. | **Nhược điểm:** Chỉ dùng để duyệt từ đầu đến cuối mảng theo thứ tự. |

### Ví dụ về sự khác biệt chính:

Vòng lặp truyền thống tập trung vào **VỊ TRÍ** của phần tử (`i` = 0, 1, 2...).

Vòng lặp dựa trên phạm vi tập trung vào **GIÁ TRỊ** của phần tử (`pt` = 10, 20, 30...).

Nói một cách đơn giản, `for (int pt : M7)` giống như việc bạn nói: "**Lấy từng cuốn sách (pt) ra khỏi giá sách (M7) để đọc**", thay vì phải nói: "Lấy cuốn sách ở vị trí số 1, sau đó ở vị trí số 2,..."

Việc đổi tên biến **`pt`** (tên biến lặp) thành một tên khác trong vòng lặp **range-based `for`** **hoàn toàn không ảnh hưởng** đến chức năng và kết quả của chương trình. 🟢

---

## 💡 Giải thích

Trong vòng lặp này: 

- **`pt`** chỉ là một **tên biến tạm thời** (placeholder) được sử dụng để lưu giữ **giá trị** của từng phần tử trong mảng **`Mang`** qua mỗi lần lặp.
    
- Bạn có thể đổi tên `pt` thành bất kỳ tên biến hợp lệ nào khác, ví dụ: `element`, `value`, `x`, hoặc `phan_tu`.
    

### Ví dụ minh họa:

Ba đoạn code sau đây cho cùng một kết quả và chức năng:

|**Biến lặp là pt**|**Biến lặp là element**|**Biến lặp là x**|
|---|---|---|
|`cpp for(int pt : Mang){ cout << pt << " "; }`|`cpp for(int element : Mang){ cout << element << " "; }`|```cpp|
|for(int x : Mang){|||
|cout << x << " ";|||
|}|||

Code snippet

```

**Quy tắc duy nhất** là bạn phải sử dụng cùng tên biến đó (`pt`, `element`, hoặc `x`) bên trong thân vòng lặp (trong lệnh `cout << ...`) để tham chiếu đến giá trị của phần tử hiện tại.

Việc chọn một cái tên có ý nghĩa (như `element` hoặc `phan_tu`) thường được khuyến khích để làm cho mã nguồn **dễ đọc và dễ hiểu** hơn.
```


Tuyệt vời! Tôi sẽ giải thích tổng quát về dòng code này để bạn có thể áp dụng nó một cách tự tin cho nhiều kiểu dữ liệu khác nhau trong C++. 🚀

Dòng code `for(int pt : Mang)` là một ví dụ về **Vòng lặp `for` dựa trên phạm vi (Range-Based For Loop)**. Nó được dùng để lặp qua **tất cả các phần tử** của một container (bộ chứa) mà không cần phải quản lý chỉ số (index).

---

## 🧭 Cấu trúc Tổng Quát

Cú pháp tổng quát của vòng lặp này là:

$$\text{for (Kiểu\_dữ\_liệu} \quad \text{Biến\_lặp} \quad : \quad \text{Container)}$$

### 1. **Kiểu Dữ Liệu và Biến Lặp (`int pt`)**

Phần này xác định cách bạn truy cập từng phần tử:

- **`int`**: Đây phải là **kiểu dữ liệu** của các phần tử bên trong **`Container`**.
    
    - _Ví dụ:_ Nếu `Mang` là `float`, bạn phải dùng `float pt`.
        
- **`pt`**: Tên **biến lặp** (placeholder). Trong mỗi lần lặp, biến này sẽ giữ **giá trị** của phần tử đang được xét.
    

#### 🎯 Tối ưu hóa quan trọng: Sử dụng Tham Chiếu (`&`)

Để tăng hiệu suất và cho phép thay đổi giá trị của các phần tử trong container, bạn nên sử dụng **tham chiếu** (`&`):

|**Cú pháp**|**Mục đích**|**Ứng dụng phổ biến**|
|---|---|---|
|**`for (int pt : Mang)`**|Lấy **bản sao (copy)** của giá trị. **Không** thể thay đổi mảng gốc. Tốt khi chỉ cần đọc.|Duyệt mảng để in ra.|
|**`for (int &pt : Mang)`**|Lấy **tham chiếu** đến giá trị. Cho phép **thay đổi** mảng gốc.|Duyệt mảng để cập nhật/sửa đổi giá trị (ví dụ: nhân đôi).|
|**`for (const int &pt : Mang)`**|Lấy **tham chiếu không đổi** (read-only). Tối ưu hóa hiệu suất (tránh copy) và đảm bảo không thay đổi mảng.|Tốt nhất khi chỉ cần đọc các đối tượng lớn (như chuỗi, đối tượng phức tạp).|

---

## 📦 Container (Phạm Vi)

Phần này chỉ định tập hợp các phần tử bạn muốn lặp qua:

- **`Mang`**: Đây là **container** (bộ chứa) hoặc **phạm vi** các phần tử.
    
    - Vòng lặp này hoạt động với bất kỳ đối tượng nào có thể được "duyệt" (có thể cung cấp các hàm `begin()` và `end()`).
        
- **Các loại Container thường dùng:**
    
    - **Mảng (Arrays):** `int Mang[] = { ... }`
        
    - **Vector:** `std::vector<int> numbers;`
        
    - **Chuỗi (Strings):** `std::string s = "Hello";` (duyệt từng ký tự)
        
    - **Danh sách (Lists) và các container khác của STL.**
        

---

## 📝 Tổng kết Lợi ích

|**Vòng lặp Range-Based for**|**Vòng lặp for truyền thống**|
|---|---|
|**An toàn:** Tự động lặp qua _tất cả_ phần tử, loại bỏ nguy cơ truy cập chỉ số ngoài phạm vi (`i < size`).|**Dễ lỗi:** Phải tự quản lý chỉ số và điều kiện dừng.|
|**Ngắn gọn & dễ đọc:** Tập trung vào **giá trị** của phần tử.|**Phức tạp hơn:** Tập trung vào **vị trí (index)** của phần tử.|
|**Tự động:** Tự động xác định kích thước container.|**Thủ công:** Phải biết kích thước container (ví dụ: `i < 4`).|

**Áp dụng:** Bất cứ khi nào bạn cần thực hiện một hành động (in, tính tổng, tìm kiếm) lên **mọi phần tử** trong một container từ đầu đến cuối, hãy ưu tiên sử dụng vòng lặp range-based `for`.


Có một số cách để sắp xếp mảng trong C++. Phương pháp phổ biến và dễ nhất là sử dụng hàm **`std::sort`** từ thư viện chuẩn `<algorithm>`.

---

## 1. 🚀 Phương pháp Tối ưu: Sử dụng `std::sort`

Hàm `std::sort` là cách tiêu chuẩn, nhanh và hiệu quả nhất để sắp xếp trong C++. Nó nằm trong thư viện **`<algorithm>`**.

### Cú pháp cơ bản

C++

```
#include <algorithm> // Bắt buộc phải thêm thư viện này

// Sắp xếp tăng dần (mặc định)
std::sort(begin, end); 
```

- **`begin`**: Con trỏ (hoặc iterator) trỏ đến **phần tử đầu tiên** của phạm vi cần sắp xếp (ví dụ: tên mảng `Mang`).
    
- **`end`**: Con trỏ (hoặc iterator) trỏ đến **vị trí SAU PHẦN TỬ CUỐI CÙNG** của phạm vi cần sắp xếp (ví dụ: `Mang + size` hoặc `std::end(Mang)`).
    

### Ví dụ Sắp xếp Tăng dần

Giả sử bạn có mảng `Mang` có 5 phần tử:

C++

```
#include <iostream>
#include <algorithm> // Thư viện cần thiết

using namespace std;

int main() {
    int Mang[] = { 3, 1, 4, 1, 5 };
    int kich_co = sizeof(Mang) / sizeof(Mang[0]); // Tính kích thước mảng (ở đây là 5)
    
    // Sắp xếp tăng dần (từ 1, 1, 3, 4, 5)
    // std::sort(tên_mảng, tên_mảng + kích_thước);
    std::sort(Mang, Mang + kich_co); 
    
    cout << "Mang sau khi sap xep tang dan: ";
    for (int pt : Mang) {
        cout << pt << " ";
    }
    // Output: 1 1 3 4 5
    
    return 0;
}
```

---

## 2. ⬇️ Sắp xếp Giảm dần

Để sắp xếp giảm dần, bạn cần truyền thêm một đối số thứ ba cho hàm `std::sort` là **hàm so sánh (comparator)**.

### Sử dụng `std::greater<Type>()`

Bạn có thể sử dụng đối tượng hàm có sẵn `std::greater<int>()` để sắp xếp từ lớn đến bé:

C++

```
#include <functional> // Thư viện cho std::greater

// Sắp xếp giảm dần
std::sort(Mang, Mang + kich_co, std::greater<int>()); 
```

### Ví dụ Sắp xếp Giảm dần

C++

```
#include <iostream>
#include <algorithm>
#include <functional> // Cần cho std::greater

using namespace std;

int main() {
    int Mang[] = { 3, 1, 4, 1, 5 };
    int kich_co = sizeof(Mang) / sizeof(Mang[0]);
    
    // Sắp xếp giảm dần (từ 5, 4, 3, 1, 1)
    std::sort(Mang, Mang + kich_co, std::greater<int>()); 
    
    cout << "Mang sau khi sap xep giam dan: ";
    for (int pt : Mang) {
        cout << pt << " ";
    }
    // Output: 5 4 3 1 1
    
    return 0;
}
```

---
