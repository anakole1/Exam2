#include <stdio.h>
#include "math1.h"

int main() {
    int32_t a, b;

    printf("Enter two integers for multiplication: ");
    scanf("%d %d", &a, &b);
    printf("Result of %d * %d = %d\n", a, b, imul(a, b));

    printf("Enter two integers for division (dividend and divisor): ");
    scanf("%d %d", &a, &b);
    int32_t result = idiv(a, b);
    if (b != 0) {
        printf("Result of %d / %d = %d\n", a, b, result);
    }

    return 0;
}
