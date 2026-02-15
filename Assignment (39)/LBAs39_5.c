#include<stdio.h>

void Display()
{
    static char iCnt = 'F';

    if(iCnt >= 'A')
    {
        printf("%c\t",iCnt);
        iCnt--;
        Display();
    }
}


int main()
{
    Display();

    return 0;
}