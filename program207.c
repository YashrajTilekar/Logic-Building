#include<stdio.h>
#include<stdlib.h>

int * ReplaceWithProduct(int arr[] , int iLength)
{
    int iSumL = 0 , iSumS = 0;

    for(int iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        iSumL = 0;
        for(int iCnt2 = iCnt ;iCnt2 < iLength ;iCnt2++)
        {
           if(arr[iCnt] < arr[iCnt2] )
           {
                iSumL = iSumL + arr[iCnt2];
           }
           printf("%d  ",iSumL);
        }
        printf("\n");
    }
}

int main()
{
    int *iPtr = NULL;
    int iSize = 0  ,iValue = 0;
    register int iCnt = 0;

    printf("Enter the Number of elements\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Numbers\n");

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    int * iResult = NULL;
    iResult = ReplaceWithProduct(iPtr , iSize);

    /*for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        printf("%d",&iResult[iCnt]);
    }*/

    return 0;
}