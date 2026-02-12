#include<stdio.h>

int CountDifference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }
    return iSmall - iCapital;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter your String:");
    scanf("%[^'\n']s",&Arr);

    iRet = CountDifference(Arr);

    printf("Difference between frequency is:%d",iRet);

    return 0;
}