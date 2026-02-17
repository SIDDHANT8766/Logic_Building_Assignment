#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0;
    int iProd = 1;

    if(iNo == 0)
    {
         return 0;
    }
    
    if(iNo < 0)  // Updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;     
        iProd = iProd * iDigit; 
        iNo = iNo / 10;    

    return iProd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d", iRet);

    return 0;
}