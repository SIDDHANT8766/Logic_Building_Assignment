#include <stdio.h>

long long sum_natural_numbers(int limit)
{
                    // Using the arithmetic progression formula: Sum = N * (N + 1) / 2
                    // Use long long for the sum to prevent potential overflow for large N

    return (long long)limit * (limit + 1) / 2;
}

int main()
{
    int limit;
    long long sum;

    printf("Enter number N: ");
    scanf("%d", &limit);

    sum = sum_natural_numbers(limit);
    printf("Sum of first %d natural numbers is: %lld\n", limit, sum);

    return 0;
}

