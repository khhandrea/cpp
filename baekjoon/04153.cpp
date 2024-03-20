#include <stdio.h>

bool is_pythagorean(short a, short b, short c) {
    bool result = (a * a + b * b == c * c);
    return result;
}

int main() {
    short a, b, c;
    const char *result;

    while (true) {
        scanf("%hd %hd %hd", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        if (is_pythagorean(a, b, c) || is_pythagorean(b, c, a) || is_pythagorean(c, a, b)) {
            result = "right";
        }
        else {
            result = "wrong";
        }
        printf("%s\n", result);
    }

    return 0;
}