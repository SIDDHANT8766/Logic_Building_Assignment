#include <stdio.h>

void print_factors(int number)
{
    int i = 0;

    if (number <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    printf("Factors of %d are: ", number);
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    // Time Complexity: O(n)
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}