#include <stdio.h>

// Function to count the total number of digits in a number
int CountDigits(int iNo)
{
    int iCount = 0;

    // Handle negative input by making it positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    // Special case: if the number is 0, it has 1 digit
    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
        iNo = iNo / 10; // Remove the last digit
        iCount++;       // Increment the count for the removed digit
    }
    
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("Count of total digits: %d\n", iRet);
    
    return 0;
}
