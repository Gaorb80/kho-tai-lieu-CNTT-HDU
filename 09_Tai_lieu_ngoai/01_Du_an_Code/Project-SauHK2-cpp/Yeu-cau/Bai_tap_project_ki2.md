# ĐỀ BÀI PROJECT — LẬP TRÌNH C++ (Sau HK2)

---

## 1. Mục tiêu

Thực hiện một trong các project bên dưới để áp dụng toàn bộ kiến thức đã học trong học kỳ, bao gồm:

- `if/else`, `switch`
- `for`, `while`, `do-while`
- Hàm và chia module
- Mảng 1D/2D
- Xử lý `string` / C-string
- `pointer`
- `struct`
- Đọc/ghi file
- Menu CLI

## 2. Yêu cầu chung

Mỗi project phải phát triển qua **5 phiên bản (version)**:

### Version 0 — Skeleton

- Xây dựng menu CLI cơ bản, điều hướng bằng số.
- Chương trình chạy được, người dùng chọn chức năng mà chưa cần xử lý logic.

### Version 1 — Core

- Định nghĩa `struct` dữ liệu chính.
- Triển khai các hàm xử lý cơ bản: thêm, hiển thị.
- Tính năng: tính toán (điểm trung bình, tổng, thống kê...), xếp loại / phân loại dựa trên điều kiện.

### Version 2 — CRUD

- Triển khai đầy đủ 4 thao tác: **Create, Read, Update, Delete**.
- Xử lý hợp lệ dữ liệu đầu vào (validation): ID trùng, giá trị âm, rỗng...
- Tìm kiếm theo nhiều tiêu chí.

### Version 3 — Persistence (Lưu trữ)

- Đọc dữ liệu từ file khi khởi động chương trình.
- Ghi dữ liệu ra file khi thoát hoặc theo yêu cầu.
- Đảm bảo dữ liệu tồn tại qua các lần chạy.

### Version 4 — Refactor & Documentation

- Tách source code thành nhiều file (`.cpp` / `.h`), mỗi module phụ trách một phần chức năng.
- Viết `README.md` với các mục:

```text
# Project Name
## Introduction
## Features
## Technologies
## Concepts practiced
## Project structure
## How to compile
## How to run
## Example
## Future improvements
```

### Cấu trúc thư mục tối thiểu

```text
ProjectName/
├── README.md
├── src/
│   ├── main.cpp
│   ├── module.cpp
│   └── module.h
├── data/
│   └── data.txt
└── docs/
    └── design.md
```

---

## 3. Danh sách project

### Project 1 — Student Management System

**Độ khó: ⭐⭐☆☆☆**

Quản lý thông tin sinh viên trong một lớp/khoa.

**Menu:**

```text
===== STUDENT MANAGEMENT =====
1. Add student
2. Display students
3. Search student
4. Update student
5. Delete student
6. Sort students
7. Statistics
8. Save to file
9. Load from file
0. Exit
```

**Cấu trúc dữ liệu đề xuất:**

```cpp
struct Student {
    char id[20];
    char name[50];
    float math;
    float physics;
    float programming;
    float average;
};
```

**Yêu cầu chi tiết:**

| Version | Chức năng |
|---------|-----------|
| v1 | Thêm sinh viên, hiển thị danh sách, tính điểm trung bình, xếp loại |
| v2 | Tìm kiếm theo ID / tên, sửa sinh viên, xóa sinh viên |
| v3 | Sắp xếp theo điểm / tên, thống kê (số lượng, điểm cao nhất/thấp nhất) |
| v4 | Lưu vào `students.txt`, đọc khi khởi động, tự động lưu khi thoát |
| v5 | Tách source thành nhiều file module |

**Kiến thức được luyện:**

- `if/switch` — xếp loại, validation
- Loop — duyệt mảng, hiển thị danh sách
- Function — tách các chức năng riêng biệt
- Array — lưu trữ danh sách sinh viên
- String — xử lý tên, ID
- Struct — định nghĩa dữ liệu
- File — lưu / đọc dữ liệu
- Pointer — tham chiếu khi truyền mảng vào hàm

---

### Project 2 — Banking System

**Độ khó: ⭐⭐⭐☆☆**

Mô phỏng hệ thống ngân hàng đơn giản.

**Menu:**

```text
===== BANKING SYSTEM =====
1. Create account
2. Show accounts
3. Search account
4. Deposit
5. Withdraw
6. Transfer
7. Transaction history
8. Save
9. Load
0. Exit
```

**Cấu trúc dữ liệu đề xuất:**

```cpp
struct Account {
    char accountNumber[20];
    char ownerName[50];
    double balance;
};
```

**Yêu cầu chi tiết:**

- Nạp tiền: cộng tiền vào tài khoản, kiểm tra số tiền > 0.
- Rút tiền: kiểm tra số dư đủ, trừ tiền, thông báo lỗi nếu không đủ.
- Chuyển tiền: trừ tiền tài khoản nguồn, cộng tiền tài khoản đích, kiểm tra cả hai tài khoản tồn tại.
- Lưu lịch sử giao dịch theo định dạng:

```text
[2026-09-01] Deposit +500000
[2026-09-01] Withdraw -100000
[2026-09-01] Transfer -200000
```

**Kiến thức được luyện:** `struct`, array, function, pointer, file, string, validation bằng `if`.

---

### Project 3 — Inventory Management System

**Độ khó: ⭐⭐⭐☆☆**

Quản lý kho hàng sản phẩm.

**Menu:**

```text
===== INVENTORY =====
1. Add product
2. List products
3. Search product
4. Update product
5. Delete product
6. Import product (nhập hàng)
7. Sell product (bán hàng)
8. Low-stock products (sản phẩm sắp hết)
9. Save
10. Load
0. Exit
```

**Cấu trúc dữ liệu đề xuất:**

```cpp
struct Product {
    char id[20];
    char name[50];
    double price;
    int quantity;
};
```

**Yêu cầu chi tiết:**

- Bán hàng: kiểm tra tồn kho trước khi bán, thông báo lỗi nếu số lượng yêu cầu > tồn kho.
- Nhập hàng: cộng thêm số lượng vào sản phẩm có sẵn.
- Hiển thị sản phẩm sắp hết (tồn kho ≤ ngưỡng do người dùng đặt).
- Validation: không cho nhập giá âm, ID trùng, tên rỗng.

```text
ID       Product          Price       Stock
------------------------------------------------
P001     Keyboard         350000      12
P002     Mouse            150000      3
P003     Monitor          3200000     0
```

**Kiến thức được luyện:** `if/else`, loop, function, validation thực tế.

---

### Project 4 — RPG CLI Game

**Độ khó: ⭐⭐⭐☆☆**

Trò chơi vai noktasentlich dạng dòng lệnh.

**Menu:**

```text
===== RPG GAME =====
1. Create character
2. Character status
3. Explore
4. Fight monster
5. Inventory
6. Save game
7. Load game
0. Exit
```

**Cấu trúc dữ liệu đề xuất:**

```cpp
struct Character {
    char name[50];
    int level;
    int hp;
    int maxHp;
    int attack;
    int defense;
    int gold;
};

struct Monster {
    char name[50];
    int hp;
    int attack;
    int defense;
};
```

**Yêu cầu chi tiết:**

- Khám phá: dùng hàm `rand()` để gặp quái vật ngẫu nhiên với chỉ số ngẫu nhiên.
- Chiến đấu theo lượt:

```text
You encountered Slime!
Player HP: 100 | Slime HP: 50
1. Attack
2. Run
> 1
You dealt 20 damage.
Slime attacks! You received 8 damage.
```

- Sau khi thắng: nhận vàng, tăng kinh nghiệm, lên level khi đủ kinh nghiệm.
- Kho đồ: lưu vật phẩm nhặt được trong quá trình khám phá.

**Kiến thức được luyện:** `rand()`, loop, condition, function, struct, array, file save/load.

---

### Project 5 — Library Management System

**Độ khó: ⭐⭐⭐☆☆**

Quản lý thư viện sách.

**Menu:**

```text
===== LIBRARY =====
1. Add book
2. List books
3. Search book
4. Borrow book
5. Return book
6. Show overdue books
7. Save
8. Load
0. Exit
```

**Cấu trúc dữ liệu đề xuất:**

```cpp
struct Book {
    char id[20];
    char title[100];
    char author[50];
    int year;
    bool available;
};

struct Reader {
    char id[20];
    char name[50];
};
```

**Yêu cầu chi tiết:**

- Mượn sách: kiểm tra sách còn.available == true, ghi nhậnreader mượn, đánh dấu sách không available.
- Trả sách: xác nhận đã mượn, đánh dấu sách available lại.
- Sách quá hạn: so sánh ngày mượn với ngày hiện tại (nhập từ bàn phím hoặc dùng hệ thống).
- Xử lý quan hệ giữa `Reader` và `Book`.

**Kiến thức được luyện:** nhiều struct hoạt động đồng thời, logic quan hệ dữ liệu.

---

### Project 6 — To-do / Personal Task Manager

**Độ khó: ⭐⭐☆☆☆**

Quản lý công việc cá nhân.

**Menu:**

```text
===== TASK MANAGER =====
1. Add task
2. Show tasks
3. Complete task
4. Delete task
5. Search task
6. Sort tasks
7. Save
8. Load
0. Exit
```

**Cấu trúc dữ liệu đề xuất:**

```cpp
struct Task {
    int id;
    char title[100];
    char description[200];
    bool completed;
};
```

**Ví dụ hiển thị:**

```text
[ ] 1. Learn C++
[✓] 2. Finish homework
[ ] 3. Build C++ project
```

**Kiến thức được luyện:** CRUD → Search → Sort → File I/O → Modularization.

---

### Project 7 — Personal Expense Tracker

**Độ khó: ⭐⭐⭐☆☆**

Theo dõi chi tiêu cá nhân.

**Menu:**

```text
===== EXPENSE TRACKER =====
1. Add expense
2. Show expenses
3. Search
4. Delete
5. Statistics
6. Monthly report
7. Save
8. Load
0. Exit
```

**Cấu trúc dữ liệu đề xuất:**

```cpp
struct Expense {
    int id;
    char category[30];
    char description[100];
    double amount;
    char date[20];
};
```

**Yêu cầu chi tiết:**

- Thống kê chi tiêu theo danh mục trong tháng:

```text
===== SEPTEMBER 2026 =====
Food            1,200,000
Transportation    450,000
Entertainment     300,000
Education         500,000
--------------------------------
Total           2,450,000
```

- Tìm kiếm chi tiêu theo danh mục hoặc mô tả.
- Báo cáo tháng: hiển thị tổng chi, chi tiêu cao nhất/thấp nhất.

**Kiến thức được luyện:** array + struct + file + thống kê.

---

### Project 8 — Matrix Processor

**Độ khó: ⭐⭐⭐☆☆**

Xử lý ma trận số — phù hợp nếu muốn củng cố Array + Pointer.

**Menu:**

```text
===== MATRIX PROCESSOR =====
1. Input matrix
2. Display matrix
3. Add matrices
4. Subtract matrices
5. Multiply matrices
6. Transpose
7. Find max/min
8. Save matrix
9. Load matrix
0. Exit
```

**Yêu cầu chi tiết:**

- Hỗ trợ ma trận kích thước tối đa NxN (ví dụ N = 100).
- Cộng, trừ, nhân ma trận: kiểm tra kích thước phù hợp trước khi thực hiện.
- Chuyển vị: hiển thị kết quả-transposed matrix.

```text
A =                 Transpose:
1 2 3                1 4 7
4 5 6                2 5 8
7 8 9                3 6 9
```

**Kiến thức được luyện:** mảng 2D, pointer khi truyền mảng, hàm xử lý ma trận.

---

### Project 9 — Mini File Manager

**Độ khó: ⭐⭐⭐⭐☆**

Quản lý file cơ bản qua CLI.

**Menu:**

```text
===== MINI FILE MANAGER =====
1. Create file
2. Write file
3. Read file
4. Append file
5. Rename
6. Delete
7. List files
0. Exit
```

**Yêu cầu chi tiết:**

- Xử lý đường dẫn file (file path), thư mục.
- Xử lý lỗi: file không tồn tại, không có quyền truy cập, tên file trùng.
- Hiển thị danh sách file trong thư mục hiện tại.

**Kiến thức được luyện:** filesystem, directory, file path, exception/error handling, C++ Standard Library.

---

### Project 10 — Mini E-commerce CLI

**Độ khó: ⭐⭐⭐⭐☆**

Hệ thống mua bán online đơn giản qua giao diện dòng lệnh.

**Menu:**

```text
===== ONLINE SHOP =====
1. Browse products
2. Search products
3. Add to cart
4. View cart
5. Checkout
6. Order history
7. Account
8. Save
9. Load
0. Exit
```

**Cấu trúc dữ liệu đề xuất:**

```cpp
struct Product {
    char id[20];
    char name[50];
    double price;
    int stock;
};

struct CartItem {
    char productId[20];
    int quantity;
};

struct Order {
    char orderId[20];
    char date[20];
    double total;
};
```

**Yêu cầu chi tiết:**

- Giỏ hàng: thêm sản phẩm (kiểm tra tồn kho), xem giỏ, xóa sản phẩm khỏi giỏ.
- Thanh toán: trừ tồn kho, tạo đơn hàng, lưu lịch sử.
- Tài khoản: lưu thông tin người dùng cơ bản.

**Kiến thức được luyện:** tổng hợp — struct phức tạp, nhiều mảng, logic liên quan, file I/O.

---

## 4. Đánh giá

| Tiêu chí | Trọng số |
|----------|----------|
| Chạy đúng theo yêu cầu (từng version) | 40% |
| Xử lý lỗi và validation đầu vào | 20% |
| Code organization (tách module, đặt tên rõ ràng) | 15% |
| Lưu / đọc file hoạt động chính xác | 15% |
| README đầy đủ, hướng dẫn cài đặt rõ ràng | 10% |

---

## 5. Gợi ý thứ tự thực hiện

Nên hoàn thành theo thứ tự từ dễ đến khó:

1. **Project 6** — Task Manager (⭐⭐, làm quen quy trình)
2. **Project 1** — Student Management (⭐⭐, CRUD cơ bản)
3. **Project 3** — Inventory System (⭐⭐⭐, validation thực tế)
4. **Project 4** — RPG CLI Game (⭐⭐⭐, logic game)
5. **Project 10** — Mini E-commerce (⭐⭐⭐⭐, tổng hợp)

Mỗi project nên hoàn thành đầy đủ 5 version trước khi chuyển sang project tiếp theo.
