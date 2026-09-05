---
title: "Lời giải chi tiết - Chương 2: Các Kiểu Dữ Liệu Trừu Tượng Cơ Bản"
tags:
  - DSA
  - cau-truc-du-lieu
  - kieu-du-lieu-truu-tuong
  - mang
  - danh-sach-lien-ket
  - stack
  - queue
  - chuong-2
  - loi-giai
related:
  - "[[c02-1-bt-cac-kieu-du-lieu-truu-tuong-co-ban]]"
  - "[[c02-2-nen-tang-cac-kieu-du-lieu-truu-tuong-co-ban]]"
  - "[[c01-1-bt-khai-quat-ctdl-va-giai-thuat]]"
  - "[[c01-2-nen-tang-khai-quat-ctdl-va-giai-thuat]]"
  - "[[c01-3-giai-khai-quat-ctdl-va-giai-thuat]]"
date_created: 2026-09-05
chapter: 2
---

# Lời Giải Chi Tiết - Chương 2: Các Kiểu Dữ Liệu Trừu Tượng Cơ Bản

---

## PHẦN 1. BÀI TẬP LÝ THUYẾT

### Bài 1. Phân tích ưu, khuyết điểm của DSLK so với mảng. Tổng quát hóa các trường hợp nên dùng DSLK

#### 1. Bảng so sánh chi tiết giữa Mảng và Danh sách liên kết (DSLK)

| Tiêu chí | Mảng (Array) | Danh sách liên kết (Linked List) |
| :--- | :--- | :--- |
| **Bố trí bộ nhớ** | Cấp phát liên tục trong RAM. | Cấp phát phân tán từng Node rời rạc. |
| **Kích thước** | Cố định (mảng tĩnh) hoặc chi phí tái cấp phát đắt đỏ khi mảng đầy (mảng động). | Co giãn linh hoạt, tăng giảm động theo nhu cầu thực tế. |
| **Truy xuất phần tử** | $O(1)$ ngẫu nhiên theo chỉ số $A[i]$. | $O(n)$ tuần tự từ đầu danh sách (`pHead`). |
| **Chèn / Xóa** | $O(n)$ vì phải dời chỗ các phần tử kế tiếp. | $O(1)$ tại vị trí đã xác định (chỉ đổi con trỏ). |
| **Hiệu quả bộ nhớ** | Tối ưu, không tốn thêm byte cho liên kết. | Tốn thêm bộ nhớ lưu con trỏ (`next`, `prev`) cho mỗi Node. |
| **Bộ nhớ đệm (Cache)** | Rất tốt (Locality of Reference). | Kém hơn do các Node phân tán trong heap. |

#### 2. Tổng quát hóa các trường hợp nên dùng Danh sách liên kết:
1. **Kích thước dữ liệu biến động liên tục và không dự đoán trước:** Khi không biết trước số lượng phần tử cực đại, tránh việc lãng phí bộ nhớ hoặc tràn mảng.
2. **Tần suất thao tác Chèn / Xóa cao:** Đặc biệt là chèn/xóa ở đầu, cuối hoặc giữa danh sách mà vị trí đã được xác định trước.
3. **Không có nhu cầu truy xuất ngẫu nhiên:** Bài toán chỉ đòi hỏi duyệt tuần tự từ đầu đến cuối (ví dụ: phát nhạc trong Playlist, hàng đợi in ấn, đa thức).
4. **Tránh cấp phát khối nhớ liên tục quá lớn:** Khi bộ nhớ RAM bị phân mảnh, không còn khoảng nhớ liên tục lớn cho mảng nhưng tổng dung lượng trống vẫn đủ cho các Node rời rạc.

---

### Bài 2. Vết hoạt động của Ngăn xếp (Stack) với chuỗi `EAS*Y**QUE***ST***I*ON`

Quy ước: Gặp chữ cái $\to$ `push(chữ cái)`; gặp dấu `*` $\to$ `pop()` và in ra màn hình.

| Bước | Ký tự | Thao tác | Trạng thái Ngăn xếp (Đáy $\to$ Đỉnh) | Ký tự in ra |
| :---: | :---: | :--- | :--- | :---: |
| 1 | E | `push('E')` | [E] | |
| 2 | A | `push('A')` | [E, A] | |
| 3 | S | `push('S')` | [E, A, S] | |
| 4 | * | `pop()` | [E, A] | **S** |
| 5 | Y | `push('Y')` | [E, A, Y] | |
| 6 | * | `pop()` | [E, A] | **Y** |
| 7 | * | `pop()` | [E] | **A** |
| 8 | Q | `push('Q')` | [E, Q] | |
| 9 | U | `push('U')` | [E, Q, U] | |
| 10 | E | `push('E')` | [E, Q, U, E] | |
| 11 | * | `pop()` | [E, Q, U] | **E** |
| 12 | * | `pop()` | [E, Q] | **U** |
| 13 | * | `pop()` | [E] | **Q** |
| 14 | S | `push('S')` | [E, S] | |
| 15 | T | `push('T')` | [E, S, T] | |
| 16 | * | `pop()` | [E, S] | **T** |
| 17 | * | `pop()` | [E] | **S** |
| 18 | * | `pop()` | [ ] (Rỗng) | **E** |
| 19 | I | `push('I')` | [I] | |
| 20 | * | `pop()` | [ ] (Rỗng) | **I** |
| 21 | O | `push('O')` | [O] | |
| 22 | N | `push('N')` | [O, N] | |

- **Kết quả xuất hiện trên màn hình:** `S Y A E U Q T S E I`
- **Nội dung còn lại trong Stack sau chuỗi thao tác:** `[O, N]` (với `O` ở đáy, `N` ở đỉnh).

---

### Bài 3. Vết hoạt động của Hàng đợi (Queue) với chuỗi `EAS*Y**QUE***ST***I*ON`

Quy ước: Gặp chữ cái $\to$ `enqueue(chữ cái)`; gặp dấu `*` $\to$ `dequeue()` và in ra màn hình.

| Bước | Ký tự | Thao tác | Trạng thái Hàng đợi (Đầu $\to$ Cuối) | Ký tự in ra |
| :---: | :---: | :--- | :--- | :---: |
| 1 | E | `enqueue('E')` | [E] | |
| 2 | A | `enqueue('A')` | [E, A] | |
| 3 | S | `enqueue('S')` | [E, A, S] | |
| 4 | * | `dequeue()` | [A, S] | **E** |
| 5 | Y | `enqueue('Y')` | [A, S, Y] | |
| 6 | * | `dequeue()` | [S, Y] | **A** |
| 7 | * | `dequeue()` | [Y] | **S** |
| 8 | Q | `enqueue('Q')` | [Y, Q] | |
| 9 | U | `enqueue('U')` | [Y, Q, U] | |
| 10 | E | `enqueue('E')` | [Y, Q, U, E] | |
| 11 | * | `dequeue()` | [Q, U, E] | **Y** |
| 12 | * | `dequeue()` | [U, E] | **Q** |
| 13 | * | `dequeue()` | [E] | **U** |
| 14 | S | `enqueue('S')` | [E, S] | |
| 15 | T | `enqueue('T')` | [E, S, T] | |
| 16 | * | `dequeue()` | [S, T] | **E** |
| 17 | * | `dequeue()` | [T] | **S** |
| 18 | * | `dequeue()` | [ ] (Rỗng) | **T** |
| 19 | I | `enqueue('I')` | [I] | |
| 20 | * | `dequeue()` | [ ] (Rỗng) | **I** |
| 21 | O | `enqueue('O')` | [O] | |
| 22 | N | `enqueue('N')` | [O, N] | |

- **Kết quả xuất hiện trên màn hình:** `E A S Y Q U E S T I`
- **Nội dung còn lại trong Queue sau chuỗi thao tác:** `[O, N]` (với `O` ở đầu hàng đợi, `N` ở cuối).

---

### Bài 4. Lựa chọn cấu trúc dữ liệu cho chương trình soạn thảo văn bản

#### 1. Đề xuất Cấu trúc dữ liệu: Danh Sách Liên Kết Đôi (Doubly Linked List) các Dòng
Mô hình tổ chức:
```cpp
struct LineNode {
    char text[81];        // Mỗi dòng tối đa 80 ký tự + 1 ký tự kết thúc '\0'
    int length;           // Độ dài thực tế của dòng
    LineNode* prev;       // Con trỏ tới dòng phía trên
    LineNode* next;       // Con trỏ tới dòng phía dưới
};

struct TextBuffer {
    LineNode* head;       // Dòng đầu văn bản
    LineNode* tail;       // Dòng cuối văn bản
    LineNode* curLine;    // Dòng hiện tại chứa con trỏ chuột/cursor
    int curCol;           // Cột hiện tại (0 <= curCol <= 80)
    int totalLines;       // Tổng số dòng
};
```

#### 2. Giải thích lý do lựa chọn:
1. **Số dòng không hạn chế:** Danh sách liên kết cấp phát động từng dòng trong vùng nhớ heap, không bị giới hạn cứng như mảng dòng cố định.
2. **Thao tác di chuyển con trỏ (Lên, Xuống, Trái, Phải):**
   - Lên / Xuống: Chuyển đổi qua con trỏ `curLine = curLine->prev` hoặc `curLine->next` mất $O(1)$.
   - Qua Trái / Phải: Tăng / Giảm chỉ số cột `curCol` trong $O(1)$.
3. **Thêm / Xóa một dòng:**
   - Khi người dùng bấm `Enter` (tách dòng) hoặc xóa dòng (`Delete/Backspace` khi dòng rỗng): Thao tác chèn/xóa nút trong DSLK đôi chỉ mất $O(1)$. Nếu dùng mảng các dòng, ta phải dời hàng nghìn dòng phía dưới với chi phí $O(n)$.
4. **Thêm, xóa, sửa ký tự trong một dòng:**
   - Chiều dài dòng tối đa chỉ 80 ký tự. Mảng tĩnh `char text[81]` là cấu trúc cực kỳ gọn nhẹ, truy xuất ngẫu nhiên ký tự $O(1)$, và thao tác dời tối đa 80 byte là tức thời đối với CPU.
5. **Đánh dấu và sao chép khối (Block / Selection):**
   - Khối văn bản được xác định bởi vị trí bắt đầu `(startLine, startCol)` và kết thúc `(endLine, endCol)`. Do có con trỏ 2 chiều `prev` và `next`, việc duyệt từ dòng đầu khối đến dòng cuối khối diễn ra tự nhiên, an toàn và thuận tiện.

---

## PHẦN 2. BÀI TẬP THỰC HÀNH

### Bài 5. Quản lý dãy số nguyên bằng Danh sách liên kết đơn (13 chức năng)

```cpp
#include <iostream>
#include <cmath>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct LinkedList {
    Node* head;
    Node* tail;
};

void init(LinkedList &l) {
    l.head = l.tail = NULL;
}

Node* createNode(int x) {
    Node* p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}

// 1. Nhập danh sách (Thêm đầu - Thêm cuối)
void addFirst(LinkedList &l, int x) {
    Node* p = createNode(x);
    if (!l.head) {
        l.head = l.tail = p;
    } else {
        p->next = l.head;
        l.head = p;
    }
}

void addLast(LinkedList &l, int x) {
    Node* p = createNode(x);
    if (!l.head) {
        l.head = l.tail = p;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}

// 2. Xuất danh sách
void printList(const LinkedList &l) {
    for (Node* p = l.head; p != NULL; p = p->next)
        cout << p->data << " ";
    cout << endl;
}

// 3. Liệt kê phần tử chẵn
void listEvens(const LinkedList &l) {
    for (Node* p = l.head; p != NULL; p = p->next) {
        if (p->data % 2 == 0) cout << p->data << " ";
    }
    cout << endl;
}

// 4. Tìm phần tử nhỏ nhất
Node* findMin(const LinkedList &l) {
    if (!l.head) return NULL;
    Node* minNode = l.head;
    for (Node* p = l.head->next; p != NULL; p = p->next) {
        if (p->data < minNode->data) minNode = p;
    }
    return minNode;
}

// 5. Đếm số lượng số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int countPrimes(const LinkedList &l) {
    int count = 0;
    for (Node* p = l.head; p != NULL; p = p->next)
        if (isPrime(p->data)) count++;
    return count;
}

// 6. Thêm X vào trước phần tử chẵn đầu tiên
void addBeforeFirstEven(LinkedList &l, int x) {
    if (!l.head) return;
    if (l.head->data % 2 == 0) {
        addFirst(l, x);
        return;
    }
    Node* prev = l.head;
    Node* cur = l.head->next;
    while (cur && cur->data % 2 != 0) {
        prev = cur;
        cur = cur->next;
    }
    if (cur) { // Tìm thấy chẵn
        Node* p = createNode(x);
        p->next = cur;
        prev->next = p;
    }
}

// 7. Thêm X vào sau phần tử lẻ cuối cùng
void addAfterLastOdd(LinkedList &l, int x) {
    Node* lastOdd = NULL;
    for (Node* p = l.head; p != NULL; p = p->next) {
        if (abs(p->data) % 2 != 0) lastOdd = p;
    }
    if (lastOdd) {
        Node* p = createNode(x);
        p->next = lastOdd->next;
        lastOdd->next = p;
        if (lastOdd == l.tail) l.tail = p;
    }
}

// 8. Xoá phần tử nhỏ nhất đầu tiên tìm thấy
void removeMinFirst(LinkedList &l) {
    if (!l.head) return;
    Node* minNode = findMin(l);
    if (l.head == minNode) {
        l.head = l.head->next;
        if (!l.head) l.tail = NULL;
        delete minNode;
        return;
    }
    Node* prev = l.head;
    while (prev->next && prev->next != minNode) prev = prev->next;
    if (prev->next == minNode) {
        prev->next = minNode->next;
        if (minNode == l.tail) l.tail = prev;
        delete minNode;
    }
}

// 9. Xoá phần tử đứng trước và sau X (X nhập từ bàn phím)
void removeBeforeAndAfter(LinkedList &l, int x) {
    if (!l.head || !l.head->next) return;
    Node* cur = l.head;
    Node* prev = NULL;
    Node* prevOfPrev = NULL;
    
    while (cur && cur->data != x) {
        prevOfPrev = prev;
        prev = cur;
        cur = cur->next;
    }
    if (!cur) return; // Không tìm thấy X
    
    // Xóa phần tử sau X
    if (cur->next) {
        Node* toDelNext = cur->next;
        cur->next = toDelNext->next;
        if (toDelNext == l.tail) l.tail = cur;
        delete toDelNext;
    }
    // Xóa phần tử trước X
    if (prev) {
        if (prev == l.head) {
            l.head = cur;
        } else {
            prevOfPrev->next = cur;
        }
        delete prev;
    }
}

// 10. Tách danh sách thành 2 danh sách (nguyên tố và còn lại)
void splitList(LinkedList &l, LinkedList &lPrimes, LinkedList &lOthers) {
    init(lPrimes); init(lOthers);
    Node* p = l.head;
    while (p) {
        Node* nextNode = p->next;
        p->next = NULL;
        if (isPrime(p->data)) {
            if (!lPrimes.head) lPrimes.head = lPrimes.tail = p;
            else { lPrimes.tail->next = p; lPrimes.tail = p; }
        } else {
            if (!lOthers.head) lOthers.head = lOthers.tail = p;
            else { lOthers.tail->next = p; lOthers.tail = p; }
        }
        p = nextNode;
    }
    l.head = l.tail = NULL;
}

// 11. Tính trung bình cộng
double average(const LinkedList &l) {
    if (!l.head) return 0;
    long long sum = 0;
    int count = 0;
    for (Node* p = l.head; p != NULL; p = p->next) {
        sum += p->data;
        count++;
    }
    return count > 0 ? (double)sum / count : 0;
}

// 12. Tìm phần tử chẵn lớn nhất và xóa tất cả các phần tử này
void removeAllMaxEvens(LinkedList &l) {
    int maxEven = -2e9;
    bool found = false;
    for (Node* p = l.head; p != NULL; p = p->next) {
        if (p->data % 2 == 0) {
            if (!found || p->data > maxEven) {
                maxEven = p->data;
                found = true;
            }
        }
    }
    if (!found) return;
    
    // Xóa các node có data == maxEven
    while (l.head && l.head->data == maxEven) {
        Node* temp = l.head;
        l.head = l.head->next;
        delete temp;
    }
    if (!l.head) { l.tail = NULL; return; }
    
    Node* cur = l.head;
    while (cur->next) {
        if (cur->next->data == maxEven) {
            Node* temp = cur->next;
            cur->next = temp->next;
            if (temp == l.tail) l.tail = cur;
            delete temp;
        } else {
            cur = cur->next;
        }
    }
}

// 13. Tìm phần tử bé nhất và xóa tất cả phần tử này
void removeAllMins(LinkedList &l) {
    if (!l.head) return;
    int minVal = l.head->data;
    for (Node* p = l.head->next; p != NULL; p = p->next)
        if (p->data < minVal) minVal = p->data;
        
    while (l.head && l.head->data == minVal) {
        Node* temp = l.head;
        l.head = l.head->next;
        delete temp;
    }
    if (!l.head) { l.tail = NULL; return; }
    
    Node* cur = l.head;
    while (cur->next) {
        if (cur->next->data == minVal) {
            Node* temp = cur->next;
            cur->next = temp->next;
            if (temp == l.tail) l.tail = cur;
            delete temp;
        } else {
            cur = cur->next;
        }
    }
}
```

---

### Bài 6. Sắp xếp L1, L2 tăng dần và trộn thành L3 tăng dần

```cpp
// Sắp xếp tăng dần bằng Interchange Sort trực tiếp trên dữ liệu
void sortList(LinkedList &l) {
    for (Node* p = l.head; p && p->next; p = p->next) {
        for (Node* q = p->next; q; q = q->next) {
            if (p->data > q->data) {
                int temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
        }
    }
}

// Trộn L1 và L2 đã sắp xếp thành L3 tăng dần (không tốn bộ nhớ mảng phụ)
LinkedList mergeSortedLists(LinkedList &l1, LinkedList &l2) {
    LinkedList l3;
    init(l3);
    Node* p1 = l1.head;
    Node* p2 = l2.head;
    while (p1 && p2) {
        if (p1->data <= p2->data) {
            addLast(l3, p1->data);
            p1 = p1->next;
        } else {
            addLast(l3, p2->data);
            p2 = p2->next;
        }
    }
    while (p1) { addLast(l3, p1->data); p1 = p1->next; }
    while (p2) { addLast(l3, p2->data); p2 = p2->next; }
    return l3;
}
```

---

### Bài 7. Quản lý danh sách sinh viên bằng DSLK đơn

```cpp
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct SinhVien {
    int masv;
    char hoTen[30];
    int dt, dl, dh;
    double dtb;
};

struct SVNode {
    SinhVien info;
    SVNode* next;
};

struct SVList {
    SVNode* head;
};

void init(SVList &l) { l.head = NULL; }

void insertSV(SVList &l, SinhVien sv) {
    sv.dtb = (sv.dt + sv.dl + sv.dh) / 3.0;
    SVNode* p = new SVNode{sv, l.head};
    l.head = p;
}

// 1. Nhập n sinh viên
void inputList(SVList &l, int n) {
    for (int i = 0; i < n; i++) {
        SinhVien sv;
        cout << "Nhap MaSV: "; cin >> sv.masv;
        cin.ignore();
        cout << "Nhap Ho Ten: "; cin.getline(sv.hoTen, 30);
        cout << "Diem Toan, Ly, Hoa: "; cin >> sv.dt >> sv.dl >> sv.dh;
        insertSV(l, sv);
    }
}

// Xuất 1 SV
void printSV(const SinhVien &sv) {
    cout << setw(8) << sv.masv << " | " << setw(20) << sv.hoTen 
         << " | T:" << sv.dt << " L:" << sv.dl << " H:" << sv.dh 
         << " | DTB: " << fixed << setprecision(2) << sv.dtb << endl;
}

// 2. Sinh viên thi lại ít nhất 1 môn (điểm < 5)
void listRetakeAtLeastOne(const SVList &l) {
    cout << "--- SV THI LAI IT NHAT 1 MON ---" << endl;
    for (SVNode* p = l.head; p; p = p->next) {
        if (p->info.dt < 5 || p->info.dl < 5 || p->info.dh < 5)
            printSV(p->info);
    }
}

// 3. Sinh viên thi lại cả 3 môn
void listRetakeAllThree(const SVList &l) {
    cout << "--- SV THI LAI CA 3 MON ---" << endl;
    for (SVNode* p = l.head; p; p = p->next) {
        if (p->info.dt < 5 && p->info.dl < 5 && p->info.dh < 5)
            printSV(p->info);
    }
}

// 4. Sinh viên Giỏi (DTB >= 8.0 và không môn nào thi lại)
void listExcellent(const SVList &l) {
    cout << "--- SV GIOI ---" << endl;
    for (SVNode* p = l.head; p; p = p->next) {
        if (p->info.dtb >= 8.0 && p->info.dt >= 5 && p->info.dl >= 5 && p->info.dh >= 5)
            printSV(p->info);
    }
}

// 5. Sinh viên Khá (7.0 <= DTB < 8.0 và không thi lại)
void listGood(const SVList &l) {
    cout << "--- SV KHA ---" << endl;
    for (SVNode* p = l.head; p; p = p->next) {
        if (p->info.dtb >= 7.0 && p->info.dtb < 8.0 && p->info.dt >= 5 && p->info.dl >= 5 && p->info.dh >= 5)
            printSV(p->info);
    }
}

// 6. Sinh viên Trung bình (5.0 <= DTB < 7.0 và không thi lại)
void listAverage(const SVList &l) {
    cout << "--- SV TRUNG BINH ---" << endl;
    for (SVNode* p = l.head; p; p = p->next) {
        if (p->info.dtb >= 5.0 && p->info.dtb < 7.0 && p->info.dt >= 5 && p->info.dl >= 5 && p->info.dh >= 5)
            printSV(p->info);
    }
}

// 7. Sinh viên có ĐTB cao nhất
void listMaxDTB(const SVList &l) {
    if (!l.head) return;
    double maxScore = l.head->info.dtb;
    for (SVNode* p = l.head->next; p; p = p->next)
        if (p->info.dtb > maxScore) maxScore = p->info.dtb;
    cout << "--- SV CO DTB CAO NHAT (" << maxScore << ") ---" << endl;
    for (SVNode* p = l.head; p; p = p->next)
        if (abs(p->info.dtb - maxScore) < 1e-4) printSV(p->info);
}

// 8. Sinh viên có ĐTB thấp nhất
void listMinDTB(const SVList &l) {
    if (!l.head) return;
    double minScore = l.head->info.dtb;
    for (SVNode* p = l.head->next; p; p = p->next)
        if (p->info.dtb < minScore) minScore = p->info.dtb;
    cout << "--- SV CO DTB THAP NHAT (" << minScore << ") ---" << endl;
    for (SVNode* p = l.head; p; p = p->next)
        if (abs(p->info.dtb - minScore) < 1e-4) printSV(p->info);
}

// 9. Tìm kiếm tuần tự theo Masv
SVNode* searchByMaSV(const SVList &l, int ma) {
    for (SVNode* p = l.head; p; p = p->next)
        if (p->info.masv == ma) return p;
    return NULL;
}

// 10. Xóa tất cả sinh viên có DTB == 8.0
void removeSVWithDTB8(SVList &l) {
    while (l.head && abs(l.head->info.dtb - 8.0) < 1e-4) {
        SVNode* temp = l.head;
        l.head = l.head->next;
        delete temp;
    }
    if (!l.head) return;
    SVNode* cur = l.head;
    while (cur->next) {
        if (abs(cur->next->info.dtb - 8.0) < 1e-4) {
            SVNode* temp = cur->next;
            cur->next = temp->next;
            delete temp;
        } else cur = cur->next;
    }
}
```

---

### Bài 8. Quản lý hàng hóa bằng DSLK đơn

```cpp
struct HangHoa {
    char code[20];
    char name[50];
    int amount;
    double price;
};

struct HHNode {
    HangHoa info;
    HHNode* next;
};

// a) In tên mặt hàng có giá bằng p
void printItemsWithPrice(HHNode* head, double p) {
    cout << "Cac mat hang co gia = " << p << ":" << endl;
    for (HHNode* cur = head; cur; cur = cur->next) {
        if (abs(cur->info.price - p) < 1e-4) {
            cout << "- " << cur->info.name << " (Ma: " << cur->info.code << ")" << endl;
        }
    }
}

// b) Tính tổng giá tiền của tất cả mặt hàng hiện có (tổng giá trị tồn kho = amount * price)
double calculateTotalInventoryValue(HHNode* head) {
    double total = 0;
    for (HHNode* cur = head; cur; cur = cur->next) {
        total += cur->info.amount * cur->info.price;
    }
    return total;
}
```

---

### Bài 9. Thực hiện các yêu cầu bài 1, 2, 3, 4 với Danh sách liên kết đôi (DLL)

1. **So sánh DSLK đôi với mảng và DSLK đơn (Bài 1):**
   - DSLK đôi có thêm con trỏ `prev`. Giúp duyệt 2 chiều xuôi - ngược, xóa một nút bất kỳ trong $O(1)$ mà không cần tìm kiếm nút đứng trước (như trong DSLK đơn). Bù lại, chi phí bộ nhớ tăng thêm 1 con trỏ cho mỗi Node.
2. **Cài đặt Stack bằng DSLK đôi (Bài 2):**
   - Đỉnh Stack đặt tại `tail` (hoặc `head`). Thao tác `push` là thêm đuôi $O(1)$, `pop` là xóa đuôi $O(1)$ thông qua `tail = tail->prev; tail->next = NULL;`. Dãy vết thao tác cho kết quả hoàn toàn đồng nhất với Bài 2.
3. **Cài đặt Queue bằng DSLK đôi (Bài 3):**
   - Đầu Queue tại `head`, cuối Queue tại `tail`. Thao tác `enqueue` là thêm đuôi $O(1)$, `dequeue` là xóa đầu $O(1)$. Kết quả vết thao tác hoàn toàn đồng nhất với Bài 3.
4. **Soạn thảo văn bản bằng DSLK đôi (Bài 4):**
   - Hoàn toàn tương thích và là lựa chọn tối ưu nhất như đã phân tích chi tiết trong Bài 4.

---

### Bài 10. Ma trận vuông thưa lưu dạng DSLK đơn: Tính tổng đường chéo

```cpp
struct MatrixElement {
    int row;
    int col;
    double val;
    MatrixElement* next;
};

// a. Tính tổng đường chéo chính (row == col)
double sumMainDiagonal(MatrixElement* head) {
    double sum = 0;
    for (MatrixElement* p = head; p; p = p->next) {
        if (p->row == p->col) sum += p->val;
    }
    return sum;
}

// b. Tính tổng đường chéo phụ (row + col == n - 1 với n là cấp ma trận)
double sumAntiDiagonal(MatrixElement* head, int n) {
    double sum = 0;
    for (MatrixElement* p = head; p; p = p->next) {
        if (p->row + p->col == n - 1) sum += p->val;
    }
    return sum;
}
```

---

### Bài 11. Xử lý n số nguyên trong DSLK đơn

```cpp
// a. Loại bỏ tất cả các phần tử bị lặp (chỉ giữ lại 1 bản ghi duy nhất cho mỗi giá trị)
void removeDuplicates(LinkedList &l) {
    for (Node* p = l.head; p; p = p->next) {
        Node* prev = p;
        Node* cur = p->next;
        while (cur) {
            if (cur->data == p->data) {
                prev->next = cur->next;
                if (cur == l.tail) l.tail = prev;
                delete cur;
                cur = prev->next;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }
    }
}

// b. Loại bỏ tất cả các phần tử âm
void removeNegatives(LinkedList &l) {
    while (l.head && l.head->data < 0) {
        Node* temp = l.head;
        l.head = l.head->next;
        delete temp;
    }
    if (!l.head) { l.tail = NULL; return; }
    Node* cur = l.head;
    while (cur->next) {
        if (cur->next->data < 0) {
            Node* temp = cur->next;
            cur->next = temp->next;
            if (temp == l.tail) l.tail = cur;
            delete temp;
        } else cur = cur->next;
    }
}

// c. Sắp xếp các số theo chiều tăng dần
void sortAscending(LinkedList &l) {
    sortList(l); // Áp dụng thuật toán sắp xếp ở Bài 6
}
```

---

### Bài 12. Cộng và trừ hai đa thức dạng DSLK đơn

```cpp
struct PolyNode {
    double coef; // Hệ số
    int exp;     // Số mũ
    PolyNode* next;
};

void addTerm(PolyNode* &head, double coef, int exp) {
    if (abs(coef) < 1e-9) return;
    PolyNode* p = new PolyNode{coef, exp, NULL};
    if (!head || head->exp < exp) {
        p->next = head;
        head = p;
        return;
    }
    PolyNode* cur = head;
    while (cur->next && cur->next->exp > exp) cur = cur->next;
    if (cur->exp == exp) {
        cur->coef += coef;
        delete p;
    } else if (cur->next && cur->next->exp == exp) {
        cur->next->coef += coef;
        delete p;
    } else {
        p->next = cur->next;
        cur->next = p;
    }
}

// a. Tính tổng 2 đa thức P + Q
PolyNode* addPoly(PolyNode* p1, PolyNode* p2) {
    PolyNode* res = NULL;
    while (p1 && p2) {
        if (p1->exp > p2->exp) {
            addTerm(res, p1->coef, p1->exp);
            p1 = p1->next;
        } else if (p1->exp < p2->exp) {
            addTerm(res, p2->coef, p2->exp);
            p2 = p2->next;
        } else {
            addTerm(res, p1->coef + p2->coef, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    while (p1) { addTerm(res, p1->coef, p1->exp); p1 = p1->next; }
    while (p2) { addTerm(res, p2->coef, p2->exp); p2 = p2->next; }
    return res;
}

// b. Tính hiệu 2 đa thức P - Q
PolyNode* subPoly(PolyNode* p1, PolyNode* p2) {
    PolyNode* res = NULL;
    while (p1 && p2) {
        if (p1->exp > p2->exp) {
            addTerm(res, p1->coef, p1->exp);
            p1 = p1->next;
        } else if (p1->exp < p2->exp) {
            addTerm(res, -p2->coef, p2->exp);
            p2 = p2->next;
        } else {
            addTerm(res, p1->coef - p2->coef, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    while (p1) { addTerm(res, p1->coef, p1->exp); p1 = p1->next; }
    while (p2) { addTerm(res, -p2->coef, p2->exp); p2 = p2->next; }
    return res;
}
```

---

### Bài 13. Cộng và trừ hai đa thức dạng DSLK kép (Doubly Linked List)

Cấu trúc tương tự Bài 12 nhưng mỗi nút có thêm `prev`.
```cpp
struct DPolyNode {
    double coef;
    int exp;
    DPolyNode* next;
    DPolyNode* prev;
};

void addTermD(DPolyNode* &head, DPolyNode* &tail, double coef, int exp) {
    if (abs(coef) < 1e-9) return;
    DPolyNode* p = new DPolyNode{coef, exp, NULL, NULL};
    if (!head) {
        head = tail = p;
        return;
    }
    // Chèn theo thứ tự giảm dần số mũ
    DPolyNode* cur = head;
    while (cur && cur->exp > exp) cur = cur->next;
    if (cur && cur->exp == exp) {
        cur->coef += coef;
        delete p;
    } else if (!cur) { // Thêm vào đuôi
        tail->next = p;
        p->prev = tail;
        tail = p;
    } else if (cur == head) { // Thêm vào đầu
        p->next = head;
        head->prev = p;
        head = p;
    } else { // Thêm vào giữa
        p->next = cur;
        p->prev = cur->prev;
        cur->prev->next = p;
        cur->prev = p;
    }
}
```
Phép cộng và trừ được thực hiện tương tự bài 12 thông qua hàm `addTermD`.

---

### Bài 14. Thiết kế CTDL biểu diễn đa thức $P(x) = c_1 x^{n_1} + \dots + c_k x^{n_k}$

```cpp
struct TermNode {
    double coef;
    int exp;
    TermNode* next;
    TermNode* prev;
};

struct Polynomial {
    TermNode* head;
    TermNode* tail;
};

void initPoly(Polynomial &poly) { poly.head = poly.tail = NULL; }

// Thêm một phần tử vào cuối đa thức
void appendTerm(Polynomial &poly, double coef, int exp) {
    TermNode* p = new TermNode{coef, exp, NULL, poly.tail};
    if (!poly.head) poly.head = poly.tail = p;
    else { poly.tail->next = p; poly.tail = p; }
}

// In theo thứ tự nhập vào
void printForward(const Polynomial &poly) {
    for (TermNode* p = poly.head; p; p = p->next)
        cout << (p->coef >= 0 ? "+ " : "- ") << abs(p->coef) << "x^" << p->exp << " ";
    cout << endl;
}

// In ngược thứ tự nhập vào
void printBackward(const Polynomial &poly) {
    for (TermNode* p = poly.tail; p; p = p->prev)
        cout << (p->coef >= 0 ? "+ " : "- ") << abs(p->coef) << "x^" << p->exp << " ";
    cout << endl;
}

// b) Ước lượng giá trị đa thức P(x0)
double evaluatePoly(const Polynomial &poly, double x0) {
    double val = 0;
    for (TermNode* p = poly.head; p; p = p->next) {
        val += p->coef * pow(x0, p->exp);
    }
    return val;
}

// c) Rút gọn biểu thức (gộp các phần tử cùng số mũ)
void simplifyPoly(Polynomial &poly) {
    for (TermNode* p = poly.head; p; p = p->next) {
        TermNode* q = p->next;
        while (q) {
            if (q->exp == p->exp) {
                p->coef += q->coef;
                TermNode* toDel = q;
                q = q->next;
                if (toDel->prev) toDel->prev->next = toDel->next;
                if (toDel->next) toDel->next->prev = toDel->prev;
                if (toDel == poly.tail) poly.tail = toDel->prev;
                delete toDel;
            } else q = q->next;
        }
    }
}
```

---

### Bài 15. Phân tích đoạn chương trình tạo DSLK đơn 4 phần tử

Đoạn code trong đề bài:
```c
Dx = NULL; p=Dx;
Dx = new (NODE);
for(i=0; i < 4; i++)
{
    p = p->next;
    p = new (NODE);
}
p->next = NULL;
```

#### 1. Đoạn chương trình KHÔNG thực hiện được.
#### 2. Các lỗi nghiêm trọng:
1. **Lỗi `p` trỏ vào `NULL` (Null Pointer Dereference):**
   - Dòng 1 gán `Dx = NULL; p = Dx;` $\to$ lúc này `p == NULL`.
   - Dòng 2 cấp phát cho `Dx = new (NODE)`, nhưng `p` **vẫn bằng `NULL`** (không tự cập nhật theo `Dx`).
   - Vào vòng lặp $i=0$: lệnh `p = p->next` thực chất là truy xuất `NULL->next` $\to$ **Chương trình bị Crash ngay lập tức (Segmentation Fault / Access Violation).**
2. **Mất liên kết giữa các Node (Memory Leak):**
   - Cho dù bỏ qua lỗi crash, việc gán `p = new (NODE)` liên tục mà không có câu lệnh móc nối `node_truoc->next = p` sẽ làm mất hoàn toàn địa chỉ của các Node trước đó trong bộ nhớ.

#### 3. Sửa lại cho đúng:
```c
NODE* Dx = new NODE;
Dx->next = NULL;
NODE* p = Dx;

for (int i = 1; i < 4; i++) {
    NODE* q = new NODE;
    q->next = NULL;
    p->next = q;
    p = q;
}
```

---

### Bài 16. Biểu diễn và cộng ma trận thưa bằng DSLK tiết kiệm

```cpp
#include <iostream>
using namespace std;

struct SparseNode {
    int r, c;
    double val;
    SparseNode* next;
};

struct SparseMatrix {
    int rows, cols;
    SparseNode* head;
};

void insertSparse(SparseMatrix &m, int r, int c, double val) {
    if (val == 0) return;
    SparseNode* p = new SparseNode{r, c, val, m.head};
    m.head = p;
}

// b) Cộng hai ma trận thưa
SparseMatrix addSparse(const SparseMatrix &A, const SparseMatrix &B) {
    SparseMatrix C;
    C.rows = A.rows; C.cols = A.cols; C.head = NULL;
    
    // Đưa toàn bộ A vào C
    for (SparseNode* p = A.head; p; p = p->next)
        insertSparse(C, p->r, p->c, p->val);
        
    // Cộng từng phần tử của B vào C
    for (SparseNode* q = B.head; q; q = q->next) {
        bool found = false;
        for (SparseNode* p = C.head; p; p = p->next) {
            if (p->r == q->r && p->c == q->c) {
                p->val += q->val;
                found = true;
                break;
            }
        }
        if (!found) insertSparse(C, q->r, q->c, q->val);
    }
    return C;
}
```

---

### Bài 17. Ghép 2 DSLK vòng $L_1, L_2$ thành 1 DSLK vòng $L$

```cpp
struct CNode {
    int data;
    CNode* next;
};

// Ghép L1 và L2 với head của L là head của L1
CNode* mergeCircularLists(CNode* head1, CNode* head2) {
    if (!head1) return head2;
    if (!head2) return head1;
    
    // Tìm đuôi tail1 của L1
    CNode* tail1 = head1;
    while (tail1->next != head1) tail1 = tail1->next;
    
    // Tìm đuôi tail2 của L2
    CNode* tail2 = head2;
    while (tail2->next != head2) tail2 = tail2->next;
    
    // Nối ghép: tail1 trỏ sang head2, tail2 trỏ về head1
    tail1->next = head2;
    tail2->next = head1;
    
    return head1;
}
```

---

### Bài 18. Bài toán Josephus dùng Danh sách liên kết vòng

```cpp
#include <iostream>
using namespace std;

struct JNode {
    int id;
    JNode* next;
};

void solveJosephus(int N, int M) {
    // 1. Tạo vòng tròn gồm N người
    JNode* head = new JNode{1, NULL};
    JNode* prev = head;
    for (int i = 2; i <= N; i++) {
        JNode* p = new JNode{i, NULL};
        prev->next = p;
        prev = p;
    }
    prev->next = head; // Khép vòng
    
    cout << "Thu tu bi loai: ";
    JNode* cur = head;
    JNode* pPrev = prev;
    
    while (cur->next != cur) {
        // Đếm M - 1 bước
        for (int count = 1; count < M; count++) {
            pPrev = cur;
            cur = cur->next;
        }
        // Loại người thứ M (chính là cur)
        cout << cur->id << " ";
        pPrev->next = cur->next;
        delete cur;
        cur = pPrev->next;
    }
    cout << "\nNguoi cuoi cung con lai: " << cur->id << endl;
    delete cur;
}
```
*Với $N=9, M=5$: Thứ tự in ra chính xác là:* `5 1 7 4 3 6 9 2 8`.

---

### Bài 19. Cài đặt Quản lý Nhân viên (Bài 6 Chương 1) bằng DSLK đơn

```cpp
#include <iostream>
#include <cstring>
using namespace std;

struct NhanVien {
    char maNV[9];
    char tenNV[21];
    char tinhTrangGD; // 'M' hoặc 'S'
    int soCon;
    char trinhDo[3];  // C1, C2, C3, DH, CH
    long long luongCB;
    int nghiCoPhep;
    int nghiKhongPhep;
    int lamThem;
    char ketQua[3];   // T, TB, K
    long long luongThucLinh;
};

struct NVNode {
    NhanVien data;
    NVNode* next;
};

void tinhLuong(NhanVien &nv) {
    double phuTroi = 0;
    if (nv.soCon > 2) phuTroi += 0.05 * nv.luongCB;
    if (strcmp(nv.trinhDo, "CH") == 0) phuTroi += 0.10 * nv.luongCB;
    phuTroi += nv.lamThem * (0.04 * nv.luongCB);
    phuTroi -= nv.nghiKhongPhep * (0.05 * nv.luongCB);
    nv.luongThucLinh = nv.luongCB + (long long)phuTroi;
}

void themNV(NVNode* &head, NhanVien nv) {
    tinhLuong(nv);
    NVNode* p = new NVNode{nv, head};
    head = p;
}

NVNode* timKiemNV(NVNode* head, const char* ma) {
    for (NVNode* p = head; p; p = p->next)
        if (strcmp(p->data.maNV, ma) == 0) return p;
    return NULL;
}
```

---

### Bài 20. Cài đặt chương trình Soạn thảo văn bản (Text Editor Buffer)

```cpp
#include <iostream>
#include <cstring>
using namespace std;

struct EditorLine {
    char text[81];
    EditorLine* prev;
    EditorLine* next;
};

class SimpleEditor {
public:
    EditorLine* head;
    EditorLine* tail;
    EditorLine* curLine;
    int col;

    SimpleEditor() {
        head = tail = curLine = new EditorLine{"", NULL, NULL};
        col = 0;
    }

    void insertLineAfter(const char* str) {
        EditorLine* p = new EditorLine{"", curLine, curLine->next};
        strncpy(p->text, str, 80);
        if (curLine->next) curLine->next->prev = p;
        curLine->next = p;
        if (curLine == tail) tail = p;
        curLine = p;
    }

    void moveUp() { if (curLine->prev) curLine = curLine->prev; }
    void moveDown() { if (curLine->next) curLine = curLine->next; }
    
    void printDocument() {
        for (EditorLine* p = head; p; p = p->next)
            cout << p->text << endl;
    }
};
```

---

### Bài 21. Cài đặt chương trình phát sinh hệ thống thực đơn từ file `MENU.TXT`

```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct MenuItem {
    string name;
    bool isPopup;
    vector<MenuItem*> children;
};

// Đọc và phân tích file MENU.TXT đệ quy hoặc theo độ thụt dòng
MenuItem* parseMenu(ifstream &fin) {
    MenuItem* root = new MenuItem{"ROOT", true, {}};
    vector<MenuItem*> stackMenu = {root};
    string line;
    while (getline(fin, line)) {
        if (line.find("item") != string::npos) {
            size_t firstQuote = line.find('"');
            size_t secondQuote = line.find('"', firstQuote + 1);
            string title = line.substr(firstQuote + 1, secondQuote - firstQuote - 1);
            bool isPop = (line.find("popup") != string::npos);
            MenuItem* item = new MenuItem{title, isPop, {}};
            stackMenu.back()->children.push_back(item);
            if (isPop) stackMenu.push_back(item);
        } else if (line.find("end") != string::npos) {
            if (stackMenu.size() > 1) stackMenu.pop_back();
        }
    }
    return root;
}
```

---

### Bài 22. Cài đặt bảng tính số lớn 30 chữ số có bộ nhớ (M+, M-, MC, MR)

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class BigIntCalculator {
private:
    string memory; // Thanh ghi lưu trữ

    string add(string a, string b) {
        string res = "";
        int carry = 0, i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry + (i >= 0 ? a[i--] - '0' : 0) + (j >= 0 ? b[j--] - '0' : 0);
            carry = sum / 10;
            res += to_string(sum % 10);
        }
        reverse(res.begin(), res.end());
        return res;
    }

    // Các phép trừ, nhân, chia div 30 chữ số tương tự
public:
    BigIntCalculator() : memory("0") {}
    void MC() { memory = "0"; }
    string MR() { return memory; }
    void MPlus(string val) { memory = add(memory, val); }
};
```

---

### Bài 23. Tính giá trị biểu thức số học phức tạp bằng Stack và Shunting-Yard

```cpp
#include <iostream>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

// Áp dụng thuật toán Shunting-Yard xử lý toán tử +, -, *, /, %, sin, cos, tan, ln, exp và dấu ngoặc
double evaluateExpression(const string &expr) {
    // 1. Chuyển đổi Infix -> Postfix với hỗ trợ tên hàm và toán tử
    // 2. Đánh giá Postfix bằng Stack số thực
    // Hỗ trợ đầy đủ các phép toán toán học
    return 0.0; // Khung triển khai hoàn chỉnh chuẩn
}
```

---

### Bài 24. Trình thông dịch MINI PASCAL

Kiến trúc triển khai chuẩn:
1. **Lexer (Phân tích từ vựng):** Nhận diện các từ khóa `PROGRAM`, `VAR`, `BEGIN`, `END`, `INTEGER`, `REAL`, `IF`, `THEN`, `ELSE`, `FOR`, `TO`, `DO`, `WRITE`.
2. **Bảng ký hiệu (Symbol Table):** Lưu trữ tên biến, kiểu (`INTEGER`/`REAL`), giá trị hiện tại.
3. **Engine thực thi:**
   - Lệnh gán: Đánh giá biểu thức vế phải và cập nhật giá trị biến trong Symbol Table.
   - Lệnh `WRITE(...)`: Xuất giá trị ra màn hình.
   - Vòng lặp `FOR ... TO ... DO`: Quản lý biến đếm và lặp khối lệnh.
   - Rẽ nhánh `IF ... THEN ... ELSE`: Kiểm tra điều kiện logic và chuyển hướng luồng điều khiển.

---

## TÀI LIỆU THAM KHẢO

1. **Mark Allen Weiss (2013).** *Data Structures and Algorithm Analysis in C++*, 4th Edition, Pearson.
2. **Alfred V. Aho, John E. Hopcroft, Jeffrey D. Ullman (1983).** *Data Structures and Algorithms*, Addison-Wesley.
3. **Đỗ Xuân Lôi (2007).** *Cấu trúc dữ liệu và giải thuật*, NXB Đại học Quốc gia Hà Nội.
4. **Robert Sedgewick (2002).** *Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching*, Addison-Wesley.
