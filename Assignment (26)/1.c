#include<stdio.h>


void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t",'A' + iCnt);          // use ASCII value to that
    }

    /*
     int iCnt = 0;                     \ 
     char ch = 'A';                     \
                                         \
    for(iCnt = 0; iCnt < iNo; iCnt++)     \    use separate logic          
    {                                     /
        printf("%c\t",'A');              /
        ch++;                           / 
    }                                  /

    
    
    */
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}