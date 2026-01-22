#include <stdio.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.0929;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %.6lf", dRet);

    return 0;
}