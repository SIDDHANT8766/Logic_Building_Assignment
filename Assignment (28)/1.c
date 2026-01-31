#include<stdio.h>


void Pattern(int iRow, int iCol)
{
    int rCnt = 0;
    int cCnt = 0;

    for(rCnt = 0; rCnt <= iRow; rCnt++)
    {
        for(cCnt = 0; cCnt <=iCol; cCnt++)
        {
              printf("%c\t",'A' + cCnt);          // use ASCII value to that
        }
        printf("\n");
       
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
    int iValue1 = 0;   int iValue2 = 0;

    printf("Enter number of Rows:");
    scanf("%d",&iValue1);

    
    printf("Enter number of Column:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}