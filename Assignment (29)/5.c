#include<stdio.h>


void Pattern(int iRow, int iCol)
{
    int i = 1; 
    int j = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 0; j <= iCol; j++)
        {
          printf("%d\t",j + i);    
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0; 
    int iValue2 = 0;

    printf("Enter the number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of Column:");
    scanf("%d",&iValue2);
    
    Pattern(iValue1,iValue2);
    
    return 0;
}