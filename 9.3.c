#include <stdio.h>

int main() {
    int numbers[10];
    int i, countEven = 0;
    for (i = 0; i < 10; i++) {
        printf("Enter a positive integer: ");
        scanf("%d", &numbers[i]);
        while (numbers[i] <= 0) {
            printf("Please enter a positive integer: ");
            scanf("%d", &numbers[i]);
        }
    }
    printf("Even numbers entered: ");
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
            countEven++;
        }
    }
    printf("\nTotal count of even numbers: %d\n", countEven);
    return 0;
}
