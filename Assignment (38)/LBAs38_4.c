#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;
        }

        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[50];
    char brr[50];

    printf("Enter string:\n");
    scanf("%[^\n]s", arr);

    StrCpySmall(arr, brr);

    printf("Small copied string is: %s\n", brr);

    return 0;
}