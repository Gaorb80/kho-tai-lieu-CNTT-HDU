Chào bạn, chắc chắn rồi! Khi bạn bắt đầu giải các bài tập lập trình (như bài VL10 bạn vừa làm), bạn sẽ thấy `string` là một trong những công cụ quan trọng và tiện lợi nhất trong C++.

`std::string` là một "lớp" (class) dùng để lưu trữ và thao tác với văn bản (chuỗi ký tự). Nó mạnh mẽ và an toàn hơn rất nhiều so với cách dùng mảng `char[]` truyền thống của ngôn ngữ C.

Dưới đây là hướng dẫn đầy đủ và dễ hiểu nhất cho người mới bắt đầu.

---

### 1. ⚙️ Bắt buộc: "Triệu hồi" thư viện

Để sử dụng `string`, bạn **luôn phải** `#include <string>` ở đầu tệp mã của mình.

C++

```
#include <iostream>
#include <string> // <-- Bắt buộc phải có dòng này
using namespace std;
```

---

### 2. 📋 Các thao tác cơ bản (Phải biết)

Đây là những thao tác bạn sẽ dùng trong 90% thời gian.

#### a. Khai báo và Gán giá trị

Rất đơn giản, giống như `int` hay `double`.

C++

```
string loiChao; // Khai báo một chuỗi rỗng
loiChao = "Xin chao"; // Gán giá trị

string tenBan = "Bao"; // Vừa khai báo vừa gán
string banSao = tenBan; // Sao chép chuỗi (rất dễ!)
```

#### b. Nhập và Xuất (Quan trọng nhất!)

Đây là phần người mới **dễ sai nhất**. Có 2 cách nhập:

- **Dùng `cin`:**
    
    - Chỉ đọc **1 từ** (dừng lại khi gặp dấu cách, Tab, hoặc Enter).
        
    - Ví dụ: Nếu bạn nhập `Hong Duc`, `cin >> s;` sẽ chỉ lấy được chữ `"Hong"`.
        
- **Dùng `getline` (Khuyên dùng):**
    
    - Đọc **cả dòng** (chỉ dừng lại khi gặp phím Enter).
        
    - Ví dụ: Nếu bạn nhập `Hong Duc University`, `getline(cin, s);` sẽ lấy được toàn bộ `"Hong Duc University"`.
        

C++

```
string s_tu;
cout << "Nhap 1 tu: ";
cin >> s_tu; // Nếu nhập "Xin chao", s_tu chỉ là "Xin"

string s_dong;
cout << "Nhap 1 dong: ";
getline(cin, s_dong); // Sẽ đọc " chao" còn sót lại từ 'cin' ở trên

cout << s_tu << endl;
cout << s_dong << endl;
```

> CẢNH BÁO "TRÔI LỆNH" (Lỗi kinh điển):
> 
> Khi bạn vừa dùng cin để nhập một số, rồi dùng getline để nhập chuỗi, getline sẽ bị "trôi" (bị bỏ qua) vì nó đọc phải ký tự Enter thừa từ cin.
> 
> **Cách sửa:** Luôn dùng `cin.ignore()` sau `cin` (số) và trước `getline` (chuỗi) để xóa bộ đệm.
> 
> C++
> 
> ```
> int n;
> string s;
> cin >> n; // Bạn nhập số 5 và ấn Enter
> ```

> // Phím Enter vẫn còn trong bộ đệm
> 
> cin.ignore(); // <-- Thêm dòng này để "ăn" phím Enter đó

> getline(cin, s); // Giờ thì getline sẽ đợi bạn nhập

#### c. Lấy độ dài chuỗi

Dùng hàm `.length()` hoặc `.size()` (cả hai như nhau).

C++

```
string s = "Viet Nam";
int doDai = s.length(); // doDai sẽ là 8 (dấu cách cũng được đếm)
```

#### d. Truy cập từng ký tự (Giống như mảng)

Chuỗi được đánh số thứ tự (index) bắt đầu từ `0`. Bạn có thể truy cập từng ký tự bằng dấu `[]`.

C++

```
string s = "Hello";
// H e l l o
// 0 1 2 3 4

cout << s[0]; // In ra 'H'
cout << s[1]; // In ra 'e'

// Lấy ký tự cuối cùng
cout << s[s.length() - 1]; // In ra 'o'

// Sửa ký tự
s[0] = 'J'; // s bây giờ trở thành "Jello"
```

#### e. Nối chuỗi (Dùng dấu `+`)

Bạn có thể "cộng" các chuỗi lại với nhau rất trực quan.

C++

```
string s1 = "Thanh ";
string s2 = "Hoa";
string s3 = s1 + s2; // s3 sẽ là "Thanh Hoa"

s1 += "dep qua!"; // s1 bây giờ là "Thanh dep qua!"
```

#### f. So sánh chuỗi

Bạn có thể dùng các toán tử `==`, `!=`, `>`, `<` như với số. Việc so sánh này dựa trên thứ tự từ điển (A < B < C...).

C++

```
string a = "Apple";
string b = "Banana";

if (a == "Apple") { // Đúng
    // ...
}
if (a < b) { // Đúng, vì 'A' đứng trước 'B'
    // ...
}
if (a != b) { // Đúng
    // ...
}
```

---

### 3. 🎯 Một số hàm hữu ích (Nên biết)

- `s.substr(index, so_luong)`: Lấy ra một chuỗi con.
    
    - `string s = "Hello World";`
        
    - `string sub = s.substr(6, 5);` // Bắt đầu từ vị trí 6, lấy 5 ký tự -> `sub` là `"World"`
        
- `s.find("chuoi_con")`: Tìm vị trí xuất hiện _đầu tiên_ của chuỗi con.
    
    - `string s = "Hello World";`
        
    - `int pos = s.find("World");` // `pos` sẽ là 6
        
    - Nếu không tìm thấy, nó trả về một giá trị đặc biệt là `string::npos`.
        
- `s.empty()`: Kiểm tra xem chuỗi có rỗng hay không (trả về `true` hoặc `false`).
    
    - `string s = "";`
        
    - `if (s.empty()) { ... }` // Đúng
        
- `s.erase(...)`: Xóa ký tự.
    
- `s.insert(...)`: Chèn ký tự.
    

---

### 4. 📝 Ví dụ tổng hợp

Đây là một chương trình nhỏ kết hợp các kiến thức trên:

C++

```
#include <iostream>
#include <string>

using namespace std;

int main() {
    string ho;
    string ten;

    cout << "Nhap ho cua ban: ";
    cin >> ho; // Chỉ đọc 1 từ (ví dụ: "Nguyen")

    cout << "Nhap ten lot va ten cua ban: ";
    cin.ignore(); // <-- Cực kỳ quan trọng, để xóa phím Enter
    getline(cin, ten); // Đọc cả dòng (ví dụ: "Van A")

    // 1. Nối chuỗi
    string hoVaTen = ho + " " + ten;
    cout << "Ho va ten day du: " << hoVaTen << endl;

    // 2. Lấy độ dài
    cout << "Ten cua ban co " << hoVaTen.length() << " ky tu (tinh ca dau cach)" << endl;

    // 3. Truy cập ký tự
    cout << "Ky tu dau tien trong ten ban la: " << hoVaTen[0] << endl;

    // 4. Tìm kiếm
    if (hoVaTen.find("Van") != string::npos) {
        cout << "Ban co ten lot la Van!" << endl;
    } else {
        cout << "Ban khong co ten lot la Van." << endl;
    }

    return 0;
}
```

Bạn có muốn mình giải thích kỹ hơn về lỗi "trôi lệnh" khi dùng `cin` và `getline` không? Đây là lỗi mà gần như mọi sinh viên C++ đều gặp phải


Tất nhiên rồi! Dưới đây là một số bài tập được thiết kế để bạn luyện tập từ các kỹ năng cơ bản nhất (nhập/xuất, truy cập) đến các kỹ năng vận dụng (tìm kiếm, biến đổi).

---

### 📚 Nhóm 1: Nhập/Xuất và Đếm Ký Tự

Đây là các bài tập "khởi động" để bạn làm quen với việc đọc và duyệt chuỗi.

#### Bài 1: Lời Chào Hoàn Chỉnh

- **Đề bài:** Viết chương trình yêu cầu người dùng nhập vào **Họ** (dùng `cin`), sau đó nhập vào **Tên lót và Tên** (dùng `getline`). Cuối cùng, in ra một câu chào đầy đủ.
    
- **Ví dụ Input:**
    
    ```
    Nguyen
    Van Bao
    ```
    
- **Ví dụ Output:**
    
    ```
    Xin chao Nguyen Van Bao!
    ```
    
- **Luyện kỹ năng:** `cin`, `getline`, `cin.ignore()`, và phép nối chuỗi (`+`).
    
- **Gợi ý:** Đây là bài tập chuyên để trị **lỗi "trôi lệnh"** kinh điển. Bạn sẽ cần dùng `cin.ignore()` sau khi `cin >> ho;`.
    

#### Bài 2: Phân Loại Ký Tự

- **Đề bài:** Nhập vào một chuỗi `s` (dùng `getline`). Đếm và in ra xem trong chuỗi đó có bao nhiêu **chữ cái**, bao nhiêu **chữ số**, và bao nhiêu **ký tự khác** (bao gồm cả dấu cách).
    
- **Ví dụ Input:**
    
    ```
    Toi la Bao, sinh nam 2005!
    ```
    
- **Ví dụ Output:**
    
    ```
    Chu cai: 19
    Chu so: 4
    Ky tu khac: 6
    ```
    
- **Luyện kỹ năng:** Vòng lặp `for`, `s.length()`, `s[i]`, và logic `if... else if... else`.
    
- **Gợi ý:** Bạn có thể kiểm tra:
    
    - `if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))`
        
    - `else if (s[i] >= '0' && s[i] <= '9')`
        
    - `else`
        

---

### 🎯 Nhóm 2: Biến Đổi và Thao Tác

Các bài tập này yêu cầu bạn thay đổi nội dung của chuỗi.

#### Bài 3: Đảo Ngược Chuỗi

- **Đề bài:** Nhập vào một chuỗi `s`. In ra chuỗi đảo ngược của nó.
    
- **Ví dụ Input:**
    
    ```
    hello
    ```
    
- **Ví dụ Output:**
    
    ```
    olleh
    ```
    
- **Luyện kỹ năng:** Vòng lặp `for` chạy ngược, hoặc xây dựng một chuỗi mới.
    
- **Gợi ý:**
    
    - _Cách 1 (In trực tiếp):_ Dùng `for (int i = s.length() - 1; i >= 0; i--)` và `cout << s[i];`.
        
    - _Cách 2 (Tạo chuỗi mới):_ Tạo `string s_nguoc = "";` rồi dùng `for` để cộng `s[i]` vào _đầu_ `s_nguoc` (`s_nguoc = s[i] + s_nguoc;`).
        

#### Bài 4: Chuyển Đổi Hoa/Thường

- **Đề bài:** Nhập vào một chuỗi `s`. Chuyển tất cả chữ in hoa thành in thường, và tất cả chữ in thường thành in hoa.
    
- **Ví dụ Input:**
    
    ```
    Hello WORLD
    ```
    
- **Ví dụ Output:**
    
    ```
    hELLO world
    ```
    
- **Luyện kỹ năng:** Chỉnh sửa `s[i]`, sử dụng thư viện `<cctype>`.
    
- **Gợi ý:** Bạn cần `#include <cctype>`. Sau đó, trong vòng lặp `for`, bạn có thể dùng các hàm:
    
    - `if (islower(s[i])) { s[i] = toupper(s[i]); }`
        
    - `else if (isupper(s[i])) { s[i] = tolower(s[i]); }`
        

---

### 🧠 Nhóm 3: Logic và Vận Dụng

Các bài tập này kết hợp nhiều kỹ năng để giải quyết một vấn đề logic.

#### Bài 5: Chuỗi Đối Xứng (Palindrome)

- **Đề bài:** Nhập vào một chuỗi `s`. Kiểm tra xem chuỗi đó có phải là chuỗi đối xứng hay không (đọc xuôi và ngược đều giống nhau). In ra "YES" hoặc "NO".
    
- **Ví dụ Input:**
    
    ```
    madam
    ```
    
- **Ví dụ Output:**
    
    ```
    YES
    ```
    
- **Luyện kỹ năng:** Logic so sánh, `s.length()`, `s[i]`.
    
- **Gợi ý:** Dùng 2 "con trỏ" (biến chỉ số): `int left = 0;` và `int right = s.length() - 1;`. Dùng `while (left < right)` và so sánh `s[left]` với `s[right]`. Nếu chúng khác nhau, in "NO" và `return`. Nếu vòng lặp kết thúc mà không `return`, in "YES".
    

#### Bài 6: Tìm và Thay Thế Đơn Giản

- **Đề bài:** Nhập vào một chuỗi `s`. Tìm **lần xuất hiện đầu tiên** của từ "xau" trong `s` và thay thế nó bằng từ "tot". Nếu không tìm thấy, in ra chuỗi gốc.
    
- **Ví dụ Input:**
    
    ```
    Hom nay troi rat xau.
    ```
    
- **Ví dụ Output:**
    
    ```
    Hom nay troi rat tot.
    ```
    
- **Luyện kỹ năng:** `s.find()`, `string::npos`, `s.replace()` (bạn có thể tự tra cứu hàm này, hoặc dùng `s.erase()` và `s.insert()`).
    
- **Gợi ý:** Dùng `int pos = s.find("xau");`. Nếu `pos != string::npos`, bạn đã tìm thấy nó ở vị trí `pos`.
    

Bạn muốn thử làm bài nào đầu tiên? Mình có thể cung cấp thêm gợi ý nếu bạn gặp khó khăn ở bài nào đó.