# Báo cáo Bài tập lớn - Nhóm 7

## Thông tin nhóm
| STT | Họ và tên          | MSSV   | Vai trò      |
|-----|--------------------|--------|------------- |
| 1   | Nguyễn Minh Đức    | 24022779 | Thành viên |
| 2   | Bùi Minh Hòa       | 24022791 | Nhóm trưởng|
| 3   | Phạm Huy Hoàng     | 24022793 | Thành viên |
| 4   | Hoàng Nguyên Vũ    | 24022846 | Thành viên |
| 5   | Đỗ Khôi Nguyên     | 24022820 | Thành viên |

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
- Ràng buộc: Sử dụng đệ quy để giải quyết bài toán

### b. Thuật toán/Hướng tiếp cận
- Sử dụng backtracking:
    + Bắt đầu từ bước thứ nhất sẽ chọn 1 hướng di chuyển bất kì được liệt kê sẵn
    + Sau khi thực hiện 1 bước di chuyển, tiếp tục thực hiện các bước di chuyển tiếp theo tới khi tìm được con đường theo yêu cầu.
    + Nếu các bước tiếp theo không hợp lệ hoặc đã đi qua thì thực hiện việc quay đầu để tìm kiếm hướng đi khác

## Ưu điểm và nhược điểm của thuật toán được dùng
### a. Ưu điểm:
- Giải quyết được bài toán ở mức đạt yêu cầu (sử dụng đệ quy)
- Dễ dàng tiếp cận, mang tính trực quan cao
- Các nguồn tài liệu và chỉ dẫn có đầy đủ và dễ hiểu
- 
### b. Nhược điểm:
- Khi thực hiện ở bàn cờ lớn tầm 7x7 trở lên sẽ không đạt được tốc độ giải quyết đủ nhanh (độ phức tạp thời gian cao)
- Rất tốn bộ nhớ vì phải đệ quy nhiều lần

### c. Hướng khắc phục:
- Sử dụng kết hợp các phương pháp như Dynamic Programming hoặc Greedy
- Nâng cấp phần cứng
- Thêm vào các ràng buộc khác để có thể sử dụng phương pháp cắt tỉa

## Lưu ý: 
- Nên xem các video giải thích ở tốc độ 0.5x 
- Khi nhập tọa độ ban đầu cho mã, vì máy tính được đánh chỉ số bắt đầu từ 0 nên nếu muốn con mã bắt đầu ở vị trí x y thì cần nhập vào Terminal là x-1 y-1

## Ví dụ minh họa
### Ví dụ 1
- **Input:** 
    - Nhập đầu vào là độ lớn của bàn cờ: 3x3
    - Vị trí ban đầu của con mã: 0 0
- **Output:** 
    - Hình ảnh đầu ra: https://github.com/MinhDuc-book/BaiTapNhom/blob/main/Example%203x3.png
- **Giải thích:**
      - Video giải thích: https://github.com/MinhDuc-book/BaiTapNhom/blob/main/Example%203x3.mp4

### Ví dụ 2
- **Input:** 
    - Nhập đầu vào là độ lớn của bàn cờ: 5x5
    - Vị trí ban đầu của con mã: 4 4
- **Output:** 
    - Hình ảnh đầu ra: https://github.com/MinhDuc-book/BaiTapNhom/blob/main/Example%205x5.png
- **Giải thích:**
      - Video giải thích: https://github.com/MinhDuc-book/BaiTapNhom/blob/main/Example%205X5.mp4

### Ví dụ 3
- **Input:** 
    - Nhập đầu vào là độ lớn của bàn cờ: 8x8
    - Vị trí ban đầu của con mã: 4 5
- **Output:** 
    - Hình ảnh đầu ra: https://github.com/MinhDuc-book/BaiTapNhom/blob/main/Example%208x8.png
- **Giải thích:**
      - Video giải thích: https://github.com/MinhDuc-book/BaiTapNhom/blob/main/Example%208x8.mp4

## Link video báo cáo

## Link source code
https://github.com/MinhDuc-book/BaiTapNhom/tree/main/src
