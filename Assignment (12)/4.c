#include <stdio.h>

int sum_of_even_factors(int number)
{
    int i = 0, sum = 0;

    if (number <= 0)
        return 0;

    for (i = 1; i < number; i++)  // exclude the number itself
    {
        if (number % i == 0 && i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
    // Time Complexity: O(n)
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum of even factors (excluding number): %d\n", sum_of_even_factors(number));

    return 0;
}