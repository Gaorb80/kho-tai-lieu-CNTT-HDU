---
tags:
  - He_Dieu_Hanh
  - university
---
# Note lộn xộn:
Chương trình duy nhất luôn chạy tại tất cả các thời điểm máy tính  hoạt động là nhân/hạt nhân (kernel)

Đọc tham khảo [[Daily_Note_2026 08-12/Obsidian-Take_note_08-12/Các môn chuyên ngành/OS/Slide tài liệu SVUIT/Slide 1]] 
**Nội dung tìm hiểu:**
- Định nghĩa hệ điều hành
- Phân loại hệ điều hành
- Các thành phần cơ bản của hệ điều hành
- Các tính chất Hệ điều hành
- Các nguyên tắc cơ bản xây dựng Hệ Điều hành
- các mô hình giao tiếp của hệ điều hành

Hệ điều hành là một chương trình đóng vai trò như là giao diện giữa người sử dụng và phần cứng máy tính, nó điều khiển việc thực hiện của tất cả các loại chương trình. 

Hệ điều hành là một hệ thống phần mềm đặc biệt , có nhiệm vụ quản lý và điều phối các tài nguyên phần cứng của máy tính , đồng thời cung cấp môi trường và các dịch vụ cần thiết để các chương trình ứng dụng hoạt động

tài nguyên máy tính là gì?
- Chia 2 loại: TN phần cứng / phần mềm
- Phần cứng: CPU, RAM, Storge, I/O
- Phần mềm: Files and Folders; Processes & Threads; 

Quản lý tài nguyên là gì?
 -> Là hệ điều hành phải theo dõi , cấp phát, thu hồi và kiếm soát tài nguyên

Điều phối tài nguyên:
-> Tài nguyên máy tính là những thành phần mà chương trình cần sử dụng để thực hiện công việc

Việc mở 2 tab cùng 1 lúc , và chỉ mở 1 tab tại thời điểm đó thì việc quản lý tài nguyên khác nhau như thế nào nhỉ?

Bản chất của việc điều phối tài nguyên:
- Hệ điều hành phài trả lời những câu hỏi:
	- Tài nguyên nào đang có?
	- Tài nguyên nào đang được sử dụng
	- Ai đang được sử dụng tài nguyên?
	- Ai đang yêu cầu tài nguyên?
	- Có thể cấp tài nguyên cho chương trình nào?
	- Cấp bao nhiêu?
	- Cấp trong bao lâu?
	- Khi nào phải thu hồi tài nguyên?

Nếu một máy tính không có hệ điều hành, máy tính đó có thể sử dụng được không?

Viết tắt của GUI -> Graphic Uers Interface
Viết tắt của CLI -> Command Line Interface 

Phân loại hệ điều hành:
- Theo thiết bị và môi trường sử dụng
- Theo khả năng và xử lý người dùng
- Theo phương thức xử lý
- Theo cách tổ chức 
- ...

Hệ điều hành chia sẻ tời gian
Khái niệm chia sẻ thời gian: Chia sẻ thời gian xử lý của processor
Nguyên tắc hoạt động tương đối giống với hệ điều hành đa chương
Chuyển processor từ tác vụ này sang tác vụ , tiến trình khác
Việc chuyển processor không phụ thuộc vào tác vụ hay tiến trình có đang truy cập thiết bị vào ra hay không mà phụ thuộc vào sự điều phối của processor của hệ điều hành
Thời gian chuyển đổi giữa các tác vụ, tiến trình là rất nhỏ -> cảm giác các tác vụ thực hiện song song -> khái niệm hệ điều hành đa nghiệm