#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0; int iCount = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]) == 11)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0; int iRet=0;
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

    iRet = Frequency(p,iSize);

    printf(" Frequency of numder 11 is:%d",iRet);

    free(p);


}