#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)      // Handle negative input
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}