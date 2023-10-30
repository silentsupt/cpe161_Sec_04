#include <stdio.h>

int main() {
    int numbers[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter a positive integer: ");
        scanf("%d", &numbers[i]);
        while (numbers[i] <= 0) {
            printf("Please enter a positive integer: ");
            scanf("%d", &numbers[i]);
        }
    }
    int minimum = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }
    printf("The minimum value is: %d\n", minimum);
    return 0;
}
