#include<stdio.h>

void strlwrX(char *str)
{

     while(*str != '\0')
     {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        

        str++;
     }
}

int main()
{
    char Arr[20];

    printf("Enter the String:");
    scanf("%[^'\n']s",&Arr);

    strlwrX(Arr);

    printf("Update string:%s",Arr);
   
    return 0;
}