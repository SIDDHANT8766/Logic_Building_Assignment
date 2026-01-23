#include <stdio.h>

// Function to count the number of odd digits in a number
int CountOdd(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    // Handle negative input by making it positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    // Handle the case of zero (no odd digits)
    if (iNo == 0)
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        // Check if the extracted digit is odd (remainder is 1 when divided by 2)
        if(iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);

    printf("Count of odd digits: %d\n", iRet);
    
    return 0;
}
