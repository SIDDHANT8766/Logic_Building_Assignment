#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0; int j = 0;

    for(i=0; i<iRow; i++)
    {
        for(j=0; j<iCol; j++)
        {
            if(i <= j)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0; int iValue2 = 0;

    printf("Enter the Row:");
    scanf("%d",&iValue1);

    printf("Enter the Column:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}