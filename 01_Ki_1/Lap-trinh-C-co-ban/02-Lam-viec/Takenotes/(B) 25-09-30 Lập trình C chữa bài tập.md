---
tags:
  - university
  - code
  - Cpp
---
# Bài 2.1
**Bài 2.1:** Cho biết kết quả thực hiện chương trình sau.

```C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 100;
    i = i + i;
    i = 2 * i;
    cout << i + i << ' ' << i << '\n';
    return 0;
}
```

### **1. Phân tích từng dòng lệnh**

Hãy tưởng tượng máy tính sẽ đọc và thực hiện các lệnh này theo thứ tự từ trên xuống dưới.

- `#include <bits/stdc++.h>`
    
    - **Ý nghĩa:** Dòng này giống như việc bạn nói với máy tính: "Tôi cần sử dụng bộ công cụ đầy đủ của ngôn ngữ C++". Nó sẽ tải tất cả các thư viện chuẩn để bạn có thể dùng các lệnh như `cout` (để in ra màn hình) mà không cần phải khai báo thêm gì.
        
- `using namespace std;`
    
    - **Ý nghĩa:** Lệnh này giúp bạn viết code ngắn gọn hơn. Thay vì phải viết đầy đủ là `std::cout`, bạn chỉ cần viết `cout`. Nó giống như một quy ước ngầm để đỡ phải gõ nhiều.
        
- `int main() { ... }`
    
    - **Ý nghĩa:** Đây là khối lệnh chính, là "trái tim" của chương trình. Mọi chương trình C++ đều bắt đầu chạy từ đây. Tất cả các lệnh bên trong cặp dấu ngoặc nhọn `{}` sẽ được thực thi.
        
- `int i = 100;`
    
    - **Bước 1:** Khai báo một biến (một "hộp chứa" dữ liệu) có tên là `i`.
        
    - `int` cho máy tính biết rằng "hộp" này chỉ chứa số nguyên.
        
    - `= 100` nghĩa là chúng ta đặt giá trị ban đầu cho `i` là **100**.
        
    - _Lúc này: `i` đang có giá trị là 100._
        
- `i = i + i;`
    
    - **Bước 2:** Dòng này cập nhật lại giá trị của `i`.
        
    - Máy tính sẽ lấy giá trị hiện tại của `i` (là 100) cộng với chính nó: `100 + 100 = 200`.
        
    - Sau đó, kết quả `200` này được gán ngược lại cho `i`.
        
    - _Lúc này: giá trị của `i` đã thay đổi thành 200._
        
- `i = 2 * i;`
    
    - **Bước 3:** Tiếp tục cập nhật giá trị của `i`.
        
    - Máy tính lấy giá trị hiện tại của `i` (bây giờ là 200) nhân với 2: `2 * 200 = 400`.
        
    - Kết quả `400` lại được gán cho `i`.
        
    - _Lúc này: giá trị cuối cùng của `i` là 400._
        
- `cout << i + i << ',' << i << '\n';`
    
    - **Bước 4:** Đây là lệnh in kết quả ra màn hình. Hãy đọc từ trái sang phải:
        
        1. `cout << i + i`: Máy tính thực hiện phép tính `i + i` trước. Vì `i` đang là `400`, nên `400 + 400 = 800`. Số **800** sẽ được in ra đầu tiên.
            
        2. `<< ','`: Tiếp theo, in ra một dấu phẩy `,` ngay sau số 800.
            
        3. `<< i`: Sau đó, in ra giá trị hiện tại của `i`, chính là **400**.
            
        4. `<< '\n'`: Cuối cùng, `\n` là một ký tự đặc biệt có nghĩa là "xuống dòng" (new line). Nó sẽ di chuyển con trỏ xuống dòng tiếp theo, sẵn sàng cho lần in sau (nếu có).
            
- `return 0;`
    
    - **Ý nghĩa:** Dòng này báo cho hệ điều hành biết rằng chương trình đã chạy xong và không có lỗi gì xảy ra.
        

---

### **2. Tóm tắt và Kết quả**

Để dễ hình dung, đây là quá trình thay đổi của biến `i`:

1. Ban đầu: `i = 100`
    
2. Sau dòng `i = i + i;`: `i = 200`
    
3. Sau dòng `i = 2 * i;`: `i = 400`
    
4. Lệnh in: In ra `(i + i)` và `i`, tức là `(400 + 400)` và `400`.
    

Vì vậy, kết quả cuối cùng bạn sẽ thấy trên màn hình là:

```
800,400
```


# Bài 2.2
**Bài 2.2:** Tìm lỗi trong chương trình sau và sửa lỗi để chương trình chạy và hiển thị dòng chữ: Xin chao.

```C++
#include <bits/stdc++.h>
using namespace std;
#define NUM 30;

int main()
{
    int j = 4.5;
    unsigned float i = 1.23;
    double j = 6.7;
    k = 10;
    cout << "Xin chao << '\n';
    return 5;
}
```
### Phân tích và sửa lỗi từng dòng

Chúng ta sẽ đi qua từng dòng code, tìm ra lỗi sai, giải thích tại sao nó sai và sửa lại cho đúng.

#### 1. Lỗi với `#define`

- **Dòng code lỗi:** `#define NUM 30;`
    
- **Lỗi là gì?:** Lệnh `#define` là một chỉ thị tiền xử lý, nó không phải là một câu lệnh C++ thông thường. Vì vậy, nó **không được kết thúc bằng dấu chấm phẩy (;)**. Nếu bạn để dấu `;`, trình biên dịch sẽ thay thế mọi chữ `NUM` trong code bằng `30;`, gây ra lỗi cú pháp ở những chỗ khác.
    
- **Cách sửa:** Bỏ dấu chấm phẩy đi.
    
    C++
    
    ```
    #define NUM 30
    ```
    
    _(Mặc dù trong bài này hằng số `NUM` không được sử dụng, nhưng việc khai báo đúng là rất quan trọng)._
    

#### 2. Lỗi gán số thực cho số nguyên

- **Dòng code lỗi:** `int j = 4.5;`
    
- **Lỗi là gì?:** Biến `j` được khai báo là kiểu `int` (số nguyên), tức là nó không thể chứa phần thập phân. Khi bạn gán `4.5` cho `j`, C++ sẽ tự động **cắt bỏ phần thập phân** và chỉ giữ lại phần nguyên. `j` sẽ có giá trị là `4`, không phải `4.5`. Đây không phải là lỗi làm dừng chương trình, nhưng là một lỗi logic vì kết quả không như mong đợi.
    
- **Cách sửa:** Nếu bạn muốn `j` lưu số thực, hãy dùng kiểu `float` hoặc `double`. Tuy nhiên, ngay dòng dưới lại có khai báo biến `j` khác nên chúng ta sẽ xử lý ở lỗi tiếp theo.
    

#### 3. Lỗi khai báo kiểu dữ liệu không hợp lệ

- **Dòng code lỗi:** `unsigned float i = 1.23;`
    
- **Lỗi là gì?:** Từ khóa `unsigned` (không dấu) chỉ áp dụng cho các kiểu số nguyên (`int`, `char`, `long`). Nó có nghĩa là biến đó chỉ lưu các giá trị dương. Kiểu `float` (số thực) đã bao gồm cả số âm và dương, nên không thể dùng `unsigned` với nó.
    
- **Cách sửa:** Bỏ từ khóa `unsigned` đi.
    
    C++
    
    ```
    float i = 1.23;
    ```
    

#### 4. Lỗi khai báo lại biến

- **Dòng code lỗi:** `double j = 6.7;`
    
- **Lỗi là gì?:** Biến `j` đã được khai báo ở trên (`int j = 4.5;`). Trong cùng một phạm vi (ở đây là hàm `main`), bạn **không thể khai báo hai biến có cùng tên**.
    
- **Cách sửa:** Nếu bạn muốn một biến số thực, hãy đổi tên biến này hoặc xóa khai báo `int j` ở trên. Hợp lý nhất là chúng ta chỉ cần một biến và nên chọn kiểu dữ liệu phù hợp ngay từ đầu.
    
    C++
    
    ```
    // Bỏ dòng "int j = 4.5;" và chỉ giữ lại dòng này nếu cần số thực
    double j = 6.7;
    ```
    

#### 5. Lỗi sử dụng biến chưa được khai báo

- **Dòng code lỗi:** `k = 10;`
    
- **Lỗi là gì?:** Bạn đang gán giá trị cho một biến tên là `k`, nhưng bạn chưa bao giờ "giới thiệu" (khai báo) biến `k` này với chương trình. Máy tính không biết `k` là gì và sẽ lưu giá trị `10` vào đâu.
    
- **Cách sửa:** Bạn phải khai báo kiểu dữ liệu cho `k` trước khi sử dụng.
    
    C++
    
    ```
    int k = 10;
    ```
    

#### 6. Lỗi cú pháp lệnh `cout`

- **Dòng code lỗi:** `cout << "Xin chao << '\n';`
    
- **Lỗi là gì?:** Có hai lỗi nhỏ ở đây:
    
    1. Thiếu dấu ngoặc kép `"` để kết thúc chuỗi "Xin chao".
        
    2. Thiếu toán tử `<<` để ngăn cách giữa chuỗi "Xin chao" và ký tự xuống dòng `'\n'`.
        
- **Cách sửa:** Thêm các ký tự còn thiếu vào đúng vị trí.
    
    C++
    
    ```
    cout << "Xin chao" << '\n';
    ```
    

#### 7. Lỗi giá trị trả về của hàm `main`

- **Dòng code lỗi:** `return 5;`
    
- **Lỗi là gì?:** Về mặt kỹ thuật, chương trình vẫn chạy. Tuy nhiên, theo quy ước chuẩn, hàm `main` trả về `0` để báo hiệu rằng chương trình đã kết thúc thành công. Mọi giá trị khác `0` thường được dùng để chỉ một mã lỗi nào đó.
    
- **Cách sửa:** Nên trả về `0` để tuân thủ quy ước chung.
    
    C++
    
    ```
    return 0;
    ```
    

---

### ## Chương trình hoàn chỉnh sau khi sửa lỗi

Sau khi áp dụng tất cả các chỉnh sửa trên, chúng ta có một chương trình chạy đúng và sạch sẽ. (Lưu ý: các biến `i`, `j`, `k` không được sử dụng nên có thể xóa đi để code gọn hơn).

C++

```
#include <bits/stdc++.h>
using namespace std;

// Hằng số này không được dùng trong chương trình, nhưng khai báo đúng là như vậy
#define NUM 30

int main()
{
    // Các biến này không cần thiết cho việc in ra "Xin chao"
    // nên có thể xóa đi. Nếu giữ lại thì chúng phải được khai báo đúng:
    float i = 1.23;
    double j = 6.7;
    int k = 10;

    // Dòng lệnh in ra màn hình đã được sửa
    cout << "Xin chao" << '\n';

    // Trả về 0 để báo hiệu chương trình kết thúc thành công
    return 0;
}
```

Chúc bạn học tốt!

# Bài 2.3
**Bài 2.3:** Cho biết kết quả thực hiện chương trình sau.

```C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool b = 18;
    int i = b + 2;
    double d = i + 1.99;
    i = d * 2;
    cout << i / 010 << '\n';
    return 0;
}
```

### **Giải thích chi tiết từng dòng lệnh**

Chúng ta sẽ theo dõi giá trị của các biến `b`, `i`, và `d` qua mỗi bước.

- `bool b = 18;`
    
    - Đầu tiên, ta khai báo một biến `b` có kiểu dữ liệu là `bool`. Kiểu `bool` (boolean) chỉ có thể lưu hai giá trị: `true` (đúng) hoặc `false` (sai).
        
    - **Điểm quan trọng 💡:** Khi bạn gán một số nguyên khác 0 (như số 18) cho một biến `bool`, C++ sẽ tự động chuyển nó thành `true`. Nếu bạn gán số 0, nó sẽ thành `false`.
        
    - Trong các phép tính toán, giá trị `true` được xem như là số **1**, còn `false` được xem là số **0**.
        
    - _Kết quả sau dòng này:_ `b` mang giá trị `true` (tương đương số 1).
        
- `int i = b + 2;`
    
    - Khai báo một biến số nguyên `i`.
        
    - Giá trị của nó được tính bằng `b + 2`. Vì `b` được coi là `1`, phép tính trở thành `1 + 2 = 3`.
        
    - _Kết quả sau dòng này:_ `b` là `true` (1), `i` là **3**.
        
- `double d = i + 1.99;`
    
    - Khai báo một biến `d` có kiểu `double`, tức là nó có thể lưu số thực (số có phần thập phân).
        
    - Phép tính là `i + 1.99`. Với `i` đang là `3`, ta có `3 + 1.99 = 4.99`.
        
    - _Kết quả sau dòng này:_ `i` là `3`, `d` là **4.99**.
        
- `i = d * 2;`
    
    - Dòng này cập nhật lại giá trị cho biến `i`.
        
    - Phép tính là `d * 2`, tức là `4.99 * 2 = 9.98`.
        
    - **Điểm quan trọng thứ hai ⚠️:** `i` là một biến số nguyên (`int`). Khi bạn gán một số thực (`9.98`) cho một biến số nguyên, phần thập phân sẽ bị **cắt bỏ hoàn toàn** (lưu ý là cắt bỏ chứ không phải làm tròn).
        
    - Vì vậy, `9.98` sẽ trở thành `9`.
        
    - _Kết quả sau dòng này:_ `d` vẫn là `4.99`, `i` bây giờ là **9**.
        
- `cout << i / 010 << '\n';`
    
    - Đây là dòng lệnh in kết quả và cũng là "bẫy" cuối cùng.
        
    - Giá trị của `i` hiện tại là `9`.
        
    - **Điểm quan trọng nhất 🚨:** Trong C++, một số nguyên bắt đầu bằng chữ số `0` (và không phải là số 0) được coi là một số trong **hệ bát phân (octal - cơ số 8)**.
        
    - Do đó, `010` không phải là số "mười", mà nó là `10` trong hệ 8. Để chuyển sang hệ 10 quen thuộc, ta tính: 1×81+0×80=8+0=8.
        
    - Vậy phép tính thực sự ở đây là `i / 8`, tức là `9 / 8`.
        
    - Vì cả `9` và `8` đều là số nguyên, đây là **phép chia số nguyên**. Phép chia này cũng sẽ **cắt bỏ phần thập phân**.
        
    - `9 chia cho 8` được `1.125`. Sau khi cắt bỏ phần thập phân, kết quả cuối cùng là **1**.
        
    - Lệnh `cout` sẽ in số `1` này ra màn hình, và `\n` để xuống dòng mới.
        

---

### **Bảng tóm tắt giá trị các biến**

|Dòng lệnh|Giá trị của b|Giá trị của i|Giá trị của d|Ghi chú|
|---|---|---|---|---|
|`bool b = 18;`|`true` (1)|(chưa có)|(chưa có)|Số khác 0 gán cho `bool` thành `true`.|
|`int i = b + 2;`|`true` (1)|`3`|(chưa có)|`1 + 2 = 3`|
|`double d = i + 1.99;`|`true` (1)|`3`|`4.99`|`3 + 1.99 = 4.99`|
|`i = d * 2;`|`true` (1)|`9`|`4.99`|`4.99 * 2 = 9.98`. Bị cắt phần thập phân.|
|`cout << i / 010;`|`true` (1)|`9`|`4.99`|In ra `9 / 8` (chia số nguyên) = **1**.|

### **Kết luận**

Chương trình sẽ in ra màn hình kết quả là **1**.

Chào bạn, chắc chắn rồi! Rất vui được giải thích lại bài này theo góc nhìn của ngôn ngữ lập trình C cho người mới bắt đầu.

Đoạn mã bạn gửi là code C++, nhưng các nguyên tắc tính toán cốt lõi của nó cũng áp dụng tương tự trong C. Để dễ hiểu nhất, chúng ta hãy cùng viết lại chương trình này bằng ngôn ngữ C thuần túy và phân tích từng bước một nhé.

Kết quả cuối cùng của chương trình vẫn là **1**.

---

### ## Chương trình tương đương trong ngôn ngữ C

Đây là cách chương trình trên sẽ được viết trong C:

C

```
#include <stdio.h>    // Thư viện cho việc nhập/xuất, chứa lệnh printf
#include <stdbool.h>  // Thư viện để sử dụng kiểu dữ liệu bool trong C

int main() {
    bool b = 18;
    int i = b + 2;
    double d = i + 1.99;
    i = d * 2;
    
    // In kết quả ra màn hình bằng lệnh printf của C
    printf("%d\n", i / 010); 
    
    return 0;
}
```

---

### ## Giải thích chi tiết từng bước (Step-by-Step)

Bây giờ, chúng ta sẽ theo dõi giá trị của các biến qua từng dòng lệnh của chương trình C ở trên.

#### **Bước 1: `bool b = 18;`**

- Chúng ta khai báo một biến `b` có kiểu `bool` (kiểu logic đúng/sai). Để dùng được kiểu `bool` trong C, bạn cần thêm thư viện `<stdbool.h>`.
    
- **Nguyên tắc cốt lõi 💡:** Khi gán một số nguyên **khác 0** (ví dụ: 1, 18, -5) cho biến `bool`, nó sẽ nhận giá trị `true` (đúng). Chỉ khi gán số **0**, nó mới nhận giá trị `false` (sai).
    
- Trong các phép tính, `true` được coi là số **1**, còn `false` là số **0**.
    
- _Kết quả:_ `b` có giá trị `true`, tương đương với số `1` khi tính toán.
    

#### **Bước 2: `int i = b + 2;`**

- Khai báo một biến số nguyên `i`.
    
- Giá trị của `i` được tính bằng `b + 2`. Vì máy tính xem `b` là `1`, phép tính sẽ là `1 + 2 = 3`.
    
- _Kết quả:_ Biến `i` bây giờ có giá trị là **3**.
    

#### **Bước 3: `double d = i + 1.99;`**

- Khai báo một biến `d` kiểu `double` (số thực, có thể chứa phần thập phân).
    
- Giá trị của `d` bằng `i + 1.99`. Vì `i` là `3`, phép tính là `3 + 1.99 = 4.99`.
    
- _Kết quả:_ Biến `d` bây giờ có giá trị là **4.99**.
    

#### **Bước 4: `i = d * 2;`**

- Cập nhật lại giá trị cho biến `i`.
    
- Phép tính là `d * 2`, tức là `4.99 * 2 = 9.98`.
    
- **Nguyên tắc cốt lõi ⚠️:** Biến `i` là kiểu số nguyên (`int`). Khi bạn gán một số thực (như `9.98`) cho một biến số nguyên, máy tính sẽ **cắt bỏ hoàn toàn phần thập phân** đi, chứ không làm tròn.
    
- Vậy nên, `9.98` sẽ trở thành `9`.
    
- _Kết quả:_ Biến `i` được cập nhật thành **9**.
    

Bạn nói đúng rồi, cảm ơn bạn đã chỉ rõ. Hoàn toàn chính xác, dòng lệnh gốc trong đề bài là của C++.

Trong câu trả lời trước, vì bạn hỏi cụ thể về cách giải thích cho **người học ngôn ngữ C**, nên mình đã chủ động viết lại dòng lệnh đó sang cú pháp của C là `printf` để bạn dễ hình dung và áp dụng.

Bây giờ, chúng ta sẽ phân tích chính xác dòng lệnh gốc của C++ mà bạn đã đưa ra:

---

### ## Phân tích lại Bước 5 với `cout` (C++)

- **Dòng lệnh gốc:** `cout << i / 010 << '\n';`
    
- **Đây là cú pháp của C++:**
    
    - `cout` là đối tượng dùng để xuất (in) dữ liệu ra màn hình.
        
    - `<<` là toán tử "chèn", nó sẽ "đẩy" dữ liệu ở bên phải vào luồng `cout` để hiển thị.
        
- **Phép tính vẫn không thay đổi:**
    
    - Phần quan trọng nhất là phép tính `i / 010`. Như đã giải thích, C++ (giống hệt C) hiểu `010` là **số 8** (do quy tắc về hệ bát phân).
        
    - Giá trị của `i` lúc này là **9**.
        
    - Phép tính là phép chia số nguyên `9 / 8`.
        
    - Kết quả của `9 / 8` là **1** (phần thập phân bị cắt bỏ).
        
- **Hoạt động của cả dòng lệnh:**
    
    1. Máy tính tính giá trị của `i / 010` và được kết quả là `1`.
        
    2. `cout << 1`: Lệnh `cout` in số **1** ra màn hình.
        
    3. `<< '\n'`: Tiếp theo, `cout` in ký tự xuống dòng `\n`.
        


---

### ## Quy Tắc "Số 0 Đứng Đầu"

Trong các ngôn ngữ lập trình như C và C++, trình biên dịch có một quy tắc đặc biệt để nhận biết hệ đếm của một số nguyên:

> **Bất kỳ số nguyên nào bắt đầu bằng chữ số `0` sẽ được hiểu là một số trong HỆ BÁT PHÂN (hệ cơ số 8).**

Đây là mấu chốt của vấn đề. Số `010` không phải là số "mười" mà chúng ta hay dùng.

---

### ## Hệ Đếm Hoạt Động Như Thế Nào?

Để hiểu hệ 8, hãy so sánh nó với hệ 10 quen thuộc.

#### **1. Hệ Thập Phân (Hệ 10 - Decimal)**

Đây là hệ đếm chúng ta dùng hàng ngày.

- Nó có **10 ký tự**: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9.
    
- Mỗi vị trí của một con số đại diện cho một lũy thừa của 10.
    
- Ví dụ, số **123** thực chất là:
    
    - (1×102) + (2×101) + (3×100)
        
    - = (1×100) + (2×10) + (3×1)
        
    - = 100 + 20 + 3 = **123**
        

#### **2. Hệ Bát Phân (Hệ 8 - Octal)**

Hệ này được máy tính sử dụng.

- Nó chỉ có **8 ký tự**: 0, 1, 2, 3, 4, 5, 6, 7 (không có số 8 và 9).
    
- Mỗi vị trí của một con số đại diện cho một lũy thừa của 8.
    

---

### ## Tính Giá Trị Của `010`

Bây giờ, hãy áp dụng quy tắc hệ bát phân cho số `010`:

- Chữ số ngoài cùng bên phải là `0`, nó nằm ở vị trí 80 (hàng đơn vị).
    
    - Giá trị là: 0×80=0×1=0
        
- Chữ số tiếp theo bên trái là `1`, nó nằm ở vị trí 81 (hàng "tám").
    
    - Giá trị là: 1×81=1×8=8
        

**Tổng cộng lại:** 8+0=8.

**Kết luận:** Khi trình biên dịch C/C++ nhìn thấy `010`, nó không đọc là "mười" mà nó dịch ra giá trị là **8** trong hệ thập phân.

Vì vậy, phép tính `i / 010` trong bài toán của bạn thực chất chính là phép tính `9 / 8`.

# Bài 2.4
**Bài 2.4:** Cho biết kết quả thực hiện chương trình sau.

```C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    float i = 3.9, j = 1.2;
    k = i + (int)j;
    cout << k - (int)((int)i + j) << '\n';
    return 0;
}
```

Kết quả thực hiện chương trình này là **0**.

Đây là giải thích chi tiết từng bước (step-by-step) để bạn hiểu rõ cách chương trình tính toán ra kết quả này. Bài này tập trung vào khái niệm **ép kiểu** (type casting) và cách máy tính xử lý số nguyên và số thực.

---

### ## Phân tích chương trình

Chúng ta sẽ theo dõi giá trị của các biến `k`, `i`, `j` qua từng dòng lệnh.

**Khởi tạo biến:**

- `int k;`: Khai báo một biến số nguyên `k` nhưng chưa gán giá trị.
    
- `float i = 3.9, j = 1.2;`: Khai báo hai biến số thực `i` và `j`.
    
    - `i` có giá trị là `3.9`
        
    - `j` có giá trị là `1.2`
        

---

### ## Bước 1: Tính giá trị cho `k`

- **Dòng lệnh:** `k = i + (int)j;`
    
- **Phân tích:**
    
    1. **Ép kiểu `(int)j`:** Dấu `(int)` đứng trước biến `j` là một lệnh "ép kiểu". Nó buộc giá trị của `j` (là `1.2`) phải chuyển thành một số nguyên. Khi chuyển từ số thực sang số nguyên, phần thập phân sẽ bị **cắt bỏ hoàn toàn**.
        
        - `(int)1.2` trở thành `1`.
            
    2. **Thực hiện phép cộng:** Bây giờ phép tính trở thành `i + 1`.
        
        - `3.9 + 1 = 4.9`.
            
    3. **Gán giá trị cho `k`:** Kết quả `4.9` được gán cho biến `k`. Vì `k` là một biến `int` (số nguyên), nó không thể chứa phần thập phân. Một lần nữa, phần thập phân bị **cắt bỏ**.
        
        - `k` nhận giá trị là `4`.
            
- **Kết quả sau Bước 1:** `i = 3.9`, `j = 1.2`, `k = 4`.
    

---

### ## Bước 2: Phân tích dòng lệnh `cout`

Đây là dòng lệnh phức tạp nhất, chúng ta sẽ tính toán giá trị của nó từ trong ra ngoài.

- **Dòng lệnh:** `cout << k - (int)((int)i + j) << '\n';`
    
- **Phân tích biểu thức `k - (int)((int)i + j)`:**
    
    1. **Tính ngoặc trong cùng `((int)i + j)`:**
        
        - Đầu tiên, thực hiện ép kiểu `(int)i`. Giá trị `3.9` của `i` bị cắt phần thập phân và trở thành `3`.
            
        - Tiếp theo, thực hiện phép cộng `3 + j`. Tức là `3 + 1.2 = 4.2`.
            
        - Vậy, kết quả của cả cụm `((int)i + j)` là `4.2`.
            
    2. **Thực hiện ép kiểu bên ngoài `(int)(...)`:**
        
        - Bây giờ biểu thức trở thành `k - (int)(4.2)`.
            
        - Lệnh ép kiểu `(int)` sẽ cắt bỏ phần thập phân của `4.2`, làm nó trở thành `4`.
            
    3. **Thực hiện phép trừ cuối cùng `k - ...`:**
        
        - Biểu thức bây giờ là `k - 4`.
            
        - Chúng ta đã tính được ở Bước 1, `k` có giá trị là `4`.
            
        - Vậy phép tính cuối cùng là `4 - 4 = 0`.
            
- **Kết quả:** Toàn bộ biểu thức `k - (int)((int)i + j)` có giá trị là **0**. Lệnh `cout` sẽ in số 0 này ra màn hình.
    

### ## Tóm tắt và kết quả

|Biến / Biểu thức|Giá trị / Kết quả|Ghi chú|
|---|---|---|
|`i`, `j`|`3.9`, `1.2`|Giá trị ban đầu.|
|`(int)j`|`1`|Ép kiểu `1.2` thành số nguyên.|
|`i + (int)j`|`4.9`|`3.9 + 1`|
|`k`|`4`|Gán `4.9` cho biến `int`, bị cắt phần thập phân.|
|`(int)i`|`3`|Ép kiểu `3.9` thành số nguyên.|
|`(int)i + j`|`4.2`|`3 + 1.2`|
|`(int)((int)i + j)`|`4`|Ép kiểu `4.2` thành số nguyên.|
|`k - (int)((int)i + j)`|`0`|`4 - 4`|

Vì vậy, chương trình sẽ in ra màn hình kết quả cuối cùng là **0**.

# Bài 2.5

**Bài 2.5:** Chương trình sau được viết với mục tiêu đọc ba số nguyên và đưa ra giá trị trung bình của chúng, lấy 3 chữ số thập phân. Chương trình có in ra đúng kết quả không, tại sao? Hãy sửa lại chương trình để có thể nhận được kết quả đúng.

```C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k;
    cout << "Nhap 3 so nguyen: ";
    cin >> i >> j >> k;
    cout << setprecision(3) << fixed;
    cout << "Trung binh: " << i + j + k / 3 << '\n';
    return 0;
}
```

## Giải
Không, chương trình này **in ra kết quả không đúng**.

Lý do là vì có hai lỗi sai cơ bản và rất phổ biến đối với người mới học C++ trong dòng lệnh tính toán.

---

### ## Tại sao chương trình chạy sai?

Hãy cùng phân tích dòng lệnh cout cuối cùng:

cout << "Trung binh: " << i + j + k / 3 << '\n';

#### **1. Sai thứ tự ưu tiên của phép toán ❌**

Trong C++, cũng như trong toán học, phép nhân (`*`) và phép chia (`/`) có **độ ưu tiên cao hơn** phép cộng (`+`) và phép trừ (`-`).

Điều này có nghĩa là máy tính sẽ thực hiện phép chia `k / 3` **TRƯỚC**, sau đó mới lấy kết quả cộng với `i` và `j`.

- **Máy tính tính:** `i + j + (k / 3)`
    
- **Công thức đúng phải là:** `(i + j + k) / 3`
    

**Ví dụ:** Nếu bạn nhập `i=5`, `j=5`, `k=10`:

- Máy tính sẽ tính: `5 + 5 + (10 / 3)`
    
- Vì đây là phép chia số nguyên (xem lỗi 2), `10 / 3` sẽ bằng `3`.
    
- Kết quả cuối cùng là: `5 + 5 + 3 = 13`. (Sai!)
    
- Kết quả đúng phải là: `(5 + 5 + 10) / 3 = 20 / 3 = 6.667`.
    

#### **2. Vấn đề "Phép chia số nguyên" (Integer Division) ❌**

Cả ba biến `i`, `j`, `k` đều có kiểu `int` (số nguyên), và số `3` cũng được hiểu là một số nguyên.

Khi bạn thực hiện phép chia giữa hai số nguyên, kết quả trả về cũng sẽ là một **số nguyên**. Toàn bộ phần thập phân sẽ bị **cắt bỏ hoàn toàn** (không làm tròn).

- Ví dụ: `10 / 3` sẽ cho kết quả là `3` (thay vì `3.333...`). `7 / 2` sẽ cho kết quả là `3` (thay vì `3.5`).
    

Ngay cả khi bạn đã sửa lỗi thứ tự ưu tiên bằng cách viết `(i + j + k) / 3`, bạn vẫn sẽ gặp lỗi này. Ví dụ, với `i=2, j=2, k=2`, phép tính `(2+2+2)/3 = 6/3` sẽ ra `2`, nhưng với `i=2, j=2, k=3`, phép tính `(2+2+3)/3 = 7/3` sẽ ra `2` thay vì `2.333`.

---

### ## Sửa lại chương trình cho đúng

Để khắc phục cả hai vấn đề trên, chúng ta cần:

1. **Dùng dấu ngoặc `()`** để đảm bảo phép cộng được thực hiện trước.
    
2. **Chuyển đổi (ép kiểu)** phép tính thành phép chia số thực để giữ lại phần thập phân.
    

Có hai cách phổ biến để làm điều này:

#### **Cách 1: Ép kiểu tổng thành `double`**

Đây là cách làm rõ ràng và an toàn nhất. Ta "báo" cho máy tính hãy xem tổng `(i + j + k)` như một số thực `double` trước khi thực hiện phép chia.

C++

```
(double)(i + j + k) / 3
```

#### **Cách 2: Chia cho một số thực**

Nếu một trong hai vế của phép chia là số thực, kết quả sẽ là số thực. Ta có thể chia cho `3.0` (một số thực) thay vì `3` (một số nguyên).

C++

```
(i + j + k) / 3.0
```

---

### ## Chương trình hoàn chỉnh đã được sửa

C++

```
#include <bits/stdc++.h> // Thư viện này chứa cả iostream và iomanip
using namespace std;

int main()
{
    int i, j, k;
    
    cout << "Nhap 3 so nguyen: ";
    cin >> i >> j >> k;
    
    // Hai dòng này để định dạng output có 3 chữ số thập phân, chúng đã đúng
    cout << setprecision(3) << fixed;
    
    // Dòng lệnh tính toán đã được sửa
    cout << "Trung binh: " << (double)(i + j + k) / 3 << '\n';
    
    return 0;
}
```

Bây giờ nếu bạn nhập `5 5 10`, chương trình sẽ tính `(double)(20) / 3` và cho ra kết quả chính xác là `6.667`.


# Bài 2.7

**Bài 2.7:** Cho biết kết quả thực hiện chương trình sau.

```C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = -2, b = 2, c;
    c = ((a+b) == !b);
    a = -((a < c) || (--b == c));
    cout << (!(a != -c) && (b+a >= c) && ((a+c)%2 || (-a+c-b)));
    cout << '\n';
    return 0;
}
```
## Giải
Kết quả thực hiện của chương trình này là **0**.

Chương trình này có vẻ phức tạp vì nó chứa nhiều phép toán logic nối liền nhau. Cách tốt nhất để hiểu là đi qua từng bước, theo dõi giá trị của các biến `a`, `b`, `c`. Chúng ta hãy làm điều đó nhé!

---

### ## Phân tích chi tiết từng bước

**Trạng thái ban đầu:**

- `int a = -2, b = 2, c;`
    
    - `a` có giá trị là **-2**.
        
    - `b` có giá trị là **2**.
        
    - `c` được khai báo nhưng chưa có giá trị.
        

---

### **Bước 1: Tính giá trị cho `c`**

- **Dòng lệnh:** `c = ((a+b) == !b);`
    
- **Phân tích:** Chúng ta tính giá trị bên trong ngoặc đơn trước.
    
    1. `a + b` là `-2 + 2 = 0`.
        
    2. `!b`: Toán tử `!` là **PHỦ ĐỊNH logic** (Logical NOT). Trong C++, bất kỳ số nào khác 0 đều được coi là `true` (đúng). `b` đang là `2`, vậy `b` là `true`. Phủ định của `true` là `false` (sai).
        
    3. Trong các phép tính, `true` tương đương số `1`, và `false` tương đương số `0`. Vậy `!b` sẽ có giá trị là `0`.
        
    4. Bây giờ phép so sánh là `(0 == 0)`. Điều này là `true`.
        
    5. `c = true;`: Biến `c` được gán giá trị `true`. Khi một giá trị logic được gán cho biến `int`, `true` sẽ được lưu thành số `1`.
        
- **Kết quả sau Bước 1:** `a = -2`, `b = 2`, `c = 1`.
    

---

### **Bước 2: Cập nhật giá trị cho `a`**

- **Dòng lệnh:** `a = -((a < c) || (--b == c));`
    
- **Phân tích:** Đây là một bước rất quan trọng, nó có một khái niệm gọi là **"đoản mạch" (short-circuit evaluation)**.
    
    1. Chúng ta tính biểu thức bên trong ngoặc `(...)` trước: `(a < c) || (--b == c)`.
        
    2. `||` là toán tử **HOẶC logic** (Logical OR). Nó sẽ kiểm tra vế bên trái trước.
        
    3. **Vế trái:** `a < c` là `-2 < 1`. Điều này là `true`.
        
    4. **Nguyên tắc đoản mạch 💡:** Đối với toán tử `||` (HOẶC), nếu vế bên trái đã là `true`, thì kết quả của cả biểu thức chắc chắn là `true` mà không cần quan tâm vế bên phải là gì. Do đó, chương trình sẽ **KHÔNG THỰC HIỆN** vế bên phải `(--b == c)`.
        
    5. Điều này có nghĩa là `b` **không bị trừ đi 1**. Giá trị của `b` vẫn là `2`.
        
    6. Kết quả của cả biểu thức `(...)` là `true`.
        
    7. Dòng lệnh bây giờ trở thành `a = -(true);`.
        
    8. `true` được chuyển thành số `1`. Vậy phép tính là `a = -(1)`, tức `a = -1`.
        
- **Kết quả sau Bước 2:** `a = -1`, `b = 2`, `c = 1`.
    

---

### **Bước 3: Phân tích dòng lệnh `cout`**

- **Dòng lệnh:** `cout << (!(a != -c) && (b+a >= c) &&& ((a+c)%2 || (-a+c-b)));`
    
- **Lưu ý:** Cú pháp `&&&` trong đề bài có thể là một lỗi gõ, cú pháp đúng của toán tử VÀ logic là `&&`. Chúng ta sẽ phân tích theo `&&`.
    
- Đây là một chuỗi các phép **VÀ logic** (`&&`). Nó cũng áp dụng quy tắc "đoản mạch": nếu một vế nào đó là `false`, toàn bộ kết quả sẽ là `false` và chương trình không cần kiểm tra các vế sau nữa. Hãy kiểm tra từng phần từ trái sang phải.
    
- **Giá trị hiện tại:** `a = -1`, `b = 2`, `c = 1`.
    
    1. **Phần 1:** `!(a != -c)`
        
        - `-c` là `-1`.
            
        - `a != -c` là `-1 != -1`. Điều này là `false`.
            
        - `!(false)` là `true`.
            
        - _Kết quả Phần 1 là `true`. Chương trình sẽ kiểm tra tiếp Phần 2._
            
    2. **Phần 2:** `(b+a >= c)`
        
        - `b+a` là `2 + (-1) = 1`.
            
        - `1 >= c` là `1 >= 1`. Điều này là `true`.
            
        - _Kết quả Phần 2 là `true`. Chương trình sẽ kiểm tra tiếp Phần 3._
            
    3. **Phần 3:** `((a+c)%2 || (-a+c-b))`
        
        - Đây là một biểu thức HOẶC logic `||`.
            
        - **Vế trái của HOẶC:** `(a+c)%2` là `(-1 + 1)%2` tức `0%2`. Kết quả là `0`. Trong logic, `0` là `false`.
            
        - **Vế phải của HOẶC:** Vì vế trái là `false`, chương trình phải kiểm tra tiếp vế phải: `(-a+c-b)` là `(-(-1) + 1 - 2)` tức `1 + 1 - 2 = 0`. Trong logic, `0` cũng là `false`.
            
        - Cả biểu thức HOẶC là `false || false`. Kết quả là `false`.
            
        - _Kết quả Phần 3 là `false`._
            
- **Tổng hợp lại:** Toàn bộ biểu thức trong `cout` là `true && true && false`.
    
    - `true && true` là `true`.
        
    - `true && false` là `false`.
        
- **Kết quả in ra:** Khi lệnh `cout` in một giá trị logic `false`, nó sẽ hiển thị ra màn hình là số **0**.
    

---

### ## Bảng tóm tắt giá trị

|Dòng lệnh|Giá trị `a`|Giá trị `b`|Giá trị `c`|Ghi chú|
|---|---|---|---|---|
|Ban đầu|-2|2|?||
|`c = ((a+b) == !b);`|-2|2|1|`(0 == 0)` là `true`, `c` lưu thành `1`.|
|`a = -((a < c)||...);`|-1|2|
|`cout << ...`|-1|2|1|Phép tính cuối cùng cho ra `false`, in ra là `0`.|

### **Kết quả cuối cùng:**

Chương trình sẽ in ra màn hình:

```
0
```




# Bài tập bổ sung


### **Bài 2.8: Tính chu vi và diện tích hình vuông**

Đoạn code này nhận đầu vào là độ dài cạnh của một hình vuông. Sau đó, nó tính toán và in ra chu vi và diện tích của hình vuông đó, làm tròn đến 2 chữ số thập phân.

```C++
// Bai2.8
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;
    cout << setprecision(2) << fixed;
    // In ra chu vi (4 * a) và diện tích (a * a)
    cout << 4 * a << " " << a * a;
    return 0;
}
```

---

### **Bài 2.9: Tính chu vi và diện tích hình chữ nhật**

Đoạn code này nhận đầu vào là chiều dài và chiều rộng của một hình chữ nhật. Sau đó, nó tính toán và in ra chu vi và diện tích của hình chữ nhật đó, làm tròn đến 3 chữ số thập phân.


``` C++
// Bai2.9
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d, r; // d: chiều dài, r: chiều rộng
    cin >> d >> r;
    
    double p = 2 * (d + r); // p: chu vi
    double s = d * r;       // s: diện tích
    
    cout << setprecision(3) << fixed;
    cout << p << " " << s;
    return 0;
}
```

---

### **Bài 2.10: Tìm số lớn hơn trong hai số**

Đoạn code này nhận vào hai số thực `x` và `y`, sau đó so sánh và in ra màn hình số có giá trị lớn hơn.

```C++
// Bai2.10
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    
    if (x > y)
    {
        cout << x;
    }
    else
    {
        cout << y;
    }
    
    return 0;
}
```