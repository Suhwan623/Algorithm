#include <iostream>
#include <vector>
using namespace std;

void draw(int n, int x, int y, vector<vector<char>>& board) {
    if (n == 1) {
        board[x][y] = '*';
        return;
    }

    int len = 4 * n - 3;
    int end = x + len - 1;

    // 상하
    for (int i = 0; i < len; i++) {
        board[x][y + i] = '*';         // 위
        board[end][y + i] = '*';       // 아래
    }

    // 좌우
    for (int i = 1; i < len - 1; i++) {
        board[x + i][y] = '*';         // 왼쪽
        board[x + i][y + len - 1] = '*'; // 오른쪽
    }

    // 재귀 호출 (더 안쪽으로)
    draw(n - 1, x + 2, y + 2, board);
}

int main() {
    int N;
    cin >> N;

    int size = 4 * N - 3; // size는 이제 board의 크기
    vector<vector<char>> board(size, vector<char>(size, ' '));

    draw(N, 0, 0, board);

    // 결과 출력
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << board[i][j];
        }
        cout << '\n';
    }

    return 0;
}
