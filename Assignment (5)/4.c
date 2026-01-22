#include <stdio.h>

void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("%d is Positive\n", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative\n", num);
    }
    else
    {
        printf("Number is Zero\n");
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}