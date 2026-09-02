Chào Bảo, không sao cả! Lâu không code quên là chuyện bình thường. Thực ra bài toán trong ảnh của bạn là một bài tập cơ bản và rất hay để ôn lại về **duyệt mảng** và **xử lý điều kiện**.

Chúng ta cùng ôn lại kiến thức về mảng nhé.

---

## 📚 Ôn tập về Mảng (Array)

Mảng là một trong những cấu trúc dữ liệu cơ bản nhất.

1. **Mảng là gì?**
    
    - Đó là một tập hợp các phần tử **cùng một kiểu dữ liệu** (ví dụ: tất cả là `int`, hoặc tất cả là `long long`).
        
    - Các phần tử này được lưu trữ ở các vị trí **bộ nhớ liền kề nhau**.
        
2. **Khai báo (trong C/C++)**
    
    - Bạn cần chỉ định kiểu dữ liệu và kích thước của mảng.
        
    - Cú pháp: `kiểu_dữ_liệu tên_mảng[kích_thước];`
        
    - _Ví dụ:_ `int a[100];` (một mảng chứa được 100 số nguyên).
        
    - **Lưu ý cho bài toán của bạn:** Vì $n \le 10^4$, bạn nên khai báo mảng lớn hơn một chút, ví dụ: `long long a[10005];`. Bạn _phải_ dùng `long long` vì giá trị $|a_i| \le 10^{12}$, vượt quá khả năng lưu trữ của `int`.
        
3. **Truy cập phần tử**
    
    - Chúng ta dùng "chỉ số" (index) để truy cập từng phần tử.
        
    - **Quan trọng:** Mảng trong C++ (và nhiều ngôn ngữ khác) có chỉ số **bắt đầu từ 0** (gọi là 0-based indexing).
        
    - Nếu bạn có mảng `a[100]`, các phần tử hợp lệ là `a[0]`, `a[1]`, ..., `a[99]`.
        
4. **Duyệt mảng**
    
    - Đây là thao tác phổ biến nhất, nghĩa là đi qua tất cả các phần tử của mảng.
        
    - Chúng ta thường dùng vòng lặp `for`.
        
    - _Ví dụ:_ Nhập $n$ phần tử cho mảng `a`:
        
        C++
        
        ```
        int n;
        cin >> n;
        long long a[10005];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ```
        

---

## 💡 Phân tích và Giải "Bài 6.5"

Bây giờ, hãy áp dụng kiến thức trên vào bài toán của bạn.

**Yêu cầu:** Tìm **vị trí** (thứ tự) của phần tử chẵn **đầu tiên** và **cuối cùng**. Nếu không có, in "-1 -1".

- **Phân tích ví dụ:**
    
    - Input: `7`
        
    - Dãy: `-7`, `-6`, `4`, `19`, `-22`, `50`, `-81`
        
    - Số chẵn đầu tiên: `-6`. Nó là phần tử thứ **2**.
        
    - Số chẵn cuối cùng: `50`. Nó là phần tử thứ **6**.
        
    - Output: `2 6`
        
- **Lưu ý:** Bài toán yêu cầu "vị trí" (thứ tự), nghĩa là họ muốn **1-based index** (đếm từ 1), dù mảng của chúng ta chạy từ 0.
    

### Thuật toán giải

Đây là cách đơn giản và hiệu quả nhất chỉ dùng một vòng lặp:

1. Khởi tạo 2 biến để lưu vị trí:
    
    - `vi_tri_dau = -1`
        
    - `vi_tri_cuoi = -1`
        
2. Nhập `n`.
    
3. Dùng vòng lặp `for` chạy $i$ từ $0$ đến $n-1$.
    
4. Trong mỗi lần lặp, nhập vào `a[i]`.
    
5. Kiểm tra xem `a[i]` có phải là số chẵn không (dùng `a[i] % 2 == 0`).
    
6. Nếu `a[i]` là số chẵn:
    
    - Kiểm tra nếu `vi_tri_dau` vẫn bằng `-1` (nghĩa là đây là số chẵn đầu tiên ta gặp):
        
        - `vi_tri_dau = i + 1;` (Gán vị trí 1-based)
            
    - _Luôn luôn_ cập nhật `vi_tri_cuoi`:
        
        - `vi_tri_cuoi = i + 1;` (Cập nhật vị trí chẵn cuối cùng)
            
7. Sau khi vòng lặp kết thúc, chỉ cần in ra `vi_tri_dau` và `vi_tri_cuoi`.
    
    - _Trường hợp không có số chẵn:_ Cả hai biến `vi_tri_dau` và `vi_tri_cuoi` sẽ không bao giờ được cập nhật và vẫn là `-1`, đúng như yêu cầu đề bài.
        

---

## 🏋️ Một số bài tập mảng liên quan

Dưới đây là một vài bài tập với độ khó tăng dần để bạn luyện tập lại:

1. **Tính tổng:** Viết chương trình nhập vào $n$ số nguyên, tính và in ra tổng của tất cả các phần tử trong mảng.
    
2. **Đếm số lượng:** Viết chương trình nhập vào $n$ số nguyên, đếm xem trong mảng có bao nhiêu số dương, bao nhiêu số âm, và bao nhiêu số 0.
    
3. **Tìm Max/Min:** Viết chương trình nhập vào $n$ số nguyên, tìm phần tử lớn nhất (Max) và phần tử nhỏ nhất (Min) trong mảng cùng với **vị trí** (thứ tự 1-based) của chúng.
    
	1. **Tìm kiếm:** Viết chương trình nhập vào $n$ số nguyên, sau đó nhập thêm một số nguyên $x$. Kiểm tra xem $x$ có xuất hiện trong mảng không. Nếu có, in ra **vị trí đầu tiên** nó xuất hiện. Nếu không, in ra -1.
	    
4. **Tổng số nguyên tố:** Viết chương trình nhập vào $n$ số nguyên, tính tổng của tất cả các số nguyên tố có trong mảng.
    

Bạn muốn tôi viết code C++ hoàn chỉnh cho "Bài 6.5" để bạn tham khảo hay bạn muốn thử tự làm các bài tập trên trước?

