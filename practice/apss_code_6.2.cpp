#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print_vector(vector<T>& vec) {
    cout << "( ";
    for(auto elem: vec) {
        cout << elem << " ";
    }
    cout << ")\n";
}

void pick(int n, vector<int>& picked, int toPick) {
    if (toPick == 0) {
        print_vector(picked);
    }

    int smallest = picked.empty() ? 0 : picked.back() + 1;

    for(int next = smallest; next < n; next++) {
        picked.push_back(next);
        pick(n, picked, toPick - 1);
        picked.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> vec;

    pick(4, vec, 2);
}