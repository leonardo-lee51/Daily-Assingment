#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<vector<string>> board;
    for (int i = 1; i <= 10; i++) {
        vector<string> row;
        for (char j = 'A'; j <= 'J'; j++) {
            row.push_back(string(1, j) + to_string(i));
        }
        board.push_back(row);
    }

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}