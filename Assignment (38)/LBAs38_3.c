#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
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

    StrCpyCap(arr, brr);

    printf("Capital copied string is: %s\n", brr);

    return 0;
}