#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
           iCount++;
       }
       str++;
    }
    return iCount;
}
int main()
{
    char Arr[50]= {'\0'};
    int iRet = 0;

    printf("Enter your string:");
    scanf("%[^'\n']s",&Arr);

    iRet = CountCapital(Arr);

    printf("Count of Capital charcter are:%d ",iRet);

    return 0;
}