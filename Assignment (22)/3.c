#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Frequency(int Arr[],int iLength)
{
    int iCnt = 0;
    
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]) == 11)
        {
           return true;
        }
        else
        {
           return false;
        }
    }
}

int main()
{
    int iSize = 0; bool bRet = false;
    int iCnt = 0;
    int *p =  NULL;
    
    printf("Enter the total length of Array:\n");
    scanf("%d",&iSize);

    p = (int *) malloc (iSize * sizeof(int));

      if(NULL == p)
      {
        printf(" unable to emory allocatiom:\n");
        return -1;
      }
     
    printf("Enter ekments of array:");   

    for( iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }  

    bRet = Frequency(p,iSize);

    if(bRet == true)
    {
       printf("11 is present");
    }
    else
    {
       printf("11 is present");   
    }

    free(p);


}