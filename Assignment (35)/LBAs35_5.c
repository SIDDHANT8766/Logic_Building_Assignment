#include<stdio.h>
#include<stdbool.h>

void Revers(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[50];
    bool bRet = 0;

    printf("Enter your String:");
    scanf("%[^'\n']s",&Arr);

    Revers(Arr);

    printf("updated string is:%s",Arr);

    return 0;
}