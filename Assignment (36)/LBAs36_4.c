#include<stdio.h>

void DisplayDigits(char str[])
{ 

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))         // due to ASCII values
        {
           printf("Having digits are:%c\n",*str);
        }
        str++;
    }
    
   
  
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
} 