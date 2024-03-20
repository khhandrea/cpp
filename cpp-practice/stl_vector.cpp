#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> vec;
    vector<int> vec2 = {1, 2, 3};
    vector<int> vec3[10];
    vector<int> vec4[] = {{1, 2}, {3, 4}};
    vector<vector<int>> vec5; // 2d vector
    vector<int> vec6(5); // Initialize 5 elements to 0
    vector<int> vec7(5, 1);  // Initialize 5 elements to 1
    vector<int> vec8(vec7); // Copied vec7

    vec.push_back(10);

    vector<int>::iterator iter = vec.begin();
    iter = vec.insert(iter, 20); // Push forward 20
    iter = vec.insert(iter, 2, 30); // Push forward two 30
    iter = vec.insert(iter + 2, 3, 40); // Push index 2 three 40

    for (int a: vec) {
        cout << a << ' '; // 30 30 40 40 40 20 10
    }
    cout << '\n';

    // for (vector<int>::reverse_iterator iter2=vec.rbegin(); iter2 != vec.rend(); iter2++) {
    for (auto iter2=vec.rbegin(); iter2 != vec.rend(); iter2++) {
        cout << *iter2 << ' ';
    }
    cout << '\n';

    cout << "size " << vec.size() << '\n';
    cout << "capacity " << vec.capacity() << '\n';

    vec.pop_back();
    vec.erase(vec.begin() + 1); // Erase index 1
    vec.erase(vec.begin() + 1, vec.begin() + 3); // Erase index 1 ~ 2
    for (int a: vec) {
        cout << a << ' '; // 30 40 20
    }
    cout << '\n';

    vec.clear();


    return 0;
}