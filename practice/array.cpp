#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr1[5] = {0, 1, 2, 3, 4};

    int arr2[5];
    for (int i=0; i<5; i++) {
        arr2[i] = i;
    }

    for (int a: arr1) {
        cout << a << ' ';
    }
    cout << '\n';

    int arr3[] = {1, 2, 3, 4, 5};
    cout << sizeof(arr3) << '\n'; // 4byte * 5 = 20

    return 0;
}