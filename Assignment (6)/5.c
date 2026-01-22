#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fResult = 0.0;

    // Handle invalid input
    if(iTotal == 0)
    {
        printf("Invalid total marks (cannot be zero)\n");
        return 0.0;
    }

    fResult = ((float)iObtained / (float)iTotal) * 100;
    return fResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.2f%%\n", fRet);

    return 0;
}