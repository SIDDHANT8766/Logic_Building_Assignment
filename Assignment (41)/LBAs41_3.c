#include<stdio.h>

int Count(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
    }

    return iCnt;
      
}


int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter your number: \n");
    scanf("%[^'\n]s",&arr);

    fflush(stdin);

    iRet = Count(arr);
    printf("Addition of digit is:",iRet);

    return 0;
}