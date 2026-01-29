#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength ,int  iNo)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            return iCnt;
        }
    }
    
}

int main()
{
    int iSize = 0; int iRet= 0; int iNo = 0;
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

    iRet = FirstOcc(p,iSize,iNo);
    
    if(iRet == -1)
    {
        printf("There is no such a number");
    }
    else
    {
       printf("occurence of that numbers position is:%d ",iRet);   
    }

    free(p);


}