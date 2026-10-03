#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    // Iterate through all pairs (a, b) where 1 <= a < b <= n
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int current_and = a & b;
            int current_or  = a | b;
            int current_xor = a ^ b;

            if (current_and > max_and && current_and < k) {
                max_and = current_and;
            }
            if (current_or > max_or && current_or < k) {
                max_or = current_or;
            }
            if (current_xor > max_xor && current_xor < k) {
                max_xor = current_xor;
            }
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
