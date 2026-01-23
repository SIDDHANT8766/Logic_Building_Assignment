#include <stdio.h>

// Function to count the frequency of the digit 2
int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Handle the case where the input number is 0
    if (iNo == 0)
    {
        return 0; // The digit '2' cannot be in 0
    }

    // Convert negative number to positive for digit extraction
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic to extract digits and count '2'
    while (iNo != 0)
    {
        iDigit = iNo % 10; // Get the last digit
        if (iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("Count of '2's: %d\n", iRet);

    return 0;
}
