#include <stdio.h>

long long sum_even_numbers(int limit)
{
                        // The sum of the first N even numbers is N * (N + 1)
                        // The 'limit' argument here represents the 'N' terms

    return (long long)limit * (limit + 1);
}

int main() 
{
    int limit; // Represents N, the number of even terms to sum
    long long sum;

    printf("Enter number N (number of terms): ");
    scanf("%d", &limit);

    // Note: The function name in the image is 'sum_even_number'
    sum = sum_even_numbers(limit);
    printf("Sum of the first %d even numbers is: %lld\n", limit, sum);

    return 0;
}
