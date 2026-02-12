#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = (char)(ch - 32);
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = (char)(ch + 32);
    }

    printf("Corrosponding character is%c",ch);
     
}
int main()
{
    char cValue = '\0';

    printf("Enter your character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}