#include <stdio.h>

int main() {
    int a, b;
    float c, d;

    // Read two integers from the first line
    scanf("%d %d", &a, &b);

    // Read two floats from the second line
    scanf("%f %f", &c, &d);

    // Print integer sum and difference
    printf("%d %d\n", a + b, a - b);

    // Print float sum and difference rounded to 1 decimal place
    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}
