#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[],int iLength ,int  iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) > iStart && (Arr[iCnt] < iEnd))
        {
            printf("%d",Arr[iCnt]);
        }
    }
    return iCnt; 
    
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

    printf("Enter first ekment:");
    scanf("%d",&iNo1); 

    
    printf("Enter second ekments:");
    scanf("%d",&iNo1); 

    iRet = Range(p,iSize,iNo1,iNo2);

    printf("Numbers between range of No1 to No2 is:%d",iRet);

    free(p);


}