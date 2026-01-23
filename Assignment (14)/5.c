#include <stdio.h>

// Function to count the frequency of digits less than 6
int Count(int iNo) // Renamed the function to 'Count' based on the pattern
{
    int iDigit = 0;
    int iCount = 0;

    // Handle the case where the input number is 0
    if (iNo == 0)
    {
        // 0 is less than 6, so the count is 1
        return 1;
    }

    // Convert negative number to positive for digit extraction
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic to extract digits and count those less than 6
    while (iNo != 0)
    {
        iDigit = iNo % 10; // Get the last digit
        if (iDigit < 6) // *Change from Problems 3 and 4*
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

    iRet = Count(iValue);

    printf("Count of digits less than 6: %d\n", iRet);

    return 0;
}

