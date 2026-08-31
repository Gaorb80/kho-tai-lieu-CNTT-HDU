# 🤝 Hướng dẫn đóng góp — kho-tai-lieu-cntt-hdu

Cảm ơn bạn đã quan tâm và muốn đóng góp cho **kho-tai-lieu-cntt-hdu**! Tài liệu này hướng dẫn chi tiết cách gửi đóng góp, dù bạn là người mới hoàn toàn với Git/GitHub hay đã quen thao tác Pull Request.

Không có đóng góp nào là quá nhỏ. Một đề thi, một bài tập, hay một lỗi chính tả được sửa đều có giá trị với ai đó ở khóa sau.

---

## 📋 Mục lục

- [Trước khi đóng góp](#-trước-khi-đóng-góp)
- [Cách 1: Đóng góp qua Issues (đơn giản, nhanh)](#-cách-1-đóng-góp-qua-issues-đơn-giản-nhanh)
- [Cách 2: Đóng góp qua Pull Request](#-cách-2-đóng-góp-qua-pull-request)
- [Đặt tài liệu vào đúng thư mục](#-đặt-tài-liệu-vào-đúng-thư-mục)
- [Quy tắc đặt tên file](#-quy-tắc-đặt-tên-file)
- [Đóng góp đề thi và tài liệu ôn tập](#-đóng-góp-đề-thi-và-tài-liệu-ôn-tập)
- [Checklist trước khi gửi](#-checklist-trước-khi-gửi)
- [Quy tắc ứng xử](#-quy-tắc-ứng-xử)

---

## ✅ Trước khi đóng góp

Hãy chắc chắn:

1. **Bạn có quyền chia sẻ tài liệu** — tài liệu tự viết, tự tổng hợp, hoặc được phép chia sẻ công khai. Không đăng tài liệu mật, tài liệu vi phạm bản quyền, hoặc thông tin cá nhân của người khác.
2. **Tài liệu không ảnh hưởng tới kỳ thi đang diễn ra** — ví dụ không đăng đề thi của một kỳ thi chưa kết thúc.
3. **Nội dung phù hợp với phạm vi repository** — tài liệu học tập, ôn thi, tham khảo liên quan tới chương trình CNTT-HDU hoặc kiến thức CNTT nói chung.

Nếu không chắc tài liệu có phù hợp không, cứ tạo Issue hỏi trước — không sao cả.

---

## 🟢 Cách 1: Đóng góp qua Issues (đơn giản, nhanh)

Đây là cách **dễ nhất**, phù hợp nếu bạn:

- Chưa quen thao tác Git/GitHub.
- Chỉ có một tài liệu nhỏ, gọn (một đề thi, một ghi chú, vài trang tóm tắt).
- Muốn gửi nhanh mà không cần tìm hiểu quy trình Pull Request.

### Các bước

1. Vào tab **[Issues](https://github.com/Gaorb80/kho-tai-lieu-cntt-hdu/issues)** của repository.
2. Nhấn **New issue**.
3. Đặt tiêu đề ngắn gọn, ví dụ:
   ```text
   [Đóng góp] Đề thi cuối kỳ - Cấu trúc dữ liệu và giải thuật - Kỳ 3
   ```
4. Trong nội dung issue, ghi rõ:
   - **Môn học** và **học kỳ** liên quan.
   - **Loại tài liệu**: đề thi / note / bài tập / tài liệu ôn tập / khác.
   - Nội dung tài liệu — có thể **copy - paste trực tiếp** vào issue (nếu là văn bản), hoặc **kéo-thả file/ảnh chụp** đính kèm (Word, PDF, ảnh chụp đề thi...).
   - Ghi chú thêm nếu cần (ví dụ: "đề này chưa có đáp án", "tài liệu tự tổng hợp từ slide + giáo trình").
5. Gửi issue. Người duy trì repository sẽ xem, xử lý và đưa tài liệu vào đúng vị trí trong cấu trúc thư mục.

> 💡 Bạn không cần tự tạo thư mục hay đặt tên file đúng chuẩn khi dùng cách này — chỉ cần cung cấp đủ thông tin, phần còn lại sẽ được hỗ trợ.

---

## 🔵 Cách 2: Đóng góp qua Pull Request

Phù hợp nếu bạn đã quen Git/GitHub và muốn tự tay đưa tài liệu vào đúng cấu trúc.

### Các bước

1. **Fork** repository về tài khoản GitHub của bạn.
2. **Clone** bản fork về máy:
   ```bash
   git clone https://github.com/<tên-tài-khoản-của-bạn>/kho-tai-lieu-cntt-hdu.git
   cd kho-tai-lieu-cntt-hdu
   ```
3. Tạo một nhánh mới cho đóng góp của bạn:
   ```bash
   git checkout -b them-de-thi-cau-truc-du-lieu
   ```
4. Thêm tài liệu vào đúng thư mục (xem [Đặt tài liệu vào đúng thư mục](#-đặt-tài-liệu-vào-đúng-thư-mục)).
5. Commit với message rõ ràng:
   ```bash
   git add .
   git commit -m "Thêm đề thi cuối kỳ môn Cấu trúc dữ liệu và giải thuật - Kỳ 3"
   ```
6. Push nhánh lên bản fork của bạn:
   ```bash
   git push origin them-de-thi-cau-truc-du-lieu
   ```
7. Vào GitHub, mở **Pull Request** từ nhánh của bạn vào nhánh `main` của repository gốc.
8. Trong mô tả Pull Request, ghi rõ tài liệu bạn thêm là gì, thuộc môn/kỳ nào, và xác nhận bạn có quyền chia sẻ tài liệu đó.

Người duy trì repository sẽ xem xét và merge sau khi kiểm tra.

---

## 📂 Đặt tài liệu vào đúng thư mục

Mỗi môn học có 3 thư mục con theo mô hình **Data → Process → Knowledge**:

```text
[Ki_X]/[Tên môn học]/
│
├── 01-Data/         → Giáo trình, slide, tài liệu gốc từ giảng viên, đề cương
├── 02-Process/       → Ghi chú cá nhân, bản nháp, nội dung đang xử lý (được phép lộn xộn)
└── 03-Knowledge/     → Kiến thức đã chuẩn hóa, đề thi, tài liệu ôn tập, bộ câu hỏi
```

Quy tắc chung khi chọn thư mục:

| Loại tài liệu | Đặt vào |
|---|---|
| Giáo trình, slide gốc, đề cương môn học | `01-Data/` |
| Ghi chú cá nhân, bản nháp, ý tưởng chưa hoàn chỉnh | `02-Process/` |
| Tóm tắt kiến thức đã chuẩn hóa, ví dụ, bài tập có lời giải | `03-Knowledge/` |
| **Đề thi, đề kiểm tra, đề cương ôn tập, bộ câu hỏi ôn thi** | `03-Knowledge/` |

Nếu môn học hoặc học kỳ bạn cần chưa tồn tại thư mục, bạn có thể tự tạo theo đúng cấu trúc trên (hoặc nhờ hỗ trợ nếu đóng góp qua Issues).

Tài liệu không thuộc môn học cụ thể (Git, Linux, kỹ năng lập trình chung...) đặt vào `09_Tai_lieu_ngoai_tham_khao_them/`.

---

## 🏷️ Quy tắc đặt tên file

Để tài liệu dễ tìm và dễ quản lý, hãy đặt tên file rõ ràng, không dấu, không khoảng trắng:

```text
[loai-tai-lieu]_[mon-hoc]_[mo-ta-ngan]_[hoc-ky-hoac-nam].[đuôi-file]
```

Ví dụ:

```text
de-thi-cuoi-ky_cau-truc-du-lieu_k28_2023.pdf
slide-bai-giang_co-so-du-lieu_chuong-3.pdf
ghi-chu_lap-trinh-web_session-va-cookie.md
de-cuong-on-tap_he-dieu-hanh_giua-ky.docx
```

Nguyên tắc:

- Dùng dấu gạch ngang `-` hoặc gạch dưới `_` thay cho khoảng trắng.
- Không dùng ký tự tiếng Việt có dấu trong tên file.
- Tên file nên đủ mô tả để người khác hiểu nội dung mà không cần mở file.

---

## 📝 Đóng góp đề thi và tài liệu ôn tập

Đề thi là loại tài liệu **được ưu tiên và hoan nghênh nhất**. Khi đóng góp đề thi, nếu có thể, hãy kèm thêm:

- Học kỳ / năm học của đề thi (nếu nhớ).
- Hình thức thi (trắc nghiệm, tự luận, thực hành...).
- Gợi ý đáp án, nếu bạn tự biên soạn (không bắt buộc).
- Ghi chú "đề khó / đề dễ / trọng tâm gì" nếu bạn muốn chia sẻ kinh nghiệm.

Trước khi đăng, hãy chắc chắn bạn có quyền chia sẻ đề thi đó và đề thi không thuộc một kỳ thi đang diễn ra.

---

## ✅ Checklist trước khi gửi

- [ ] Tôi có quyền chia sẻ tài liệu này.
- [ ] Tài liệu không chứa thông tin cá nhân hoặc nội dung mật.
- [ ] Tài liệu không ảnh hưởng tới kỳ thi đang diễn ra.
- [ ] Tôi đã đặt tài liệu vào đúng thư mục (`01-Data` / `02-Process` / `03-Knowledge`).
- [ ] Tên file rõ ràng, không dấu, không khoảng trắng.
- [ ] (Nếu dùng Pull Request) Message commit và mô tả PR rõ ràng, dễ hiểu.

---

## 💬 Quy tắc ứng xử

Repository này là không gian học tập chung của cộng đồng sinh viên CNTT-HDU. Khi tương tác trong Issues, Pull Request hoặc thảo luận, vui lòng:

- Tôn trọng người khác, giữ thái độ xây dựng.
- Góp ý về nội dung một cách lịch sự, tránh công kích cá nhân.
- Không đăng nội dung xúc phạm, spam, hoặc không liên quan tới mục đích học tập của repository.

Xem thêm chi tiết tại [`CODE_OF_CONDUCT.md`](./CODE_OF_CONDUCT.md).

---

Cảm ơn bạn đã góp phần xây dựng kho tài liệu này cho các khóa sau! 🎓
