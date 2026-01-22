#include <stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;   // Convert negative number to positive
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt % 2 != 0)   // Check for odd number
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}