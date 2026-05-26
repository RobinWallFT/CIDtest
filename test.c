#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int failed = 0;

    if (add(2, 3) != 5) {
        printf("FAIL: add(2, 3) sollte 5 sein\n");
        failed++;
    } else {
        printf("PASS: add(2, 3) = 5\n");
    }

    if (add(0, 0) != 0) {
        printf("FAIL: add(0, 0) sollte 0 sein\n");
        failed++;
    } else {
        printf("PASS: add(0, 0) = 0\n");
    }

    if (add(-1, 1) != 0) {
        printf("FAIL: add(-1, 1) sollte 0 sein\n");
        failed++;
    } else {
        printf("PASS: add(-1, 1) = 0\n");
    }

    return failed; // 0 = alle Tests bestanden
}