#include<stdio.h>

void StrrevX(char *str)
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

    printf("Entre your String:");
    scanf("%[^'\n]s",&Arr);

    StrrevX(Arr);

    printf("Updated string is:%s",Arr);

    return 0;
}