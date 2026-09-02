# Câu 2 - Dạng bài hợp ngữ  (Assembly)

## 1. HỆ THỐNG THANH GHI (REGISTERS) QUAN TRỌNG

Máy tính không tính toán trực tiếp trên bộ nhớ (RAM) mà phải kéo dữ liệu vào các thanh ghi (nằm trong CPU).

Bạn cần nhớ 4 thanh ghi đa dụng chính (mỗi thanh ghi rộng 16-bit, được chia làm 2 nửa 8-bit: Cao - H và Thấp - L):

- **AX (Accumulator - Thanh ghi tích lũy):** Gồm `AH` và `AL`. Đây là thanh ghi quan trọng nhất, bắt buộc phải dùng trong các lệnh nhân/chia (`MUL`/`DIV`) và lệnh vào/ra (`IN`/`OUT`).
    
- **BX (Base - Thanh ghi cơ sở):** Gồm `BH` và `BL`. Thường dùng để chứa dữ liệu hoặc địa chỉ ô nhớ.
    
- **CX (Count - Thanh ghi đếm):** Gồm `CH` và `CL`.
    
- **DX (Data - Thanh ghi dữ liệu):** Gồm `DH` và `DL`. Dùng để chứa phần mở rộng của AX khi nhân/chia 16-bit hoặc chứa địa chỉ cổng I/O.
    

_(Lưu ý: Không bao giờ có lệnh ghép lệch kiểu `MOV AH, BX` vì một bên 8-bit, một bên 16-bit)._

## 2. QUY TẮC NHẬN DIỆN TOÁN HẠNG (CHẾ ĐỘ ĐỊA CHỈ)

Khi đọc một lệnh, bạn phải phân biệt được cái gì là "giá trị trực tiếp" và cái gì là "địa chỉ".

- **Giá trị tức thời (Hằng số):** Thường đi kèm dấu `#` (VD: `#400`, `#1200`) hoặc viết thẳng con số có đuôi `H` (Hexa).
    
    - _Ví dụ:_ `MOV AX, 0FFFFH` nạp thẳng giá trị FFFFH vào AX.
        
- **Thanh ghi:** Ghi tên thanh ghi (`AX`, `BL`, `R1`, `R2`).
    
- **Địa chỉ ô nhớ:** Đặt trong dấu ngoặc vuông `[...]` hoặc ngoặc đơn `(...)` hoặc tên biến (`MEM1`).
    
    - _Ví dụ:_ `(R1)` hoặc `[BX]` nghĩa là **"Lấy dữ liệu nằm ở ô nhớ có địa chỉ đang được chứa trong R1/BX"**.
        

## 3. QUY TẮC VÀNG CHO LỆNH NHÂN (MUL) VÀ LỆNH CHIA (DIV)

Đây là phần dễ mất điểm nhất nếu không nhớ quy tắc ngầm của AX và DX. Các lệnh này chỉ có 1 toán hạng (là nguồn), toán hạng đích luôn được máy tính ngầm tự hiểu.

### Phép nhân (MUL)

- **Nhân 8-bit:** `MUL BL`
    
    - Máy tự lấy: $AL \times BL$
        
    - Kết quả lưu vào: **AX** (16-bit).
        
- **Nhân 16-bit:** `MUL BX`
    
    - Máy tự lấy: $AX \times BX$
        
    - Kết quả lưu vào cặp thanh ghi: **DX:AX** (DX chứa phần cao, AX chứa phần thấp).
        

### Phép chia (DIV)

Trước khi chia 16-bit, **bắt buộc phải xóa thanh ghi DX** (`MOV DX, 0000H`) để tránh dữ liệu rác gây sai kết quả.

- **Chia 16-bit cho 8-bit:** `DIV BL`
    
    - Máy tự lấy: $AX / BL$
        
    - Thương số lưu vào **AL**, số dư lưu vào **AH**.
        
- **Chia 32-bit cho 16-bit:** `DIV BX`
    
    - Máy tự lấy cặp: $DX:AX / BX$
        
    - Thương số lưu vào **AX**, số dư lưu vào **DX**.
        

## 4. TỪ ĐIỂN CÁC LỆNH BẮT BUỘC PHẢI THUỘC (Theo đề cương)

|**Nhóm lệnh**|**Lệnh**|**Cú pháp**|**Ý nghĩa thao tác**|
|---|---|---|---|
|**Gán & Chép**|**`MOV`**|`MOV Đích, Nguồn`|Chép dữ liệu từ nguồn sang đích. (Đích bị đè giá trị mới, nguồn giữ nguyên).|
||**`XCHG`**|`XCHG Đích, Nguồn`|Tráo đổi chéo dữ liệu giữa đích và nguồn.|
|**Tính toán**|**`ADD`**|`ADD Đích, Nguồn`|Đích = Đích + Nguồn.|
||**`SUB`**|`SUB Đích, Nguồn`|Đích = Đích - Nguồn.|
|**Địa chỉ**|**`LEA`**|`LEA Reg, [Mem]`|Nạp **địa chỉ** của ô nhớ vào thanh ghi, tuyệt đối không lấy dữ liệu bên trong ô nhớ đó.|
|**Ngăn xếp**|**`PUSH`**|`PUSH Reg`|Cất dữ liệu của thanh ghi (VD: `BX`) lên đỉnh ngăn xếp Stack.|
|**Vào/Ra (I/O)**|**`IN`**|`IN AL/AX, Cổng`|Đọc dữ liệu từ thiết bị ngoại vi (Cổng) đưa vào thanh ghi tích lũy `AL` (8-bit) hoặc `AX` (16-bit).|
||**`OUT`**|`OUT Cổng, AL/AX`|Đẩy dữ liệu từ thanh ghi `AL`/`AX` ra cổng thiết bị ngoại vi.|

**Mẹo áp dụng:** Khi gặp một đoạn code dài (như bài tính `B843/(987-DA)`), hãy lấy giấy nháp ra và viết lại trạng thái của các thanh ghi thay đổi sau từng dòng lệnh. Luôn quy đổi mọi thứ về hệ thập phân hoặc hệ Hexa để cộng trừ cho dễ, rồi mới dịch ngược lại mã máy nếu đề yêu cầu.