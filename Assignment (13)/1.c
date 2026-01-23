#include <stdio.h>

void print_numbers(int limit) {
    int i;
    // Loop from 1 up to the limit (inclusive)
    for (i = 1; i <= limit; i++) {
        printf("%d ", i);
    }
    printf("\n"); // Print a newline for clean output
}

int main() {
    int limit;

    printf("Enter number N: ");
    scanf("%d", &limit);

    printf("Numbers from 1 to %d are: \n", limit);
    print_numbers(limit);

    return 0;
}
