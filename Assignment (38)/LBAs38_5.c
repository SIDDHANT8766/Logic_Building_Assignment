#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;   // upper → lower
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;   // lower → upper
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

    StrCpyToggle(arr, brr);

    printf("Toggle copied string is: %s\n", brr);

    return 0;
}