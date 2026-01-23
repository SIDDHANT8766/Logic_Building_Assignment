#include <stdio.h>

void print_even_numbers(int limit) {
    int i;
    // Start at 2 (first even number) and increment by 2
    for (i = 2; i <= limit; i = i + 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int limit;

    printf("Enter number N: ");
    scanf("%d", &limit);

    printf("Even numbers up to %d are: \n", limit);
    print_even_numbers(limit);

    return 0;
}

