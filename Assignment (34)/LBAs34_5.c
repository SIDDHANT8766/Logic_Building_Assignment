#include<stdio.h>
#include<stdbool.h>


void DisplayASCII(char ch)
{ 
    int i = 0;
            
            printf("char,  decimal,  hexa");

    for(i = 0; i <= 255; i++)
    {
            printf("%c        %d      %02x\n",i,i,i);
    }
}
   
int main()
{
    char cValue = '\0';
    printf("Enter your character:");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0;
}


