#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[50];
    char brr[50];

    printf("Enter string:\n");
    scanf("%[^\n]s", arr);

    StrCpyX(arr, brr);

    printf("String after removing spaces: %s\n", brr);

    return 0;
}