**Vai trò:** Bạn là một chuyên gia về Quản lý dự án mã nguồn mở (Open Source Project Management) và Tối ưu hóa tài liệu kỹ thuật (Technical Documentation), đặc biệt thành thạo với GitHub Flavored Markdown.

**Bối cảnh dự án:**
Tôi đang quản lý một repository GitHub cộng đồng tên là `kho-tai-lieu-cntt-hdu` (HDU IT Knowledge Base). Đây là kho tài liệu học tập do sinh viên ngành Công nghệ thông tin tại Đại học Hồng Đức xây dựng chung.
- **Mục tiêu:** Tạo ra một kho kiến thức bền vững, dễ đóng góp cho người mới và tối ưu hóa để sử dụng cùng các công cụ AI như NotebookLM.
- **Hiện trạng:** Repository đang hoạt động tốt nhưng cấu trúc thư mục và cách đặt tên trong tài liệu hướng dẫn (`README.md`, `CONTRIBUTING.md`) còn mang tính học thuật (dùng thuật ngữ DIKW: Data, Process, Knowledge), gây khó hiểu cho người mới và chưa phân loại rõ ràng các tài liệu đặc thù (Project lớn, Kỹ năng mềm).

**Nhiệm vụ của bạn:**
Hãy cập nhật lại nội dung của 2 file chính là `README.md` và `CONTRIBUTING.md` dựa trên các yêu cầu tinh chỉnh dưới đây. File `CODE_OF_CONDUCT.md` giữ nguyên vì không liên quan đến cấu trúc.

**Yêu cầu chi tiết cần thay đổi:**

1.  **Thay đổi triết lý đặt tên (Từ Học thuật sang Thực tế - KISS):**
    *   Thay thế mô hình `Data → Process → Knowledge` bằng mô hình hành động đơn giản: **`Nguon` → `Lam-viec` → `Tong-hop`**.
    *   Lý do: Giúp sinh viên nhìn tên folder là biết ngay phải làm gì (Đọc/Nháp/Tổng hợp) mà không cần hiểu lý thuyết xử lý thông tin.

2.  **Cập nhật cụ thể trong `README.md`:**
    *   **Phần "🧱 Mô hình tổ chức mỗi môn học":**
        *   Đổi sơ đồ cây từ `01-Data`, `02-Process`, `03-Knowledge` sang `01-Nguon`, `02-Lam-viec`, `03-Tong-hop`.
        *   Sửa phần mô tả:
            *   `01-Nguon`: Chứa Giáo trình, Slide (Tài liệu gốc để đọc).
            *   `02-Lam-viec`: Chứa ghi chú nháp, bản thử nghiệm (Chấp nhận lộn xộn).
            *   `03-Tong-hop`: Chứa bài tóm tắt, đề thi + lời giải, cheat sheet (Sản phẩm cuối để ôn tập/AI).
    *   **Phần "📦 Tài liệu ngoài chương trình":**
        *   Viết lại để giới thiệu cấu trúc mới bên trong folder `09_Tai_lieu_ngoai`:
            *   Thêm nhóm `01_Du_an_Code`: Dành cho Project lớn (Cấu trúc: `Yeu-cau` -> `Phat-trien` -> `Thanh-pham`).
            *   Thêm nhóm `02_Ky_nang_Bo_tro`: Dành cho Tiếng Anh, Git, Linux... (Tổ chức theo chủ đề, không chia 3 tầng).
    *   **Phần "🤖 Học cùng NotebookLM và AI":**
        *   Cập nhật hướng dẫn: Khuyên người dùng nạp dữ liệu từ folder `01-Nguon` (kiến thức nền) và `03-Tong-hop` (để tạo quiz/ôn tập), bỏ qua `02-Lam-viec` để tránh nhiễu.

3.  **Cập nhật cụ thể trong `CONTRIBUTING.md`:**
    *   **Phần "Cấu trúc thư mục":**
        *   Cập nhật sơ đồ hướng dẫn cho môn học chính khóa theo 3 tên mới (`Nguon`, `Lam-viec`, `Tong-hop`).
        *   Bổ sung hướng dẫn riêng cho 2 loại tài liệu đặc thù:
            *   Nếu đóng góp **Project lớn**: Hướng dẫn đặt vào `09_Tai_lieu_ngoai/01_Du_an_Code/`.
            *   Nếu đóng góp **Kỹ năng bổ trợ**: Hướng dẫn đặt vào `09_Tai_lieu_ngoai/02_Ky_nang_Bo_tro/` và tạo folder con theo chủ đề.
    *   Giữ nguyên tinh thần "đơn giản, không bắt buộc đúng chuẩn ngay" và khuyến khích dùng folder `00_Chua_phan_loai` nếu phân vân.

4.  **Phong cách viết:**
    *   Chuyên nghiệp nhưng gần gũi (xưng hô "bạn", "chúng ta").
    *   Ngắn gọn, súc tích, tránh dùng từ sáo rỗng hay quá trang trọng kiểu hành chính.
    *   Sử dụng Markdown chuẩn (in đậm, danh sách, code block) để làm nổi bật các thay đổi quan trọng.

**Dữ liệu đầu vào (Nội dung hiện tại của các file):**
*(Dán toàn bộ nội dung README.md và CONTRIBUTING.md hiện tại vào đây)*

**Kết quả mong đợi:**
Hãy trả về toàn bộ nội dung mới của file `README.md` và `CONTRIBUTING.md` đã được chỉnh sửa hoàn chỉnh, sẵn sàng để tôi commit lên GitHub. Giải thích ngắn gọn các điểm đã thay đổi ở cuối mỗi file nếu cần thiết.
