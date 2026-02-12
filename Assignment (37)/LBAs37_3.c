#include<stdio.h>

int CharOccur(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           return iCount;
        }
        str++;
        iCount++;
    }
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

    iRet = CharOccur(Arr,cValue);

    printf("Character occurce times:%d",iRet);

    return 0;
}