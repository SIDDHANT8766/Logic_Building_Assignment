#include<stdio.h>

#define TRUE 1
#define FALSE 0 
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'a')|| (ch >= 'z') || (ch >= 'A')|| (ch >= 'Z') )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{   
    char cValue = '\0';
    BOOL bRet = 0;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is a character.\n");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}