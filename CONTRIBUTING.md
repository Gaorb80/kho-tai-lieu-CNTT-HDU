# 🤝 Hướng dẫn đóng góp

Cảm ơn bạn đã muốn đóng góp cho **kho-tai-lieu-cntt-hdu**! Không có đóng góp nào là quá nhỏ — một đề thi, một ghi chú, hay một lỗi chính tả sửa lại đều có giá trị.

Tinh thần chung: **đơn giản, dễ tham gia**. Không cần đúng chuẩn ngay từ đầu — sai chỗ, thiếu format... đều có thể sửa sau.

---

## Cách 1 — Nhanh gọn: tạo Issue

Phù hợp nếu bạn chưa quen Git/GitHub, hoặc chỉ có một tài liệu nhỏ.

1. Vào tab **[Issues](https://github.com/Gaorb80/kho-tai-lieu-cntt-hdu/issues)** → **New issue** → chọn mẫu **📎 Đóng góp tài liệu**.
2. Ghi môn học/kỳ (nếu biết), rồi **copy-paste nội dung** hoặc **đính kèm file/ảnh**.

Vậy là xong — sẽ có người xem và sắp xếp giúp.

## Cách 2 — Qua Pull Request

Phù hợp nếu bạn đã quen Git/GitHub.

1. Fork repo → clone về máy.
2. Thêm tài liệu vào thư mục phù hợp (xem bên dưới). **Không chắc thì cứ để vào [`00_Chua_phan_loai/`](./00_Chua_phan_loai)** — sẽ có người sắp xếp lại sau.
3. Commit, push, mở Pull Request, ghi ngắn gọn bạn thêm/sửa gì.

---

## Cấu trúc thư mục (tham khảo, không bắt buộc phải đúng ngay)

Mỗi môn học chính khóa chia làm 3 phần dễ hiểu:

```text
[Môn học]/
├── 01-Nguon/         → Giáo trình, slide, đề cương và tài liệu gốc để đọc
├── 02-Lam-viec/      → Ghi chú nháp, bản thử nghiệm (được phép lộn xộn)
└── 03-Tong-hop/      → Tóm tắt, đề thi + lời giải, cheat sheet để ôn tập/AI
```

Đề thi, lời giải và tài liệu ôn tập đặt vào `03-Tong-hop/`.

### Project lớn và code

Đặt project lớn tại `09_Tai_lieu_ngoai/01_Du_an_Code/` và tạo một thư mục theo tên dự án:

```text
09_Tai_lieu_ngoai/01_Du_an_Code/[Ten-du-an]/
├── Yeu-cau/       → Bài toán, yêu cầu, thiết kế
├── Phat-trien/    → Mã nguồn và nội dung đang làm
└── Thanh-pham/    → Bản hoàn thiện, hướng dẫn dùng, báo cáo
```

### Kỹ năng bổ trợ

Đặt tài liệu Tiếng Anh, Git/GitHub, Linux, DevOps hoặc kỹ năng thực tế khác tại `09_Tai_lieu_ngoai/02_Ky_nang_Bo_tro/`. Tạo thư mục con theo chủ đề; loại tài liệu này **không cần** chia thành ba tầng.

```text
09_Tai_lieu_ngoai/02_Ky_nang_Bo_tro/
├── Git-GitHub/
├── Linux/
└── Tieng-Anh-CNTT/
```

**Không biết đặt vào đâu?** Cứ để vào `00_Chua_phan_loai/`, đừng để việc này cản trở bạn đóng góp.

---

## Vài lưu ý

- Chỉ chia sẻ tài liệu bạn có quyền chia sẻ (tự viết/tổng hợp, hoặc được phép công khai).
- Không đăng thông tin cá nhân, tài liệu mật, hoặc đề thi của kỳ thi đang diễn ra.
- Tên file rõ ràng thì tốt, nhưng không bắt buộc — không cần lo lắng quá.

Có câu hỏi gì cứ tạo Issue hỏi, đừng ngại. Xem thêm [Quy tắc ứng xử](./CODE_OF_CONDUCT.md) nếu cần.
