#include <iostream>
#include <deque>

using namespace std;

template <typename T>
void print_deque(deque<T>& dq) {
    for (const auto elem: dq) {
        cout << elem << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    print_deque(dq); // 40 30 10 20

    cout << "popped " << dq.front() << " from front" << '\n';
    dq.pop_front();

    cout << "popped " << dq.back() << " from back" << '\n';
    dq.pop_back();

    print_deque(dq); // 30 10
}