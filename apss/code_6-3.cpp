#include <iostream>
#include <string>

using namespace std;

char board[5][5] = {
    {'U', 'R', 'L', 'P', 'M'},
    {'X', 'P', 'R', 'E', 'T'},
    {'G', 'I', 'A', 'E', 'T'},
    {'X', 'T', 'N', 'Z', 'Y'},
    {'X', 'O', 'Q', 'R', 'S'}
};

short dy[8] = {0, -1, -1, -1, 0, +1, +1, +1};
short dx[8] = {+1, +1, 0, -1, -1, -1, 0, +1};

bool hasWord(int y, int x, const string& word) {
    // Base case
    if (!((y >= 0) && (y <= 4) && (x >= 0) && (x <= 4))) {
        return false;
    }
    if (word[0] != board[y][x]) {
        return false;
    }
    if (word.size() == 1) {
        return true;
    }

    // Recursion
    for (int dir = 0; dir < 8; dir++) {
        if (hasWord(y + dy[dir], x + dx[dir], word.substr(1))) {
            return true;
        }
    }
    return false;
}

int main() {
    int y, x;
    string word;

    while (true) {
        cout << "y, x, word: ";
        cin >> y >> x >> word;

        if (y == 0 && x == 0 && word == "0") {
            break;
        }

        cout << (hasWord(y, x, word) ? "true" : "false") << '\n';
    }
}