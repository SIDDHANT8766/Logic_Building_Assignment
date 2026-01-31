#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0; int iMin = Arr[iCnt]; int iMax = Arr[iCnt];   

    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) > iMax)
        {
           iMax = Arr[iCnt] ;
        }
        else
        {
            iMin = Arr[iCnt];
        }
       
    }
    return iMax - iMin; 
    
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

    iRet = Difference(p,iSize);

    printf("Difference between number is:%d",iRet);

    free(p);


}