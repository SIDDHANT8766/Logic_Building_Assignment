#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)     // Convert negative number to positive
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)     // Ignore zero in multiplication
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits is: %d\n", iRet);

    return 0;
}

