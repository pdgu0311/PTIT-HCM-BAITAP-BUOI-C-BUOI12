#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    printf("nhap so nguyen: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("ko ton tai.\n");
    } else {
        printf("giai thua cua %d la: %d\n", num, factorial(num));
    }

    return 0;
}
