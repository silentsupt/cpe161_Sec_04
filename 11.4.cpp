#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {8, 4, -3, 3, 17, 1, -5, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int max_value = findMax(numbers, size);
    printf("The maximum value is: %d", max_value);

    return 0;
}
