# Báo cáo Bài tập lớn - Nhóm X

## Thông tin nhóm
| STT | Họ và tên          | MSSV   | Vai trò     |
|-----|--------------------|--------|-------------|
| 1   | Nguyễn Minh Đức    | 24022779 |   |
| 2   | Bùi Minh Hòa       | 24022791 |   |
| 3   | Phạm Huy Hoàng     | 24022793 |   |
| 4   | Hoàng Nguyên Vũ    | 24022846 |   |
| 5   | Đỗ Khôi Nguyên     | 24022820 |   |

## Thông tin bài tập
- **Tiêu đề:** Bài toán tìm đường đi cho con mã để có thể đi hết bàn cờ và không đi 1 ô 2 lần

## Hướng giải quyết bài toán
### a. Phân tích bài toán
- Mô tả vấn đề:
    + Vị trí ban đầu của con mã được người dùng nhập vào
    + Mỗi lần con mã muốn di chuyển thì có nhiều nhất 8 cách di chuyển. Cần phải thử từng cách di chuyển đó để có thể thực hiện được yêu cầu đề bài
    + Sau mỗi 1 lần di chuyển đó thì lại có thêm tối đa 8 cách di chuyển khác nữa
- Yêu cầu đầu vào - đầu ra:
    + Đầu vào:
        * Kích thước bàn cờ
        * Vị trí theo tọa độ của con mã ban đầu
    + Đầu ra:
        * Đường dẫn chỉ ra cách con mã đi được theo yêu cầu hoặc là thông báo không có đường đi hợp lệ
    + Ràng buộc:
        * Con mã phải di chuyển theo quy luật của trò chơi
        * Không được đi lại ô mà nó đã đi qua
- Các ràng buộc nếu có.

### b. Thuật toán/Hướng tiếp cận
- Sử dụng backtracking:
    + Bắt đầu từ bước thứ nhất sẽ chọn 1 hướng di chuyển bất kì được liệt kê sẵn
    + Sau khi thực hiện 1 bước di chuyển, tiếp tục thực hiện các bước di chuyển tiếp theo tới khi tìm được con đường theo yêu cầu.

## Ví dụ minh họa
### Ví dụ 1
- **Input:** 
    - Nhập đầu vào là độ lớn của bàn cờ: 8x8
    - Vị trí ban đầu của con mã: 4 5
- **Output:** 
    -
- **Giải thích:**

### Ví dụ 2
- **Input:** 
    - Nhập đầu vào là độ lớn của bàn cờ, vị trí ban đầu của con mã
    - Nếu nhập các con số không hợp lệ thì sẽ không thể chạy được chương trình
- **Output:** 
    - 
- **Giải thích:**

## Link video báo cáo

## Link source code
https://github.com/MinhDuc-book/BaiTapNhom/tree/main/src
