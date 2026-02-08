#include<stdio.h>

void ChkAlpha(char ch)
{
    if(ch == 'A')
    {
       printf("Exam is at 7am\n");
    }
    else if(ch == 'B')
    {
        printf("Exam is at 8.30am\n");
    }
    else if(ch == 'C')
    {
        printf("Exam is at 9.20am\n");
    }
    else if(ch == 'D')
    {
        printf("Exam is at 10.30am\n");
    }
    else
    {
        printf("There is no such a division\n");
    }
}
int main()
{   
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    ChkAlpha(cValue);

    return 0;
}