#include<stdio.h>
#include<stdbool.h>

bool CheckVowels(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'o') || (*str == 'i') || (*str == 'u') )
        {
            return true;
        }
        else
        {
            return false;  
        } 

        str++;
    }
}

int main()
{
    char Arr[50];
    bool bRet = 0;

    printf("Enter your String:");
    scanf("%[^'\n']s",&Arr);

    bRet = CheckVowels(Arr);

    if(bRet == true)
    {
       printf("It is contains Vowels");
    }
    else
    {
       printf("It not contains Vowels");
    }

    return 0;
}