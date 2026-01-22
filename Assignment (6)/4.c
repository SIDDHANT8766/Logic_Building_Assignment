#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 0;

    // If any number is 0, multiplication should be handled properly
    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }

    iResult = iNo1 * iNo2 * iNo3;
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return 0;
}