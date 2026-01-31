#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iCnt = 0; int iSum = 0; int iOdd = 0;   // iCount = 0 not allowed because 0 * any number = 0

    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt]) % 2) == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
       
    }
    return iSum - iOdd; 
    
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

    iRet = Minimum(p,iSize);

    printf("Difference of all Even and Odd number is:%d",iRet);

    free(p);


}