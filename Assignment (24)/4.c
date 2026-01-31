#include<stdio.h>
#include<stdlib.h>

int Digit(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) > 99)
        {
            printf("%d",Arr[iCnt]);
        }
       
    } 
    
}

int main()
{
    int iSize = 0; int iRet= 0;
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

    Digit(p,iSize);

    free(p);


}