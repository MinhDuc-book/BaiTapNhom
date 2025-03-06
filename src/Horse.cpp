#include <iostream>
#include <vector>

using namespace std;

// direction of Knight
vector<int> x_pos = {2, 2, -2, -2, 1, 1, -1, -1};
vector<int> y_pos = {1, -1, 1, -1, 2, -2, 2, -2};

// check for valid
bool isValid(int x, int y, int n, vector<vector<int>>& board) {
    return (x >= 0 && x < n && y >= 0 && y < n && board[x][y] == -1);
}

bool findRoad(int x, int y, int count, vector<vector<int>>& board, int n) {
    if (count == n * n) {
        return true;
    }

    for (int i = 0; i < 8; i++) {
        int nextX = x + x_pos[i];
        int nextY = y + y_pos[i];

        if (isValid(nextX, nextY, n, board) == true) {
            board[nextX][nextY] = count;
            if (findRoad(nextX, nextY, count + 1, board, n) ==  true) {
                return true;
            } else {
                board[nextX][nextY] = -1;
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
    cout << "Size of board: ";
    cin >> n;
    if (n <= 2) {
        cout << "Size of board too small or not valid";
        return 1;
    }
    vector<vector<int>> board(n, vector<int>(n, -1));
    
    int startX = 0;
    int startY = 0;
    cout << "Start position of Knight (x y): ";
    cin >> startX >> startY;
    if (startX < 0 || startX >= n || startY < 0 || startY >= n) {
        cout << "Start position not valid";
        return 1;
    }
    board[startX][startY] = 0;

    if (findRoad(startX, startY, 1, board, n)) {
        cout << "Result: " << endl;
        printRoad(board, n);
    } else {
        cout << "Cannot find the road" << endl;
    }

    return 0;
}
