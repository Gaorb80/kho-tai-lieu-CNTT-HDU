# Kiến thưc cần nhớ
- Hiểu về switch 
- Hiểu về toàn tử ba ngôi
- Hiểu về for 
- Hiểu về vòng lặp while
# Tổng hợp kiến thức rời rạc.

Chắc chắn rồi! Hãy cùng tìm hiểu chi tiết về toán tử ba ngôi, một công cụ rất hữu ích để làm cho code của bạn ngắn gọn hơn.

### **Toán tử ba ngôi là gì?**

Toán tử ba ngôi (ternary operator) là một cách viết tắt cho câu lệnh `if-else` đơn giản. Tên gọi "ba ngôi" (ternary) xuất phát từ việc nó là toán tử duy nhất trong C++ cần đến **ba toán hạng** (three operands).

Nó giống như một câu lệnh `if-else` được gói gọn lại trên một dòng duy nhất.

---

### **Cú pháp**

Cấu trúc của nó rất đơn giản:

C++

```
điều_kiện ? giá_trị_nếu_đúng : giá_trị_nếu_sai;
```

**Giải thích các thành phần:**

1. **`điều_kiện`**: Đây là biểu thức sẽ được đánh giá là `true` hoặc `false` (giống hệt như phần trong `if(...)`).
    
2. **`?`**: Dấu chấm hỏi. Nếu `điều_kiện` là `true`, biểu thức sẽ trả về giá trị đứng ngay sau nó.
    
3. **`giá_trị_nếu_đúng`**: Giá trị hoặc biểu thức sẽ được thực thi/trả về nếu `điều_kiện` là `true`.
    
4. **`:`**: Dấu hai chấm. Dùng để ngăn cách hai kết quả.
    
5. **`giá_trị_nếu_sai`**: Giá trị hoặc biểu thức sẽ được thực thi/trả về nếu `điều_kiện` là `false`.
    

---

### **Ví dụ so sánh trực quan**

Hãy lấy một ví dụ `if-else` kinh điển: kiểm tra tuổi để xem một người có đủ tuổi trưởng thành hay không.

**✅ Cách dùng `if-else` thông thường:**

C++

```
#include <iostream>
#include <string>

int main() {
    int age = 20;
    std::string status;

    if (age >= 18) {
        status = "Truong thanh";
    } else {
        status = "Vi thanh nien";
    }

    std::cout << status; // In ra "Truong thanh"
    return 0;
}
```

**✅ Cách dùng toán tử ba ngôi để thay thế:**

C++

```
#include <iostream>
#include <string>

int main() {
    int age = 20;
    
    // Gán giá trị cho biến status bằng toán tử ba ngôi
    std::string status = (age >= 18) ? "Truong thanh" : "Vi thanh nien";
    //      điều_kiện -----^        ^        ^                ^
    //                               |   giá_trị nếu true   giá_trị nếu false

    std::cout << status; // In ra "Truong thanh"
    return 0;
}
```

Bạn có thể thấy, 5 dòng code `if-else` đã được rút gọn lại chỉ còn 1 dòng duy nhất mà kết quả không hề thay đổi.

---

### **Các trường hợp sử dụng phổ biến**

#### **1. Gán giá trị cho biến**

Đây là trường hợp phổ biến nhất. Ví dụ tìm số lớn hơn trong hai số:

- **Dùng `if-else`:**
    
    C++
    
    ```
    int a = 10, b = 20;
    int max_val;
    if (a > b) {
        max_val = a;
    } else {
        max_val = b;
    }
    ```
    
- **Dùng toán tử ba ngôi:**
    
    C++
    
    ```
    int a = 10, b = 20;
    int max_val = (a > b) ? a : b; // max_val sẽ là 20
    ```
    

#### **2. In trực tiếp ra màn hình (`cout`)**

Bạn có thể lồng thẳng toán tử ba ngôi vào trong `cout` mà không cần biến trung gian. Đây chính là cách áp dụng cho bài 3.5 của bạn:

- **Dùng `if-else` (code của bạn):**
    
    C++
    
    ```
    if (a > 0 && b > 0 && c > 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    ```
    
- **Dùng toán tử ba ngôi:**
    
    C++
    
    ```
    // In ra "YES" nếu điều kiện đúng, ngược lại in ra "NO"
    std::cout << ((a > 0 && b > 0 && c > 0) ? "YES" : "NO");
    ```
    
    **Lưu ý:** Nên có cặp dấu ngoặc `()` bao quanh toàn bộ toán tử ba ngôi để đảm bảo thứ tự ưu tiên và code dễ đọc hơn.
    

---

### **Khi nào nên và không nên dùng? ⚠️**

- **NÊN DÙNG:** Khi khối lệnh `if` và `else` của bạn **chỉ có một câu lệnh duy nhất** và đơn giản (thường là gán giá trị, `return` một giá trị, hoặc in ra một thứ gì đó). Nó giúp code ngắn gọn và dễ đọc hơn trong những trường hợp này.
    
- **KHÔNG NÊN DÙNG:**
    
    - Khi bạn cần thực thi **nhiều hơn một câu lệnh** trong `if` hoặc `else`.
        
    - Khi bạn **lồng nhiều toán tử ba ngôi vào nhau**. Về mặt kỹ thuật thì C++ cho phép, nhưng code sẽ trở nên cực kỳ khó đọc và khó bảo trì. `if-else if-else` sẽ là lựa chọn tốt hơn nhiều.
        

**Tóm lại, hãy coi toán tử ba ngôi là một công cụ tiện lợi để thay thế cho những cấu trúc `if-else` đơn giản nhất.**



Chắc chắn rồi! Dưới đây là hướng dẫn chi tiết về cách sử dụng vòng lặp `for` trong C++, một trong những cấu trúc lặp phổ biến và mạnh mẽ nhất.

### ## Vòng lặp `for` là gì?

Vòng lặp `for` được sử dụng để thực thi một khối mã lặp đi lặp lại một số lần **xác định trước**. Hãy tưởng tượng bạn cần làm một việc gì đó đúng 10 lần, ví dụ như chống đẩy 10 cái. Vòng lặp `for` chính là công cụ hoàn hảo cho việc đó.

---

### ## Khi nào nên và không nên dùng?

- **NÊN DÙNG 👍:** Khi bạn biết chính xác số lần cần lặp.
    
    - Duyệt qua tất cả các phần tử của một mảng hoặc `std::vector`.
        
    - Thực hiện một hành động N lần (ví dụ: in ra "Hello" 5 lần).
        
    - Đếm ngược từ một số cho trước.
        
- **KHÔNG NÊN DÙNG 👎:** Khi bạn không biết trước số lần lặp. Trong trường hợp này, `while` hoặc `do-while` sẽ phù hợp hơn.
    
    - Chờ người dùng nhập một giá trị cụ thể (ví dụ: lặp cho đến khi người dùng nhập số 0).
        
    - Đọc dữ liệu từ một file cho đến khi hết file.
        

---

### ## Cấu trúc và công thức

Cú pháp của vòng lặp `for` luôn bao gồm ba phần chính, được ngăn cách bởi dấu chấm phẩy `;`.

**Cú pháp:**

C++

```
for (khởi_tạo; điều_kiện; cập_nhật) {
    // Khối mã để lặp lại
}
```

Hãy cùng "mổ xẻ" ba phần này:

1. **`khởi_tạo` (Initialization):**
    
    - Đây là nơi bạn khai báo và gán giá trị ban đầu cho một biến đếm (thường đặt tên là `i` cho "index").
        
    - Phần này chỉ được thực thi **một lần duy nhất** ngay khi vòng lặp bắt đầu.
        
    - _Ví dụ:_ `int i = 0;`
        
2. **`điều_kiện` (Condition):**
    
    - Đây là một biểu thức logic. Trước mỗi lần lặp (kể cả lần đầu tiên), điều kiện này sẽ được kiểm tra.
        
    - Nếu điều kiện là **đúng (`true`)**, khối mã bên trong vòng lặp sẽ được thực thi.
        
    - Nếu điều kiện là **sai (`false`)**, vòng lặp sẽ kết thúc ngay lập tức.
        
    - _Ví dụ:_ `i < 10;` (lặp khi `i` còn nhỏ hơn 10).
        
3. **`cập_nhật` (Update/Increment):**
    
    - Phần này được thực thi **sau mỗi lần** khối mã bên trong vòng lặp chạy xong.
        
    - Nó thường dùng để tăng hoặc giảm biến đếm, để vòng lặp có thể tiến tới điểm kết thúc.
        
    - _Ví dụ:_ `i++` (tăng `i` lên 1), `i--` (giảm `i` đi 1), `i += 2` (tăng `i` lên 2).
        

---

### ## Các ví dụ thực tế

#### **Ví dụ 1: In số từ 0 đến 4**

Đây là ví dụ kinh điển nhất.


```cpp
#include <iostream>

int main() {
    // 1. Khởi tạo: int i = 0
    // 2. Điều kiện: lặp khi i < 5
    // 3. Cập nhật: tăng i lên 1 sau mỗi lần lặp
    for (int i = 0; i < 5; i++) {
        std::cout << "Giá trị của i là: " << i << std::endl;
    }
    return 0;
}
```

**Luồng thực thi:**

1. `i` được tạo và gán giá trị `0`.
    
2. Kiểm tra `0 < 5` (đúng) -> In ra "Giá trị của i là: 0".
    
3. `i++` -> `i` trở thành `1`.
    
4. Kiểm tra `1 < 5` (đúng) -> In ra "Giá trị của i là: 1".
    
5. ...
    
6. Kiểm tra `4 < 5` (đúng) -> In ra "Giá trị của i là: 4".
    
7. `i++` -> `i` trở thành `5`.
    
8. Kiểm tra `5 < 5` (sai) -> Vòng lặp kết thúc.
    

#### **Ví dụ 2: Tính tổng các số từ 1 đến 100**

C++

```
#include <iostream>

int main() {
    int tong = 0;
    for (int i = 1; i <= 100; i++) {
        tong += i; // tương đương tong = tong + i;
    }
    std::cout << "Tổng từ 1 đến 100 là: " << tong << std::endl; // Kết quả: 5050
    return 0;
}
```

#### **Ví dụ 3: Vòng lặp `for` lồng nhau (Nested for loops)**

Bạn có thể đặt một vòng lặp `for` bên trong một vòng lặp `for` khác để tạo ra các cấu trúc phức tạp hơn, ví dụ như vẽ một hình chữ nhật bằng dấu sao.

C++

```
#include <iostream>

int main() {
    int chieu_cao = 4;
    int chieu_rong = 6;

    for (int i = 0; i < chieu_cao; i++) { // Vòng lặp ngoài quản lý các hàng
        for (int j = 0; j < chieu_rong; j++) { // Vòng lặp trong quản lý các cột trên mỗi hàng
            std::cout << "* ";
        }
        std::cout << std::endl; // Xuống dòng khi vẽ xong một hàng
    }
    return 0;
}
```

**Kết quả:**

```
* * * * * *
* * * * * *
* * * * * *
* * * * * *
```

Tóm lại, `for` là một công cụ cực kỳ mạnh mẽ và thiết yếu khi bạn biết trước số lần cần lặp. Nắm vững cú pháp ba phần của nó là chìa khóa để sử dụng thành thạo.


Bạn hoàn toàn **có thể** dùng vòng lặp `for` cho việc yêu cầu nhập lại mật khẩu, nhưng đó **không phải là cách tối ưu** và tự nhiên nhất.

Cách tối ưu và phù hợp hơn cho trường hợp này là dùng vòng lặp `while`.

Hãy cùng phân tích cả hai cách để thấy rõ sự khác biệt.

---

### ## Dùng vòng lặp `for` (Có thể, nhưng không lý tưởng)

Bạn sẽ dùng `for` khi bạn muốn **giới hạn số lần nhập sai** của người dùng. Ví dụ, bạn chỉ cho họ nhập sai tối đa 3 lần.

**Cấu trúc:**

- **Khởi tạo:** `int so_lan_thu = 1`
    
- **Điều kiện:** `so_lan_thu <= 3` (Lặp khi số lần thử vẫn nhỏ hơn hoặc bằng 3)
    
- **Cập nhật:** `so_lan_thu++` (Tăng số lần thử lên sau mỗi lần nhập sai)
    

**Ví dụ code:**

C++

```
#include <iostream>
#include <string>

int main() {
    std::string mat_khau_dung = "admin123";
    std::string mat_khau_nhap;
    bool dang_nhap_thanh_cong = false;

    // Cho phép người dùng thử tối đa 3 lần
    for (int so_lan_thu = 1; so_lan_thu <= 3; so_lan_thu++) {
        std::cout << "Vui long nhap mat khau (lan " << so_lan_thu << "/3): ";
        std::cin >> mat_khau_nhap;

        if (mat_khau_nhap == mat_khau_dung) {
            std::cout << "Dang nhap thanh cong!\n";
            dang_nhap_thanh_cong = true;
            break; // Thoát khỏi vòng lặp ngay khi nhập đúng
        } else {
            std::cout << "Mat khau sai. ";
            if (so_lan_thu < 3) {
                std::cout << "Vui long thu lai.\n";
            } else {
                std::cout << "Ban da nhap sai qua 3 lan.\n";
            }
        }
    }

    if (!dang_nhap_thanh_cong) {
        std::cout << "Tai khoan da bi khoa.\n";
    }

    return 0;
}
```

**Nhược điểm:** Cách này hơi "cứng nhắc". Vòng lặp `for` về bản chất là để lặp khi biết trước số lần, còn ở đây mục đích chính của chúng ta là lặp _cho đến khi_ mật khẩu đúng, việc giới hạn số lần chỉ là phụ.

---

### ## Dùng vòng lặp `while` (Tối ưu và tự nhiên hơn) ✅

Vòng lặp `while` sinh ra để xử lý các tình huống mà vòng lặp cần tiếp tục chạy **chừng nào một điều kiện còn đúng**. Đây chính xác là kịch bản của chúng ta: "Lặp lại việc nhập mật khẩu chừng nào mật khẩu nhập vào còn sai".

**Cấu trúc:**

- **Điều kiện:** `while (mat_khau_nhap != mat_khau_dung)`
    

**Ví dụ code (Không giới hạn số lần nhập):**

C++

```
#include <iostream>
#include <string>

int main() {
    std::string mat_khau_dung = "admin123";
    std::string mat_khau_nhap;

    std::cout << "Vui long nhap mat khau: ";
    std::cin >> mat_khau_nhap;

    // Lặp lại MÃI MÃI miễn là mật khẩu nhập vào còn sai
    while (mat_khau_nhap != mat_khau_dung) {
        std::cout << "Mat khau sai, vui long nhap lai: ";
        std::cin >> mat_khau_nhap;
    }

    std::cout << "Dang nhap thanh cong!\n";
    return 0;
}
```

Ví dụ code (Kết hợp giới hạn số lần nhập - cách tốt nhất):

Bạn có thể dễ dàng kết hợp while với một biến đếm bên ngoài để có được sự linh hoạt tốt nhất.

C++

```
#include <iostream>
#include <string>

int main() {
    std::string mat_khau_dung = "admin123";
    std::string mat_khau_nhap;
    int so_lan_thu = 0;
    const int GIOI_HAN = 3;

    // Lặp lại khi số lần thử chưa đạt giới hạn VÀ mật khẩu nhập vào vẫn sai
    while (so_lan_thu < GIOI_HAN) {
        std::cout << "Vui long nhap mat khau: ";
        std::cin >> mat_khau_nhap;

        if (mat_khau_nhap == mat_khau_dung) {
            break; // Thoát vòng lặp nếu đúng
        }
        
        so_lan_thu++; // Chỉ tăng số lần thử khi nhập sai
        std::cout << "Mat khau sai. Ban con " << GIOI_HAN - so_lan_thu << " lan thu.\n";
    }

    if (mat_khau_nhap == mat_khau_dung) {
        std::cout << "Dang nhap thanh cong!\n";
    } else {
        std::cout << "Ban da nhap sai qua so lan quy dinh.\n";
    }

    return 0;
}
```

### ## Kết luận

|**Tiêu chí**|**Vòng lặp for**|**Vòng lặp while**|
|---|---|---|
|**Mục đích chính**|Lặp lại một số lần **đã biết trước**.|Lặp lại **chừng nào một điều kiện còn đúng**.|
|**Trường hợp Mật khẩu**|Phù hợp khi **ưu tiên hàng đầu** là giới hạn số lần thử.|Phù hợp hơn vì nó thể hiện đúng bản chất vấn đề: "lặp cho đến khi đúng".|
|**Tính linh hoạt**|Kém linh hoạt hơn.|Linh hoạt hơn, dễ dàng thêm/bớt điều kiện lặp.|
|**Tính tối ưu**|**Không tối ưu** bằng `while`.|**Tối ưu và là lựa chọn tiêu chuẩn** cho bài toán này.|

**Tóm lại:** Mặc dù `for` có thể "ép" để giải quyết bài toán, `while` mới là công cụ đúng đắn, tự nhiên và dễ hiểu hơn cho các vòng lặp dựa trên điều kiện như việc xác thực người dùng.


Chắc chắn rồi! Dưới đây là hướng dẫn chi tiết về vòng lặp `while` trong C++, một công cụ cực kỳ linh hoạt để điều khiển luồng chương trình của bạn.

---

### ## Vòng lặp `while` là gì?

Vòng lặp `while` (trong khi) là một cấu trúc lặp cơ bản dùng để thực thi một khối mã lặp đi lặp lại **chừng nào một điều kiện cụ thể vẫn còn đúng (`true`)**.

Hãy tưởng tượng bạn đang lau nhà. Bạn sẽ tiếp tục lau _trong khi_ sàn nhà vẫn còn bẩn. Khi sàn nhà sạch (điều kiện "còn bẩn" trở thành sai), bạn sẽ dừng lại. Vòng lặp `while` hoạt động y hệt như vậy.

---

### ## Khi nào nên dùng `while`?

- **NÊN DÙNG 👍:** Khi bạn **không biết trước chính xác số lần lặp**. Vòng lặp chỉ phụ thuộc vào một điều kiện.
    
    - Chờ người dùng nhập một giá trị hợp lệ.
        
    - Đọc dữ liệu từ file cho đến khi hết file.
        
    - Thực hiện một game loop chạy cho đến khi người chơi thoát game.
        
    - Yêu cầu nhập lại mật khẩu cho đến khi đúng.
        
- **KHÔNG NÊN DÙNG 👎:** Khi bạn biết chính xác số lần cần lặp (ví dụ: lặp đúng 100 lần). Trong trường hợp này, vòng lặp `for` sẽ gọn gàng và phù hợp hơn.
    

---

### ## Cấu trúc và cách hoạt động

Cú pháp của vòng lặp `while` rất đơn giản.

C++

```
while (điều_kiện) {
    // Khối mã này sẽ được thực thi lặp đi lặp lại
    // miễn là 'điều_kiện' còn đúng (true).
    
    // QUAN TRỌNG: Phải có một câu lệnh nào đó trong đây
    // để thay đổi 'điều_kiện', nếu không sẽ bị lặp vô hạn!
}
```

**Luồng thực thi diễn ra như sau:**

1. **Kiểm tra `điều_kiện`**: Chương trình kiểm tra xem biểu thức trong dấu ngoặc `()` là đúng (`true`) hay sai (`false`).
    
2. **Nếu `điều_kiện` là `true`**:
    
    - Thực thi toàn bộ khối mã bên trong cặp dấu `{}`.
        
    - Sau khi thực thi xong, nó sẽ quay trở lại Bước 1 để kiểm tra lại điều kiện.
        
3. **Nếu `điều_kiện` là `false`**:
    
    - Bỏ qua hoàn toàn khối mã bên trong.
        
    - Vòng lặp kết thúc và chương trình tiếp tục chạy các câu lệnh ngay sau vòng lặp.
        

---

### ## Các ví dụ thực tế

#### **Ví dụ 1: Đếm số từ 1 đến 5**

Mặc dù `for` phù hợp hơn, ta vẫn có thể dùng `while` để thấy rõ cách nó hoạt động.

C++

```
#include <iostream>

int main() {
    int i = 1; // 1. Khởi tạo biến đếm bên ngoài

    while (i <= 5) { // 2. Điều kiện lặp
        std::cout << i << " ";
        i++; // 3. Cập nhật biến đếm bên trong để tiến tới điểm dừng
    }
    // Kết quả in ra: 1 2 3 4 5

    return 0;
}
```

#### **Ví dụ 2: Yêu cầu nhập liệu hợp lệ (kinh điển)**

Đây là trường hợp sử dụng `while` hiệu quả nhất. Chương trình sẽ yêu cầu người dùng nhập một số dương và sẽ không dừng lại cho đến khi họ làm đúng.

C++

```
#include <iostream>

int main() {
    int number;

    std::cout << "Vui long nhap mot so duong: ";
    std::cin >> number;

    // Lặp lại trong khi người dùng nhập số không dương
    while (number <= 0) {
        std::cout << "So khong hop le! Vui long nhap lai mot so DUONG: ";
        std::cin >> number;
    }

    std::cout << "Ban da nhap so: " << number << ". Cam on!";
    return 0;
}
```

#### **Ví dụ 3: Vòng lặp vô hạn và `break`**

Đôi khi bạn muốn tạo một vòng lặp luôn chạy và chỉ thoát ra khi có một sự kiện đặc biệt xảy ra.

C++

```
#include <iostream>

int main() {
    int command;

    while (true) { // 'true' luôn đúng -> vòng lặp này sẽ chạy mãi mãi
        std::cout << "\n--- MENU ---\n";
        std::cout << "1. Bat dau\n";
        std::cout << "2. Cai dat\n";
        std::cout << "0. Thoat\n";
        std::cout << "Lua chon cua ban: ";
        std::cin >> command;

        if (command == 0) {
            std::cout << "Dang thoat chuong trinh...";
            break; // Lệnh 'break' sẽ phá vỡ vòng lặp gần nhất (vòng lặp while)
        }
        
        // Xử lý các lệnh khác ở đây
        std::cout << "Ban da chon lenh " << command << std::endl;
    }

    return 0;
}
```

### ## Cẩn thận với lặp vô hạn! ⚠️

Lỗi phổ biến nhất khi dùng `while` là quên cập nhật biến điều kiện, dẫn đến vòng lặp chạy mãi mãi và làm treo chương trình.

C++

```
// LỖI: VÍ DỤ VỀ VÒNG LẶP VÔ HẠN
int i = 0;
while (i < 10) {
    std::cout << "Hello!";
    // Quên không tăng i (i++)
    // Vì i luôn bằng 0, điều kiện i < 10 sẽ luôn đúng.
}
```

**Tóm lại**, `while` là công cụ hoàn hảo khi bạn cần lặp dựa trên một điều kiện thay vì một số lần lặp cố định. Chỉ cần đảm bảo rằng điều kiện đó sẽ có lúc trở thành `false` để kết thúc vòng lặp!