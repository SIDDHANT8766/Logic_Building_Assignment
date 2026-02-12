#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool CheckChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        str++;
    }

}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Entre your String:");
    scanf("%[^'\n]s",&Arr);

    fflush(stdin);

    printf("Enter your character:");
    scanf("%c",&cValue);

    bRet = CheckChar(Arr,cValue);

    if(bRet == 1)
    {
        printf("Charcter is present");
    }
    else
    {
        printf("Charcter is not present");
    }

    return 0;
}