#include <stdio.h>
#include <string.h>

int main() {
    char input[11];
    printf("Enter a string (up to 10 characters): ");
    scanf("%s", input);
    int length = strlen(input);
    printf("Number of characters entered: %d\n", length);
    return 0;
}
