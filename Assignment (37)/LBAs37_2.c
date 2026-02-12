#include<stdio.h>

int CheckChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Entre your String:");
    scanf("%[^'\n]s",&Arr);

    fflush(stdin);

    printf("Enter your character:");
    scanf("%c",&cValue);

    iRet = CheckChar(Arr,cValue);

    printf("Character occurce times:%d",iRet);

    return 0;
}