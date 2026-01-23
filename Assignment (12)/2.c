#include <stdio.h>

int count_factors(int number)
{
    int i = 0, count = 0;

    if (number <= 0)
        return 0;

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    return count;
    // Time Complexity: O(n)
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Total factors: %d\n", count_factors(number));

    return 0;
}