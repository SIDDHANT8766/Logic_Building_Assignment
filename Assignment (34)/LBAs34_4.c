#include<stdio.h>
#include<stdbool.h>


bool Display(char ch)
{ 
    if((ch == '@') || (ch == '#') || (ch == '$') || (ch == '&') || (ch == '*') || (ch == '%') || (ch == '^') || (ch == '!') )
    {
           return true;
    }
    else 
    {
       return false; 
    }

    
}
   
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter your character:");
    scanf("%c",&cValue);

    bRet = Display(cValue);

     if(bRet == true)
    {
           printf("Character is special.\n");
    }
    else 
    {
       printf("Character is not a special.\n");        
    }

    return 0;
}


