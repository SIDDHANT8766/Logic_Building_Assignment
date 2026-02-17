#include<stdio.h>

int Sum(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        Sum(iNo); 
    }   

    return iSum;
    
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter your number: \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    printf("Addition of digit is:",iRet);

    return 0;
}