#include<stdio.h>


void DisplayASCII()
{
    int i = 0;
            
            printf("char,  decimal,  hexa");

    for(i = 0; i <= 255; i++)
    {
            printf("%c        %d      %02x\n",i,i,i);
    }
}
int main()
{

    DisplayASCII();

    return 0;
}