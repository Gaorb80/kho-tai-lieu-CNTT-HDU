
### 1.1. Tóm tắt

Trong chương này, chúng ta đã xem xét các khái niệm về cấu trúc dữ liệu, kiểu dữ liệu. Thông thường, các ngôn ngữ lập trình luôn định nghĩa sẵn một số kiểu dữ liệu cơ bản. Các kiểu dữ liệu này thường có cấu trúc đơn giản. Để thể hiện được các đối tượng muôn hình vạn trạng trong thế giới thực, chỉ dùng các kiểu dữ liệu này là không đủ. Ta cần xây dựng các kiểu dữ liệu mới phù hợp với đối tượng mà nó biểu diễn. Thành phần dữ liệu luôn là một về quan trọng trong mọi chương trình. Vì vậy, việc thiết kế các cấu trúc dữ liệu tốt là một vấn đề đáng quan tâm.

Về thứ hai trong chương trình là các thuật toán (thuật giải). Một chương trình tốt phải có các cấu trúc dữ liệu phù hợp và các thuật toán hiệu quả. Khi khảo sát các thuật toán, chúng ta quan tâm đến chi phí thực hiện thuật toán. Chi phí này bao gồm chi phí về tài nguyên và thời gian cần để thực hiện thuật toán. Nếu như những đòi hỏi về tài nguyên có thể dễ dàng xác định thì việc xác định thời gian thực hiện nó không đơn giản. Có một số cách khác nhau để ước lượng khoảng thời gian này. Tuy nhiên, cách tiếp cận hợp lý nhất là hướng xấp xỉ tiệm cận. Hướng tiếp cận này không phụ thuộc ngôn ngữ, môi trường cài đặt cũng như trình độ của lập trình viên. Nó cho phép so sánh các thuật toán được khảo sát ở những nơi có vị trí địa lý rất xa nhau. Tuy nhiên, khi đánh giá ta cần chú ý thêm đến hệ số vô hướng trong kết quả đánh giá. Có khi hệ số này ảnh hưởng đáng kể đến chi phí thực của thuật toán.

Do việc đánh giá chi phí thực hiện trung bình của thuật toán thường phức tạp nên người ta thường đánh giá chi phí thực hiện thuật toán trong trường hợp xấu nhất. Hơn nữa, trong một số lớp thuật toán, việc xác định trường hợp xấu nhất là rất quan trọng.

---

### 1.2. Bài tập

**Bài tập lý thuyết**

1.  Tìm thêm một số ví dụ minh hoạ mối quan hệ giữa cấu trúc dữ liệu và giải thuật.
2.  Cho biết một số kiểu dữ liệu được định nghĩa sẵn trong một ngôn ngữ lập trình các bạn thường sử dụng. Cho biết một số kiểu dữ liệu tiên định này có đủ để đáp ứng mọi yêu cầu về tổ chức dữ liệu không?
3.  Một ngôn ngữ lập trình có nên cho phép người sử dụng tự định nghĩa thêm các kiểu dữ liệu có cấu trúc? Giải thích và cho ví dụ.
4.  Cấu trúc dữ liệu và cấu trúc lưu trữ khác nhau những điểm nào? Một cấu trúc dữ liệu có thể có nhiều cấu trúc lưu trữ được không? Ngược lại, một cấu trúc lưu trữ có thể tương ứng với nhiều cấu trúc dữ liệu được không? Cho ví dụ minh họa.
5.  Giả sử có một bảng giờ tàu cho biết thông tin về các chuyến tàu khác nhau của mạng đường sắt. Hãy biểu diễn các dữ liệu này bằng một cấu trúc dữ liệu thích hợp (file, array, struct...) sao cho dễ dàng truy xuất giờ khởi hành, giờ đến của một chuyến tàu bất kỳ tại một nhà ga bất kỳ.

**Bài tập thực hành**

6.  Giả sử quy tắc tổ chức quản lý nhân viên của một công ty như sau:
    Thông tin về một nhân viên bao gồm lý lịch và bảng chấm công:
    + **Lý lịch nhân viên:**
        - Mã nhân viên: chuỗi 8 ký tự
        - Tên nhân viên: chuỗi 20 ký tự
        - Tình trạng gia đình: 1 ký tự (M = Married, S = Single)
        - Số con: số nguyên $\le 20$
        - Trình độ văn hoá: chuỗi 2 ký tự (C1 = cấp 1; C2 = cấp 2; C3 = cấp 3; ĐH = đại học; CH = cao học)

    - Lương căn bản: số $\le 1000000$
    + **Chấm công nhân viên:**
        - Số ngày nghỉ có phép trong tháng: số $\le 28$
        - Số ngày nghỉ không phép trong tháng: số $\le 28$
        - Số ngày làm thêm trong tháng: số $\le 28$
        - Kết quả công việc: chuỗi 2 ký tự ($T = Tốt; TB = Đạt; K = Kém$)
        - Lương thực lĩnh trong tháng: số $\le 2000000$

    **Quy tắc tính lương:**
    Lương thực lĩnh = Lương căn bản + Phụ trội
    Trong đó nếu:
    - số con > 2: Phụ trội = +5% Lương căn bản
    - trình độ văn hoá = CH: Phụ trội = +10% Lương căn bản
    - làm thêm: Phụ trội=+4% Lương căn bản/ngày
    - nghỉ không phép: Phụ trội= -5% Lương căn bản/ngày

    **Chức năng yêu cầu:**
    - Cập nhật lý lịch, bảng chấm công cho nhân viên (thêm, xoá, sửa)
    - Xem bảng lương hàng tháng
    - Tìm thông tin của một nhân viên

    Tổ chức cấu trúc dữ liệu thích hợp để biểu diễn các thông tin trên, và cài đặt chương trình theo các chức năng đã mô tả.

    **Lưu ý:**
    Nên phân biệt các thông tin mang tính chất tĩnh (lý lịch) và động (chấm công hàng tháng). Số lượng nhân viên tối đa là 50 người

7.  Tính thời gian thực hiện của các đoạn chương trình sau:
    a) Tính tổng của các số
    ```
    Sum = 0;
    for (i = 1;i <= n; i++){
    ```

```
    scanf("%d",&x);
    Sum = Sum + x;
    }
```
    b) Tính tích hai ma trận vuông cấp n C = A*B:
    ```
    for (i = 1; i <= n; i++)
      for (j = 1;j <= n; j++){
        c[i,j] := 0;
        for (k=1;k<=n;k++)  c[i,j] = c[i,j] + a[i,k] * b[k,j];
      }
    ```

8.  Giải các phương trình đệ quy sau với T(1) = 1 và
    a) $T(n) = 3T(n/2) + n$
    b) $T(n) = 3T(n/2) + n^2$
    c) $T(n) = 8T(n/2) + n^3$

9.  Giải các phương trình đệ quy sau với T(1) = 1 và
    a) $T(n) = 4T(n/3) + n$
    b) $T(n) = 4T(n/3) + n^2$
    c) $T(n) = 9T(n/3) + n^2$

10. Giải các phương trình đệ quy sau với T(1) = 1 và
    a) $T(n) = T(n/2) + 1$
    b) $T(n) = 2T(n/2) + \log n$
    c) $T(n) = 2T(n/2) + n$
    d) $T(n) = 2T(n/2) + n^2$

11. Giải các phương trình đệ quy sau bằng phương pháp đoán nghiệm:
    a) $T(1) = 2$ và $T(n) = 2T(n-1) + 1$ với $\forall n \ge 2$
    b) $T(1) = 1$ và $T(n) = 2T(n-1) + n$ với $\forall n \ge 2$

12. Cho một mảng n số nguyên được sắp thứ tự tăng. Viết hàm tìm một số nguyên trong mảng đó, nếu tìm thấy thì trả về TRUE, ngược lại trả về FALSE.
Sử dụng hai phương pháp tìm kiếm tuần tự và tìm kiếm nhị phân. Với mỗi phương pháp hãy viết một hàm tìm và tính thời gian thực hiện của hàm đó.

13. Tính thời gian thực hiện của giải thuật đệ quy giải bài toán Tháp Hà Nội với n tầng?

14. Xét định nghĩa số tổ hợp chập k của n như sau:
$$ C_n^k = \begin{cases} 1 & khi \ k=0, k=n \\ C_{n-1}^{k-1} + C_{n-1}^k & khi \ 0 < k < n \end{cases} $$

a) Viết một hàm đệ quy để tính số tổ hợp chập k của n.
b) Tính thời gian thực hiện của giải thuật nói trên.