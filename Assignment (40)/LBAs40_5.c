#include<stdio.h>

void Display(int iNo)
{
    static char iCnt = 'a';

    if(iNo != 0)
    {
        printf("%c\t",iCnt);
        iNo--;
        iCnt++;
        Display(iNo);
    }
}


int main()
{
    int iValue = 0;
    
    printf("Enter your number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}