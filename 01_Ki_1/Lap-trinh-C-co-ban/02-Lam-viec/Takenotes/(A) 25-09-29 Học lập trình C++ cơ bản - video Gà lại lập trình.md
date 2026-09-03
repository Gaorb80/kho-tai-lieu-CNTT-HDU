---
tags:
  - Cpp
---
# Tóm tắt
Video "2. Lập trình C++ | nhập xuất dữ liệu C++ | Thiết lập gõ tiếng việt, chỉnh font chữ, cỡ chữ vs 2023" của kênh Gà Lại Lập Trình cung cấp hướng dẫn chi tiết về các kiến thức sau:

- **Tinh chỉnh Visual Studio** [[00:09](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=9)]:
    
    - **Hiển thị số dòng (Line Number)** [[01:39](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=99)]: Hướng dẫn cách bật số thứ tự dòng code trong Visual Studio 2023 bằng cách vào `Tool > Option > Text Editor > All Languages > General` và chọn `Line numbers`.
        
    - **Thay đổi giao diện màu sáng/tối (Theme)** [[02:28](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=148)]: Hướng dẫn chuyển đổi giữa các giao diện màu sáng và tối bằng cách vào `Tool > Option` và tìm kiếm `color` để chọn `General` trong phần `Environment`.
        
    - **Điều chỉnh cỡ chữ và font chữ trong vùng soạn thảo (Code Editor)** [[03:19](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=199)]: Hướng dẫn thay đổi kích thước và loại font chữ của code bằng cách vào `Tool > Option` và tìm kiếm `font` để chọn `Fonts and Colors` trong phần `Environment`.
        
    - **Điều chỉnh cỡ chữ trong các vùng menu và viền (Other Text Areas)** [[04:19](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=259)]: Hướng dẫn điều chỉnh cỡ chữ ở các khu vực ngoài vùng soạn thảo như menu, thanh công cụ.
        
- **Nhập xuất dữ liệu trong C++** [05:11](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=311)]:
    
    - **Sử dụng `cout` để xuất dữ liệu ra màn hình** [[05:16](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=316)]: Giới thiệu cú pháp `std::cout << "chuỗi cần xuất";` và cách sử dụng `using namespace std;` để viết gọn thành `cout << "chuỗi cần xuất";`.
        
    - **Ký tự xuống dòng `\n`** [[07:34](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=454)]: Giải thích tác dụng của ký tự `\n` để xuống dòng sau khi xuất chuỗi.
        
    - **Chỉnh font chữ và cỡ chữ của khung CMD khi chạy chương trình** [[08:26](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=506)]: Hướng dẫn chuột phải vào thanh tiêu đề của cửa sổ CMD, chọn `Properties` để điều chỉnh font chữ, cỡ chữ và vị trí hiển thị.
        
    - **Sử dụng `cin` để nhập dữ liệu từ bàn phím** [[10:06](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=606)]: Giới thiệu cách sử dụng `std::cin >> ten_bien;` để lấy dữ liệu do người dùng nhập vào và gán cho biến.
        
    - **Khai báo biến** [[10:46](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=646)]: Giới thiệu sơ lược về khai báo biến (ví dụ: `float toan;`, `float van;`, `float dtb;`).
        
    - **Tính toán cơ bản** [[14:00](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=840)]: Minh họa cách tính điểm trung bình từ hai biến đã nhập.
        
- **Thiết lập gõ tiếng Việt trong C++** [[15:21](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=921)]:
    
    - Hướng dẫn thêm các thư viện `include <iostream>` và `include <fcntl.h>` [[16:09](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=969)].
        
    - Thêm hai dòng lệnh `_setmode(_fileno(stdin), _O_U16TEXT);` và `_setmode(_fileno(stdout), _O_U16TEXT);` vào hàm `main` để hỗ trợ nhập xuất tiếng Việt [[17:10](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=1030)].
        
    - Hướng dẫn thay thế `cout` thành `wcout` và `cin` thành `wcin` bằng chức năng `Ctrl + H` (Replace) trong Visual Studio để hiển thị tiếng Việt có dấu [[19:35](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=1175)].
        
- **Ghi chú (Comment) trong C++** [[21:56](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=1316)]:
    
    - Ghi chú một dòng: sử dụng `//`.
        
    - Ghi chú nhiều dòng: sử dụng `/* ... */`.
        
    - Phím tắt ghi chú và bỏ ghi chú `Ctrl + K, C` và `Ctrl + K, U` [[22:11](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=1331)].
        
    - Phím tắt định dạng code `Ctrl + K, D` (định dạng toàn trang) và `Ctrl + K, F` (định dạng vùng bôi đen) [[23:21](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=1401)].
        

Video kết thúc với một bài tập thực hành nhỏ để người xem rèn luyện kiến thức đã học [[23:55](http://www.youtube.com/watch?v=qTC5HlYZFt4&t=1435)].

Bạn có thể xem lại video tại đây: https://youtu.be/qTC5HlYZFt4


# Các câu hỏi chi tiết


Tất nhiên rồi! Hai dòng code này là cặp bài trùng thường xuất hiện ở đầu mỗi chương trình C++ cơ bản. Hãy cùng phân tích chi tiết ý nghĩa và vai trò của từng dòng nhé.

---

## Giải thích `#include <iostream>` 🧰

Dòng này có thể được ví như việc bạn **lấy một hộp dụng cụ** cần thiết trước khi bắt đầu công việc.

- **`#include`**: Đây là một **chỉ thị tiền xử lý** (preprocessor directive). Nó ra lệnh cho trình biên dịch rằng: "Trước khi biên dịch mã nguồn chính, hãy tìm tệp được chỉ định và sao chép toàn bộ nội dung của nó dán vào đây."
    
- **`<iostream>`**: Đây là tên của một **tệp tiêu đề** (header file) chuẩn trong C++. Tên của nó là viết tắt của **I**nput **O**utput **Stream** (Luồng Nhập/Xuất). Tệp này chứa các mã nguồn đã được viết sẵn để thực hiện các chức năng nhập và xuất dữ liệu cơ bản, chẳng hạn như:
    
    - **`std::cout`**: Để in (xuất) dữ liệu ra màn hình.
        
    - **`std::cin`**: Để đọc (nhập) dữ liệu từ bàn phím.
        
    - **`std::endl`**: Để xuống dòng.
        

> **Tóm lại**: Lệnh `#include <iostream>` là cách bạn "nhập khẩu" thư viện chuẩn, cho phép chương trình của bạn có khả năng giao tiếp với người dùng qua màn hình và bàn phím. Nếu không có dòng này, các lệnh như `cout` hay `cin` sẽ hoàn toàn vô nghĩa.

---

## Giải thích `using namespace std;` 🏷️

Dòng này giống như việc bạn **dán nhãn cho các dụng cụ** để gọi tên chúng cho tiện.

- **Vấn đề cần giải quyết**: Như bạn thấy ở trên, các công cụ trong thư viện `iostream` đều có "họ" là `std` (viết tắt của **standard** - tiêu chuẩn). Để sử dụng chúng, bạn phải gọi đầy đủ cả "họ và tên", ví dụ: `std::cout`, `std::cin`. Việc này khá dài dòng và lặp lại.
    
- **`namespace` (Không gian tên)**: Đây là một cách để tổ chức code, tránh xung đột tên. Bạn có thể hình dung `std` như một cái hộp chứa tất cả các công cụ chuẩn của C++.
    
- **`using namespace std;`**: Lệnh này có nghĩa là: "Này trình biên dịch, từ giờ trở đi, tôi sẽ sử dụng các công cụ trong hộp `std`. Nếu thấy tôi gọi một cái tên mà không có "họ" (như `cout`), hãy tự động tìm trong hộp `std` nhé."
    

> **Tóm lại**: Lệnh `using namespace std;` là một khai báo giúp bạn viết code ngắn gọn hơn bằng cách cho phép bạn gọi trực tiếp `cout`, `cin` thay vì phải viết đầy đủ `std::cout`, `std::cin` mỗi lần sử dụng.

---

## Kết hợp cả hai: Một ví dụ trực quan

Hãy xem sự khác biệt khi có và không có `using namespace std;`.

#### **Cách 1: Không dùng `using namespace std;`**

Bạn phải gọi đầy đủ "họ và tên" `std::` cho mỗi lệnh.

C++

```
#include <iostream>

int main() {
    // Phải ghi rõ "họ" std:: cho mỗi lệnh
    std::cout << "Xin chào!";
    std::cout << std::endl;
    return 0;
}
```

#### **Cách 2: Có dùng `using namespace std;`**

Bạn có thể gọi tên trực tiếp, code trở nên gọn gàng hơn.

C++

```
#include <iostream>
using namespace std; // Khai báo sử dụng không gian tên std

int main() {
    // Bây giờ có thể gọi tên trực tiếp, không cần "họ" std:: nữa
    cout << "Xin chào!";
    cout << endl;
    return 0;
}
```

### Lời khuyên 💡

- Khi **học tập** hoặc viết các **chương trình nhỏ**, việc sử dụng `using namespace std;` rất tiện lợi và hoàn toàn ổn.
    
- Tuy nhiên, trong các **dự án lớn**, việc này không được khuyến khích vì nó có thể gây ra **xung đột tên** (ví dụ: nếu bạn tự tạo một hàm cũng tên là `cout`). Khi đó, người ta thường chỉ định rõ `std::cout` để đảm bảo code luôn rõ ràng và an toàn.


Chào bạn, bạn viết code khá tốt rồi đấy! Chỉ có **một lỗi sai duy nhất** khiến chương trình không chạy được và một vài điểm nhỏ để code gọn gàng hơn.

---

## Lỗi sai cần sửa 🚨

Lỗi duy nhất của bạn nằm ở dòng cuối cùng khi in điểm trung bình:

C++

```
// Dòng code lỗi
cout <<"Điểm trung bình của bạn là: "<< dtb << \n";
```

- **Lỗi**: Ký tự xuống dòng `\n` phải được đặt **bên trong cặp dấu ngoặc kép `""`**.
    
- **Sửa lại**:
    
    C++
    
    ```
    cout << "Điểm trung bình của bạn là: " << dtb << "\n";
    ```
    
    Hoặc bạn có thể dùng `endl` (viết tắt của end line - kết thúc dòng), đây là cách phổ biến và tốt hơn trong nhiều trường hợp.
    
    C++
    
    ```
    cout << "Điểm trung bình của bạn là: " << dtb << endl;
    ```
    

---

## Góp ý để code tốt hơn ✨

Đây không phải là lỗi sai, nhưng sẽ giúp code của bạn nhất quán và dễ đọc hơn.

- **Sử dụng `cout` và `std::cout` không nhất quán**:
    
    - Ở đầu chương trình, bạn đã khai báo `using namespace std;`. Điều này cho phép bạn viết `cout` thay vì phải viết đầy đủ `std::cout`.
        
    - Tuy nhiên, bạn vẫn dùng `std::cout` ở ba dòng đầu tiên. Mặc dù không sai, nhưng nó làm code trông không thống nhất. Bạn nên chọn một trong hai cách và dùng xuyên suốt.
        

**Lời khuyên**: Vì đã có `using namespace std;`, bạn hãy dùng `cout` cho tất cả các dòng để code ngắn gọn hơn.

---

## Code hoàn chỉnh sau khi sửa

Đây là đoạn code của bạn sau khi đã sửa lỗi và áp dụng góp ý:

C++

```
#include <iostream>
using namespace std;

int main()
{
    // 1. Xuất dữ liệu hiển thị ra màn hình (dùng cout thống nhất)
    cout << "HelloWord!\n";
    cout << "Tui la Bao ne!!!\n";
    cout << "Hello Anh Khánh\n";
    cout << "Hello My \n";

    // 2. Nhập dữ liệu từ bàn phím
    double toan, van, dtb;

    cout << "Mời nhập vào điểm toán: "; // Thêm khoảng trắng cho đẹp
    cin >> toan;

    cout << "Mời nhập vào điểm văn: "; // Thêm khoảng trắng cho đẹp
    cin >> van;

    // Tính dtb
    dtb = (toan + van) / 2;

    // In kết quả (đã sửa lỗi)
    cout << "Điểm trung bình của bạn là: " << dtb << endl;

    return 0;
}
```

Chúc bạn học tốt nhé! 👍


Tuyệt vời! Bạn đang tiến bộ rất nhanh và đã thử áp dụng kiến thức về gõ tiếng Việt. Đoạn code này chỉ có vài lỗi nhỏ liên quan đến việc thiết lập tiếng Việt thôi.

---

### Lỗi sai cần sửa 🚨

Lỗi chính của bạn nằm ở việc **chưa đồng bộ** code để hoạt động với chế độ Unicode (tiếng Việt có dấu).

Khi bạn dùng hai lệnh `_setmode`, bạn đã chuyển cửa sổ console sang chế độ đọc ký tự Unicode (wide characters), nhưng các lệnh `cout`, `cin` và chuỗi `"..."` của bạn vẫn đang hoạt động ở chế độ ký tự thường (narrow characters).

1. **Sai tên hằng số**: Bạn đã gõ `_0_U16TEXT` (với số 0), trong khi tên đúng phải là `_O_U16TEXT` (với chữ O).
    
2. **Sai lệnh nhập/xuất**: `cout` và `cin` dùng cho ký tự thường. Khi đã chuyển sang Unicode, bạn phải dùng **`wcout`** và **`wcin`** (w là viết tắt của wide).
    
3. **Sai kiểu chuỗi**: Chuỗi `"..."` là chuỗi ký tự thường. Để tạo chuỗi Unicode, bạn cần thêm tiền tố **`L`** ở phía trước, ví dụ: **`L"Chào bạn"`**.
    

---

### Code hoàn chỉnh sau khi sửa

Đây là phiên bản đã sửa lại tất cả các lỗi trên. Bạn hãy chú ý những thay đổi nhé.

C++

```
#include <iostream>
#include <io.h>      // Thư viện cần thiết cho _setmode
#include <fcntl.h>   // Thư viện cần thiết cho các hằng số _O_...
using namespace std;

int main()
{
    // 2: Gõ tiếng việt có dấu
    // Sửa lại đúng tên hằng số (chữ O thay vì số 0)
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);

    // 1. Xuất dữ liệu hiển thị ra màn hình
    // Dùng wcout và chuỗi L"..."
    wcout << L"HelloWord!\n";
    wcout << L"Tui là Bảo nè!!!\n";
    wcout << L"Hello Anh Khánh\n";
    wcout << L"Hello My \n";

    // 2. Nhập dữ liệu từ bàn phím
    double toan, van, dtb;
    wcout << L"Mời nhập vào điểm toán: "; // Dùng wcout và chuỗi L"..."
    wcin >> toan;                        // Dùng wcin

    wcout << L"Mời nhập vào điểm văn: ";  // Dùng wcout và chuỗi L"..."
    wcin >> van;                         // Dùng wcin

    // Tính dtb
    dtb = (toan + van) / 2;
    wcout << L"Điểm trung bình của bạn là: " << dtb << L"\n"; // Dùng wcout và chuỗi L"..."

    return 0;
}
```

Bạn làm rất tốt khi thử nghiệm các tính năng mới. Cứ tiếp tục phát huy nhé! 👍