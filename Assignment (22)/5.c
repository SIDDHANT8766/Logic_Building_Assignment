#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength ,int  iNo)
{
    int iCnt = 0; int iCount = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0; int iRet=0; int iNo = 0;
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

    iRet = Frequency(p,iSize,iNo);

    printf(" Frequency of numder search element is:%d",iRet);

    free(p);


}