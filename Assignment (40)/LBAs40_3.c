#include<stdio.h>

void Display(int iNo)
{
    //static int iCnt = 1;

    if(iNo != 0)
    {
        printf("%d\t",iNo);
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