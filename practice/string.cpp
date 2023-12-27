#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str1 = "hello";
    string mid = ", ";
    string str2 = "world!";

    cout << str1 + mid + str2 << '\n';

    return 0;
}