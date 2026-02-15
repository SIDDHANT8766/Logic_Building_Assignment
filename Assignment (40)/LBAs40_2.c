#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iNo != 0)
    {
        printf("%d\t",iCnt);
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