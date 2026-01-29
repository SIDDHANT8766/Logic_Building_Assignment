#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[],int iLength)
{
    int iCnt = 0; int iCount = 1;   // iCount = 0 not allowed because 0 * any number = 0

    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2 ) != 0)
        {
           iCount = iCount * Arr[iCnt];
        }
       
    }
    return iCount; 
    
}

int main()
{
    int iSize = 0; int iRet= 0; int iNo1 = 0; int iNo2 = 0;
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

    iRet = Range(p,iSize);

    printf("Product is:%d",iRet);

    free(p);


}