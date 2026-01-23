#include <stdio.h>

// Function to count the frequency of the digit 4
int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Handle the case where the input number is 0
    if (iNo == 0)
    {
        return 0;
    }

    // Convert negative number to positive for digit extraction
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic to extract digits and count '4'
    while (iNo != 0)
    {
        iDigit = iNo % 10; // Get the last digit
        if (iDigit == 4) // *Change from Problem 3*
        {
            iCount++;
        }
        iNo = iNo / 10; // Remove the last digit
    }

    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("Count of '4's: %d\n", iRet);

    return 0;
}
