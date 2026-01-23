#include <stdio.h>

// Function to count the number of even digits in a number
int CountEven(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    // Handle negative input by making it positive for digit counting
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    // Handle the case of zero
    if (iNo == 0)
    {
        // 0 is considered an even digit
        return 1;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        // Check if the extracted digit is even (remainder is 0 when divided by 2)
        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        
        iNo = iNo / 10; // Move to the next digit
    }
    
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("Count of even digits: %d\n", iRet);
    
    return 0;
}
