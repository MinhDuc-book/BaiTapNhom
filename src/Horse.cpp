#include <iostream>
#include <vector>

using namespace std;

// các vector chỉ hướng mà con mã có thể đi được theo luật chơi
vector<int> x_pos = {2, 2, -2, -2, 1, 1, -1, -1};
vector<int> y_pos = {1, -1, 1, -1, 2, -2, 2, -2};

// kiếm tra xem vị trí con mã có hợp lệ hay kh
bool isValid(int x, int y, int n, vector<vector<int>>& board) {
    return (x >= 0 && x < n && y >= 0 && y < n && board[x][y] == -1);
}

bool findRoad(int x, int y, int count, vector<vector<int>>& board, int n) {
    // nếu đã đi hết thì xong
    if (count == n * n) {
        return true;
    }

    for (int i = 0; i < 8; i++) {
        int nextX = x + x_pos[i];
        int nextY = y + y_pos[i];

        // Nếu bước tiếp theo hợp lệ thì kiểm tra bước tiếp theo nữa bằng cách gọi đệ quy
        if (isValid(nextX, nextY, n, board) == true) {
            board[nextX][nextY] = count;
            if (findRoad(nextX, nextY, count + 1, board, n) ==  true) {
                return true;
            } else {
                board[nextX][nextY] = -1; // đánh dấu chỗ chưa qua là -1
            }
        }
    }
    return false;
}

void printRoad(const vector<vector<int>>& board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Nhập kích thước cho bàn cờ: ";
    cin >> n;
    if (n <= 2) {
        cout << "Kích thước bàn cờ quá nhỏ hoặc không hợp lệ";
        return 1;
    }
    vector<vector<int>> board(n, vector<int>(n, -1));
    
    int startX = 0;
    int startY = 0;
    cout << "Nhập tọa độ ban đầu của con mã (x y): ";
    cin >> startX >> startY;
    if (startX < 0 || startX >= n || startY < 0 || startY >= n) {
        cout << "Vị trí ban đầu không hợp lệ";
        return 1;
    }
    board[startX][startY] = 0;

    if (findRoad(startX, startY, 1, board, n)) {
        cout << "Đường đi tìm được cho con mã là: " << endl;
        printRoad(board, n);
    } else {
        cout << "Không thể tìm được đường đi cho mã" << endl;
    }

    return 0;
}
