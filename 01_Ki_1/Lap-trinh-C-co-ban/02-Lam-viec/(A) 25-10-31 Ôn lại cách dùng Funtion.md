
Để giúp bạn nhớ rõ hơn về `::g`:

Toán tử `::` được gọi là **Toán tử giải quyết phạm vi (Scope Resolution Operator)**.

Khi bạn đặt nó ngay trước tên một biến (như `::g`), bạn đang ra lệnh cho trình biên dịch: "Hãy tìm và sử dụng biến `g` ở **phạm vi toàn cục (global scope)**—tức là biến được khai báo bên ngoài tất cả các hàm—thay vì bất kỳ biến cục bộ (local) nào có cùng tên."

Trong đoạn mã của bạn:

- `int g = 10;` (Đây là biến **toàn cục**)
    
- Bên trong hàm `main`, `int g = 5;` (Đây là biến **cục bộ**. Nó "che" (hides) mất biến toàn cục)
    

Do đó:

- `cout << ::g;` ➡️ Dùng `::` để "vươn ra ngoài" hàm `main` và lấy giá trị của `g` **toàn cục**. Kết quả là **10**.
    
- `cout << g;` ➡️ Không có `::`, C++ ưu tiên biến gần nhất, tức là `g` **cục bộ**. Kết quả là **5**.
    

Đây là cách để bạn truy cập được biến toàn cục khi nó đã bị một biến cục bộ cùng tên "che" mất.


Chào bạn, "mảng kiến thức" liên quan trực tiếp đến ví dụ của bạn xoay quanh một trong những khái niệm nền tảng quan trọng nhất của C++: **Phạm vi (Scope)** và **Vòng đời (Lifetime)** của biến.

Đây là các bài học liên quan:

## 1. Phạm vi của biến (Variable Scope)

Đây chính là khái niệm cốt lõi trong ví dụ của bạn. **Phạm vi** định nghĩa "nơi" mà một biến có thể được truy cập trong mã của bạn.

- **Phạm vi Cục bộ (Local Scope / Block Scope):**
    
    - Biến được khai báo **bên trong** một hàm hoặc một khối lệnh (bất cứ thứ gì bên trong dấu `{ }`).
        
    - Nó chỉ tồn tại và chỉ có thể được truy cập từ bên trong khối lệnh đó.
        
    - Ví dụ: Biến `int g = 5;` của bạn bên trong hàm `main`.
        
- **Phạm vi Toàn cục (Global Scope):**
    
    - Biến được khai báo **bên ngoài** tất cả các hàm.
        
    - Nó có thể được truy cập từ **bất kỳ đâu** trong chương trình (trong cùng một file) sau khi nó được khai báo.
        
    - Ví dụ: Biến `int g = 10;` của bạn ở đầu file.
        

---

## 2. Hiện tượng Che (Variable Shadowing)

Đây chính là điều đã xảy ra trong hàm `main` của bạn.

> Khi bạn khai báo một biến cục bộ (Local) có tên **trùng** với một biến toàn cục (Global), biến cục bộ sẽ "che" (shadow) mất biến toàn cục.

Bất cứ khi nào bạn gọi tên `g` bên trong hàm `main`, C++ sẽ ưu tiên sử dụng biến "gần" nó nhất, chính là biến cục bộ `g = 5`. Và đây là lý do toán tử `::` tồn tại:

- `g`: Trình biên dịch tìm thấy biến `g` cục bộ (giá trị 5).
    
- `::g`: Bạn ra lệnh cho trình biên dịch "Hãy bỏ qua biến cục bộ, vươn ra phạm vi toàn cục" và lấy `g` toàn cục (giá trị 10).
    

---

## 3. Mở rộng về Toán tử `::` (Scope Resolution Operator)

Toán tử `::` không chỉ dùng để truy cập biến toàn cục. Đây là một toán tử cực kỳ quan trọng và có 2 công dụng chính khác mà bạn sẽ sớm gặp:

1. **Truy cập Không gian tên (Namespace):**
    
    - Đây là cách dùng phổ biến nhất. Bạn đã thấy nó rồi đấy! Khi bạn viết `using namespace std;`, bạn đang bảo C++ "cứ lấy mọi thứ trong `std` mà dùng".
        
    - Nếu bạn không dùng dòng đó, bạn phải chỉ rõ:
        
        - `std::cout << "Xin chao";`
            
        - `std::cin >> bien;`
            
    - `std` là một "không gian tên" (giống như một cái hộp) chứa các công cụ như `cout`, `cin`. Toán tử `::` là cách bạn "mở hộp `std`" để lấy "món đồ `cout`".
        
2. **Truy cập thành viên của Lớp (Class):**
    
    - Khi học lập trình hướng đối tượng (OOP), bạn sẽ dùng `::` để định nghĩa các hàm (methods) của một lớp ở bên ngoài, hoặc để truy cập các thành viên tĩnh (static members) của lớp đó.
        
    - Ví dụ: `MyClass::myStaticVariable` hoặc `MyClass::myFunction()`.
        

---

## 4. Vòng đời của biến (Variable Lifetime / Storage Duration)

Khái niệm này liên quan mật thiết đến Phạm vi. **Vòng đời** là khoảng thời gian mà một biến "sống" (tồn tại trong bộ nhớ).

- **Vòng đời tự động (Automatic Storage Duration):**
    
    - Dành cho các biến cục bộ (local).
        
    - Biến được "sinh ra" khi chương trình đi vào khối lệnh `{...}` chứa nó.
        
    - Biến bị "hủy" (thu hồi bộ nhớ) khi chương trình thoát ra khỏi khối lệnh đó.
        
- **Vòng đời tĩnh (Static Storage Duration):**
    
    - Dành cho các biến toàn cục (global) và biến `static`.
        
    - Biến được "sinh ra" khi chương trình bắt đầu chạy.
        
    - Biến chỉ bị "hủy" khi chương trình kết thúc.
        
    - Đây là lý do tại sao biến toàn cục `g = 10` của bạn luôn ở đó, sẵn sàng để được `::g` gọi.
        

---

## 5. Từ khóa `static` (Một khái niệm liên quan)

Đây là một bài học quan trọng tiếp theo. Sẽ ra sao nếu bạn muốn một biến **cục bộ** (chỉ truy cập được bên trong hàm) nhưng lại có **vòng đời tĩnh** (giữ giá trị của nó sau khi hàm kết thúc)?

Đó là lúc bạn dùng `static` bên trong hàm:

C++

```
#include <iostream>

void demSoLanGoi() {
    // 'dem' co pham vi CUC BO, nhung VONG DOI TINH
    // No chi duoc khoi tao MỘT LAN DUY NHAT
    static int dem = 0; 
    dem++;
    std::cout << "So lan goi: " << dem << std::endl;
}

int main() {
    demSoLanGoi(); // In ra: So lan goi: 1
    demSoLanGoi(); // In ra: So lan goi: 2 (bien 'dem' van nho gia tri cu)
    demSoLanGoi(); // In ra: So lan goi: 3
    return 0;
}
```

Tóm lại, từ ví dụ của bạn, các chủ đề bạn nên tìm hiểu tiếp theo là: **Phạm vi (Scope)**, **Vòng đời (Lifetime)**, **Namespace**, và từ khóa **`static`**.

Bạn có muốn tôi giải thích rõ hơn về khái niệm "Namespace" (Không gian tên) và tại sao `std::cout` lại dùng `::` không?


Đây là một ý tưởng rất hay để ôn tập! Phương pháp lặp lại ngắt quãng (Spaced Repetition) dùng flashcard cực kỳ hiệu quả.

Dưới đây là những "cặp" nội dung quan trọng nhất từ bài học vừa rồi, được thiết kế để bạn làm flashcard:

---

### Nhóm 1: Toán tử `::` và Hiện tượng Che (Shadowing)

**Thẻ 1**

- **Mặt trước:** Hiện tượng "Che" (Variable Shadowing) là gì?
    
- **Mặt sau:** Là khi một biến **cục bộ** (local) được khai báo có tên trùng với một biến **toàn cục** (global). Biến cục bộ sẽ được ưu tiên sử dụng bên trong phạm vi của nó.
    

**Thẻ 2**

- **Mặt trước:** Làm thế nào để truy cập biến toàn cục `g` khi nó đã bị biến cục bộ `g` che mất?
    
- Mặt sau: Dùng Toán tử giải quyết phạm vi (Scope Resolution Operator).
    
    Ví dụ: ::g
    

**Thẻ 3**

- **Mặt trước:** Công dụng phổ biến nhất của toán tử `::` là gì (ngoài việc truy cập biến toàn cục)?
    
- Mặt sau: Dùng để truy cập các thành phần từ một Không gian tên (Namespace).
    
    Ví dụ: std::cout (truy cập cout từ namespace std).
    

---

### Nhóm 2: Phạm vi (Scope)

**Thẻ 4**

- **Mặt trước:** Phạm vi Cục bộ (Local Scope) là gì?
    
- **Mặt sau:** Là phạm vi **bên trong** một hàm hoặc một khối lệnh `{ }`. Biến cục bộ chỉ có thể được truy cập từ bên trong khối lệnh đó.
    

**Thẻ 5**

- **Mặt trước:** Phạm vi Toàn cục (Global Scope) là gì?
    
- **Mặt sau:** Là phạm vi **bên ngoài** tất cả các hàm. Biến toàn cục có thể được truy cập từ bất kỳ đâu trong file (sau khi nó được khai báo).
    

---

### Nhóm 3: Vòng đời (Lifetime)

**Thẻ 6**

- **Mặt trước:** "Vòng đời" (Lifetime) của biến là gì?
    
- **Mặt sau:** Là khoảng thời gian mà một biến tồn tại trong bộ nhớ.
    

**Thẻ 7**

- **Mặt trước:** Vòng đời của biến **cục bộ** (Automatic)?
    
- **Mặt sau:** "Sinh ra" khi đi vào khối `{ }` và "chết đi" (bị hủy) khi thoát khỏi khối `{ }`.
    

**Thẻ 8**

- **Mặt trước:** Vòng đời của biến **toàn cục** (Static)?
    
- **Mặt sau:** "Sinh ra" khi chương trình bắt đầu và "chết đi" khi chương trình kết thúc.
    

---

### Nhóm 4: Từ khóa `static` (Trường hợp đặc biệt)

**Thẻ 9**

- **Mặt trước:** Khi dùng `static` cho một biến **cục bộ** (ví dụ: `static int dem = 0;`), điều gì xảy ra?
    
- **Mặt sau:** Biến có **phạm vi cục bộ** (chỉ dùng trong hàm) nhưng có **vòng đời tĩnh** (giữ giá trị giữa các lần gọi hàm). Nó chỉ được khởi tạo một lần duy nhất.
    

Bạn có muốn tôi tạo thêm các câu hỏi trắc nghiệm dựa trên các thẻ flashcard này để bạn tự kiểm tra không?