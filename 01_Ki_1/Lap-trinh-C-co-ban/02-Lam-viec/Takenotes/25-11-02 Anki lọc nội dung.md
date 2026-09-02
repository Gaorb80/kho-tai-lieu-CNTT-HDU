Tôi đang học C++, Hãy giúp tôi trả lời trọng tâm và ngắn gọn các câu hỏi sau

- Trong C++, chỉ mục (index) của các phần tử trong mảng bắt đầu từ số mấy?
- Các phần tử của mảng được lưu trữ trong bộ nhớ như thế nào?
- Đâu là cú pháp khai báo một mảng số nguyên tên `A` có 100 phần tử?
- Đâu là cú pháp để vừa khai báo vừa khởi tạo một mảng số thực `diem_so` với các giá trị {8.5, 9.0, 7.5}?
- Cú pháp `int ket_qua[10] = {0};` dùng để làm gì?
- Để sử dụng hàm `std::sort`, bạn cần `#include` thư viện nào?
- Đâu là cú pháp để sắp xếp mảng `mang` có `kich_thuoc` phần tử theo thứ tự TĂNG dần?
- Để sắp xếp mảng theo thứ tự GIẢM dần với `std::sort`, bạn cần truyền thêm đối số thứ ba là gì?

Chào bạn! Dưới đây là câu trả lời trọng tâm và ngắn gọn cho các câu hỏi của bạn về mảng trong C++ và hàm `std::sort`.

## 💻 Mảng trong C++

- **Trong C++, chỉ mục (index) của các phần tử trong mảng bắt đầu từ số mấy?**
    
    - Chỉ mục (index) của các phần tử trong mảng bắt đầu từ số **0**.
        
- **Các phần tử của mảng được lưu trữ trong bộ nhớ như thế nào?**
    
    - Các phần tử của mảng được lưu trữ trong bộ nhớ ở các vị trí **liên tiếp** (cạnh nhau).
        
- **Đâu là cú pháp khai báo một mảng số nguyên tên `A` có 100 phần tử?**
    
    - Cú pháp là: `int A[100];`
        
- **Đâu là cú pháp để vừa khai báo vừa khởi tạo một mảng số thực `diem_so` với các giá trị {8.5, 9.0, 7.5}?**
    
    - Cú pháp là: `double diem_so[] = {8.5, 9.0, 7.5};` hoặc `double diem_so[3] = {8.5, 9.0, 7.5};`
        
- **Cú pháp `int ket_qua[10] = {0};` dùng để làm gì?**
    
    - Cú pháp này dùng để **khai báo** một mảng số nguyên tên `ket_qua` có 10 phần tử và **khởi tạo** **tất cả** các phần tử đó bằng giá trị **0**.
        

---

## 🛠️ Sắp xếp với `std::sort`

- **Để sử dụng hàm `std::sort`, bạn cần `#include` thư viện nào?**
    
    - Bạn cần `#include` thư viện **`<algorithm>`**.
        
- **Đâu là cú pháp để sắp xếp mảng `mang` có `kich_thuoc` phần tử theo thứ tự TĂNG dần?**
    
    - Cú pháp là: `std::sort(mang, mang + kich_thuoc);`
        
- **Để sắp xếp mảng theo thứ tự GIẢM dần với `std::sort`, bạn cần truyền thêm đối số thứ ba là gì?**
    
    - Bạn cần truyền thêm đối số thứ ba là **`std::greater<kiểu_dữ_liệu>()`** (ví dụ: `std::greater<int>()` cho mảng số nguyên) hoặc **`std::rbegin(mang), std::rend(mang)`** (nếu dùng C++11 trở lên) trong đối số thứ nhất và thứ hai.
        
    - Cú pháp thường dùng là: `std::sort(mang, mang + kich_thuoc, std::greater<kiểu_dữ_liệu>());` (Ví dụ: `std::sort(mang, mang + kich_thuoc, std::greater<int>());`)
        
