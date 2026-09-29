#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    int *arr = (int*) malloc(num * sizeof(int));

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array in-place using two pointers
    int start = 0;
    int end = num - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Print the reversed array
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
