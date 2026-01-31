#include<stdio.h>


void Pattern(int iNo)
{
    int iCnt = 0; int iCount = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("%d\t",iCnt); 
       
       if(((iCnt % 2) != 0))
       {
        printf("#\t");
       }
       else
       {
        printf("#\t");
       }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}