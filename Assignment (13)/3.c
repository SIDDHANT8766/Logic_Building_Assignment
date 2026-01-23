#include <stdio.h>

void print_odd_numbers(int limit) {
    int i;
    // Start at 1 (first odd number) and increment by 2
    for (i = 1; i <= limit; i = i + 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int limit;

    printf("Enter number N: ");
    scanf("%d", &limit);

    printf("Odd numbers up to %d are: \n", limit);
    print_odd_numbers(limit);

    return 0;
}
