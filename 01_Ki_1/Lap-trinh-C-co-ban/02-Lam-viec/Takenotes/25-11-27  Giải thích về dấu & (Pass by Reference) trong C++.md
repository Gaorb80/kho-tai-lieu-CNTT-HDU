# Giải thích về dấu & (Pass by Reference) trong C++

## Ý nghĩa của dấu &

Dấu `&` trong tham số hàm có nghĩa là **truyền tham chiếu** (pass by reference). Khi dùng `&`, hàm sẽ làm việc trực tiếp với biến gốc, không tạo bản sao.

## So sánh 2 cách truyền tham số:

### 1. **Truyền theo giá trị (Pass by Value)** - Không có &

```cpp
void tangGiaTri(int n) {
    n = n + 10;  // Chỉ thay đổi bản sao
}

int main() {
    int x = 5;
    tangGiaTri(x);
    cout << x;  // Kết quả: 5 (không đổi)
}
```

- Hàm nhận **bản sao** của biến
- Thay đổi trong hàm **không ảnh hưởng** đến biến gốc

### 2. **Truyền theo tham chiếu (Pass by Reference)** - Có &

```cpp
void tangGiaTri(int &n) {  // Có dấu &
    n = n + 10;  // Thay đổi biến gốc
}

int main() {
    int x = 5;
    tangGiaTri(x);
    cout << x;  // Kết quả: 15 (đã thay đổi)
}
```

- Hàm làm việc **trực tiếp** với biến gốc
- Thay đổi trong hàm **ảnh hưởng** đến biến bên ngoài

## Trong bài của bạn:

```cpp
void nhapDuLieu(int &n, long long a[]) {
    cin >> n;  // n thay đổi → biến n bên ngoài cũng thay đổi
}

int main() {
    int n;  // n chưa có giá trị
    nhapDuLieu(n, a);  // Sau khi gọi, n đã có giá trị từ cin
}
```

Nếu không có `&`, biến `n` trong `main()` vẫn không có giá trị sau khi gọi hàm!

## Khi nào NÊN dùng &:

### ✅ 1. Muốn thay đổi giá trị biến gốc

```cpp
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
```

### ✅ 2. Truyền biến lớn để tiết kiệm bộ nhớ

```cpp
void xuatMang(const long long (&arr)[10000]) {  // Không tạo bản sao
    // const để đảm bảo không thay đổi mảng
}
```

### ✅ 3. Hàm cần trả về nhiều giá trị

```cpp
void timMinMax(int a[], int n, int &min, int &max) {
    min = a[0];
    max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
}
```

## Khi nào KHÔNG nên dùng &:

### ❌ 1. Không muốn thay đổi biến gốc

```cpp
int tinhBinhPhuong(int n) {  // Không cần &
    return n * n;  // Chỉ tính toán, không thay đổi n
}
```

### ❌ 2. Truyền giá trị nhỏ (int, char, bool...)

```cpp
bool laSoChan(long long n) {  // Không cần &
    return n % 2 == 0;  // Chỉ kiểm tra, không thay đổi
}
```

### ❌ 3. Truyền hằng số hoặc biểu thức

```cpp
int x = tinhTong(5, 10);  // Không thể dùng & cho 5 và 10
```

## Mẹo nhớ:

|Trường hợp|Dùng &|Ví dụ|
|---|---|---|
|Muốn **thay đổi** biến gốc|✅ Có|`void nhapDuLieu(int &n)`|
|Chỉ **đọc/tính toán**|❌ Không|`int tinhTong(int a, int b)`|
|Truyền **mảng/struct lớn**|✅ Có + const|`void xuat(const int (&arr)[1000])`|
|Trả về **nhiều giá trị**|✅ Có|`void timMinMax(int &min, int &max)`|

**Lưu ý:** Với mảng, C++ tự động truyền theo địa chỉ nên `long long a[]` đã có thể thay đổi mảng mà không cần `&`.

