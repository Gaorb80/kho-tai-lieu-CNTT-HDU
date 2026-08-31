
## 2.1. Bài tập

### Bài tập lý thuyết

**1.** Phân tích ưu, khuyết điểm của danh sách liên kết so với mảng. Tổng quát hóa các trường hợp nên dùng danh sách liên kết.

**2.** Hãy cho biết nội dung của stack sau mỗi thao tác trong dãy:

> EAS\*Y\*\*QUE\*\*\*ST\*\*\*I\*ON

Với một chữ cái tượng trưng cho thao tác thêm chữ cái tương ứng vào stack, dấu \* tượng trưng cho thao tác lấy nội dung một phần tử trong stack in lên màn hình.

Hãy cho biết sau khi hoàn tất chuỗi thao tác, những gì xuất hiện trên màn hình?

**3.** Hãy cho biết nội dung của hàng đợi sau mỗi thao tác trong dãy:

> EAS\*Y\*\*QUE\*\*\*ST\*\*\*I\*ON

Với một chữ cái tượng trưng cho thao tác thêm chữ cái tương ứng vào hàng đợi, dấu \* tượng trưng cho thao tác lấy nội dung một phần tử trong hàng đợi in lên màn hình.

Hãy cho biết sau khi hoàn tất chuỗi thao tác, những gì xuất hiện trên màn hình?

**4.** Giả sử phải xây dựng một chương trình soạn thảo văn bản, hãy chọn cấu trúc dữ liệu thích hợp để lưu trữ văn bản trong quá trình soạn thảo. Biết rằng:

- Số dòng văn bản không hạn chế.
- Mỗi dòng văn bản có chiều dài tối đa 80 ký tự.
- Các thao tác yêu cầu gồm:
  - + Di chuyển trong văn bản (lên, xuống, qua trái, qua phải)
  - + Thêm, xóa sửa ký tự trong một dòng
  - + Thêm, xóa một dòng trong văn bản
  - + Đánh dấu, sao chép khối

Giải thích lý do chọn cấu trúc dữ liệu đó.

---

### Bài tập thực hành

**5.** Hãy tổ chức lưu trữ một dãy số nguyên với cấu trúc danh sách liên kết đơn và thực hiện các yêu cầu sau:

1. Nhập danh sách (Thêm đầu - Thêm cuối)
2. Xuất danh sách ra màn hình
3. Liệt kê các phần tử mang phần tử chẵn.
4. Tìm phần tử có phần tử nhỏ nhất.
5. Đếm số lượng số nguyên tố có trong danh sách.
6. Thêm phần tử X vào trước phần tử chẵn đầu tiên (X được nhập vào từ bàn phím)
7. Thêm phần tử X vào sau phần tử lẻ cuối cùng (X được nhập vào từ bàn phím).
8. Xoá phần tử nhỏ nhất trong danh sách.
9. Xoá phần tử đứng trước và sau X trong danh sách (X được nhập vào từ bàn phím).
10. Tách danh sách hiện tại thành 2 danh sách sao cho danh sách thứ nhất chứa các phần tử nguyên tố, danh sách thứ hai chứa các phần tử còn lại
11. Viết chương trình tính giá trị trung bình cộng của các phần tử trong danh sách.
12. Tìm phần tử có giá trị chẵn lớn nhất trong danh sách và xóa (tất cả) các phần tử này.
13. Tìm phần tử có giá trị bé nhất trong danh sách và xóa (tất cả) phần tử này.

**6.** Cho 2 danh sách liên kết L1 và L2, gồm các phần tử là số nguyên, thực hiện các yêu cầu sau:

a. Sắp xếp L1 và L2 tăng dần.

b. Nối L1 và L2 thành L3 sao cho L3 tăng dần.

**7.** Một danh sách sinh viên được tổ chức lưu trữ bằng cấu trúc danh sách liên kết đơn. Mỗi sinh viên có những thông tin sau:

- Masv (kiểu nguyên),
- họ tên (kiểu char[30]),
- điểm toán (dt ; kiểu int),
- điểm lý (dl ; kiểu int),
- điểm hóa (dh; kiểu int)

điểm trung bình - tính dựa vào trung bình cộng của các điểm toán, lý, hóa.

Viết chương trình thực hiện các công việc sau:

1. Viết chương trình nhập vào n sinh viên (n nhập từ bàn phím).
2. Đưa ra màn hình tất cả sinh viên thi lại ít nhất 1 môn.
3. Đưa ra màn hình tất cả sinh viên thi lại cả 3 môn.
4. Đưa ra màn hình tất cả sinh viên là sinh viên giỏi (điểm trung bình 3 môn >=8 và không có môn nào thi lại).
5. Đưa ra màn hình tất cả sinh viên là sinh viên khá (8>điểm trung bình 3 môn >=7; và không có môn nào thi lại).
6. Đưa ra màn hình tất cả sinh viên là sinh viên trung bình và không có môn nào thi lại).
7. Đưa ra màn hình tất cả sinh viên là sinh viên có điểm trung bình cao nhất.
8. Đưa ra màn hình tất cả sinh viên là sinh viên có điểm trung bình thấp nhất.
9. Nhập vào Masv nào đó, cho phép tìm kiếm tuần tự theo Masv.
10. Xóa bỏ tất cả những sinh viên có điểm trung bình (dtb) =8.

**8.** Trong một ứng dụng tin học để quản lý hàng hóa tại một cơ sở kinh doanh, các mặt hàng, bao gồm mã số (code), tên (name), số lượng (amount) và giá tiền (price), được lưu trữ bởi một danh sách liên kết đơn.

a) Giả sử trong danh sách đã có một số mặt hàng, viết giải thuật in ra tên của các mặt hàng có giá tiền bằng p.

b) Viết giải thuật tính tổng giá tiền của tất cả mặt hàng hiện có trong danh sách.

**9.** Thực hiện các yêu cầu của bài 1,2,3,4 với cấu trúc danh sách liên kết đôi.

**10.** Giả sử ma trận vuông thưa được lưu trữ dạng danh sách liên kết đơn.

a. Tính tổng các phần tử trên đường chéo chính của ma trận trên.

b. Tính tổng các phần tử trên đường chéo phụ của ma trận trên.

**11.** Sử dụng cấu trúc danh sách liên kết đơn để lưu trữ n số nguyên nhập từ bàn phím.

a. Loại bỏ tất cả các phần tử bị lặp trong danh sách nói trên.

b. Loại bỏ tất cả các phần tử âm trong danh sách nói trên.

c. Sắp xếp các số đó theo chiều tăng dần.

**12.** Viết chương trình cho phép nhập 2 đa thức (đa thức được tổ chức dạng danh sách liên kết đơn).

a. Tính tổng 2 đa thức.

b. Tính hiệu 2 đa thức.

**13.** Viết chương trình cho phép nhập 2 đa thức (đa thức được tổ chức dạng danh sách liên kết kép).

a. Tính tổng 2 đa thức.

b. Tính hiệu 2 đa thức.

**14.** Xây dựng một cấu trúc dữ liệu thích hợp để biểu diễn đa thức P(x) có dạng:

> P(x) = c₁xn¹ + c₂xn² +...+cₖxnᵏ

Biết rằng:

- Các thao tác xử lý trên đa thức bao gồm:
  - + thêm một phần tử vào cuối đa thức
  - + đưa ra danh sách các phần tử trong đa thức theo:
    - Thứ tự nhập vào
    - Ngược với thứ tự nhập vào
  - + hủy một phần tử bất kỳ trong danh sách
- Số lượng các phần tử không hạn chế
- Chỉ có nhu cầu xử lý đa thức trong bộ nhớ chính.

a) Giải thích lý do chọn cấu trúc dữ liệu đã định nghĩa.

b) Viết chương trình con ước lượng giá trị của đa thức P(x) khi biết x.

c) Viết chương trình con rút gọn biểu thức (gộp các phần tử cùng số mũ).

**15.** Xét đoạn chương trình tạo một danh sách liên kết đơn gồm 4 phần tử (không quan tâm dữ liệu) sau đây:

```
Dx = NULL; p=Dx;
Dx = new (NODE);
for(i=0; i < 4; i++)
{
    p = p->next;
    p = new (NODE);
}
p->next = NULL;
```

Đoạn chương trình có thực hiện được thao tác tạo nêu trên không? Tại sao? Nếu không thì có thể sửa lại như thế nào cho đúng?

**16.** Một ma trận chỉ chứa rất ít phần tử với giá trị có nghĩa (ví dụ: phần tử ≠ 0) được gọi là ma trận thưa.

*Ví dụ:*

$$\begin{pmatrix} 0 & 0 & 0 & 3 & 0 & 0 \\ 1 & 0 & 0 & 0 & 2 & 0 \\ 0 & 0 & 4 & 0 & 0 & 0 \end{pmatrix}$$

Dùng cấu trúc danh sách liên kết để tổ chức biểu diễn một ma trận thưa sao cho tiết kiệm nhất (chỉ lưu trữ các phần tử có nghĩa).

a) Viết chương trình cho phép nhập, xuất ma trận.

b) Viết chương trình con cho phép cộng hai ma trận.

**17.** Viết hàm ghép 2 danh sách liên kết vòng L₁, L₂ thành một danh sách liên kết vòng L với phần tử đầu danh sách là phần tử đầu danh sách của L₁.

**18.** (Bài toán Josephus) Cho N người đứng thành vòng tròn và chọn 1 con số M bất kì (M < N). Bắt đầu người thứ 1 (mang số 1) đếm 1, người kế bên phải đếm 2,...cho tới người thứ M sẽ tự động ra khỏi vòng tròn và người bên phải anh ta phải đếm lại là 1, cứ tiếp tục cho đến khi không còn ai. Yêu cầu xuất ra thứ tự đi ra và người cuối cùng đi ra.
Ví dụ: N = 9, M = 5 thì thứ tự là 5, 1, 7, 4, 3, 6, 9, 2, 8
Hãy viết chương trình giải quyết bài toán Josephus, sử dụng cấu trúc danh sách liên kết.

**19.** Cài đặt lại chương trình quản lý nhân viên theo bài tập 6 chương 1, nhưng sử dụng cấu trúc dữ liệu danh sách liên kết. Biết rằng số nhân viên không hạn chế.

**20.** Cài đặt một chương trình soạn thảo văn bản theo mô tả trong bài tập 8.

**21.** Cài đặt chương trình phát sinh hệ thống thực đơn cho một ứng dụng bất kỳ tùy theo mô tả của ứng dụng.
Ví dụ: Cho tệp MENU.TXT chứa văn bảng có dạng sau :

```text
Menu
  popup
    item "Hello World" popup
      item "Good morning"
      item "Good afternoon"
      item "Good everning"
      item "Good night"
    end
    item "Conversation" popup // menu cấp 1
      item "Good Luck" popup // menu cấp 2
        item "Good luck for this examination"
      end
      item "Hi"
      item "Happy New Year"
```

```text
    end
  end
```

Chương trình sẽ đọc nội dung tệp MENU.TXT và phát sinh giao diện sau:
*(Hình minh họa giao diện menu)*
![[image-data-c2.png]]
	
**22.** Cài đặt chương trình tạo một bảng tính cho phép thực hiện các phép tính +, -, *, /, div trên các số có tối đa 30 chữ số, có chức năng nhớ (M+, M-, MC, MR).

**23.** Cài đặt chương trình cho phép nhận vào một biểu thức gồm các số, các toán tử +, -, *, /, %, các hàm toán học sin, cos, tan, ln, ex, dấu mở, đóng ngoặc "(", ")" và tính toán giá trị của biểu thức này.

**24.** Viết chương trình cho phép nhận vào một chương trình viết bằng ngôn ngữ MINI PASCAL chứa trong một file text và thực hiện chương trình này.
Ngôn ngữ MINI PASCAL là ngôn ngữ PASCAL thu gọn, chỉ gồm:
*   Kiểu dữ liệu INTEGER, REAL
*   Các toán tử và hàm toán học như trong bài tập 17
*   Các câu lệnh gán, IF THEN ESLE, FOR TO DO, WRITE
*   Các từ khóa PROGRAM, VAR, BEGIN, END
*   Không có chương trình con.