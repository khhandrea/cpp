#include <iostream>
#include <list>

using namespace std;

template <typename T>
void print_list(list<T>& lst) {
    for(const auto elem : lst) {
        cout << elem << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    list<int> lst;

    lst.push_back(10);
    lst.push_back(20);
    lst.push_front(30);
    lst.push_front(40);
    print_list(lst); // 40 30 10 20

    for (list<int>::iterator itr = lst.begin(); itr != lst.end(); itr++) {
        if (*itr == 10) {
            lst.insert(itr, 50);
            break;
        }
    }
    print_list(lst); // 40 30 50 10 20

    for (list<int>::iterator itr = lst.begin(); itr != lst.end(); itr++) {
        if (*itr == 30) {
            lst.erase(itr);
            break;
        }
    }
    print_list(lst); // 40 50 10 20

    return 0;
}