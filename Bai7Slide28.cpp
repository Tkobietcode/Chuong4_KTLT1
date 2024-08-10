#include <stdio.h>

// Hàm tính dãy số A_n
int An(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return 2 * An(n - 1) - 3 * An(n - 2) - 3 * An(n - 3);
}

int main() {
    int n = 5;
    printf("A_%d = %d\n", n, An(n));
    return 0;
}
