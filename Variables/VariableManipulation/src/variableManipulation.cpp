#include <stdio.h>

int changeValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main() {
    printf("%d", changeValue(1, 2));
    return 0;
}