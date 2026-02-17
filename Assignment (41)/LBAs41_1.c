#include<stdio.h>

void Display(int iNo)
{
    // static char iCnt = ;

    if(iNo != 0)
    {
        printf("%d\t*\t",iNo);
        iNo--;
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