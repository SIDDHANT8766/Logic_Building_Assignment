#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool Frequency(int Arr[],int iLength ,int  iNo)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
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
    int iSize = 0; bool bRet=false; int iNo = 0;
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

    printf("enter eelments of array:");
    
    for( iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }  

    printf("Enter ekments of array which have to search:");
    scanf("%d",&iNo); 

    bRet = Frequency(p,iSize,iNo);
    
    if(bRet == true)  // check it again
    {
        printf("%d is present in array",iNo);
    }
    else
    {
       printf("%d is not present in array",iNo);   
    }

    free(p);


}