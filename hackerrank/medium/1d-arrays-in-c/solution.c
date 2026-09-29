#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = (int*) malloc(n * sizeof(int));

    // Read elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of array elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print result
    printf("%d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
