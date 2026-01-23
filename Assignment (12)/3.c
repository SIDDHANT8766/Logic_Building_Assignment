#include <stdio.h>

int sum_of_factors(int number)
{
    int i = 0, sum = 0;

    if (number <= 0)
        return 0;

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    return sum;
    // Time Complexity: O(n)
}

int main(void)
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum of all factors: %d\n", sum_of_factors(number));

    return 0;
}