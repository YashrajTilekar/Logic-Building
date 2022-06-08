//Accept N numbers and return Adddition

#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iLength)
{
    int iSum = 0 ,iCnt = 0;

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int *iPtr = NULL;
    int iSize = 0 ,iCnt = 0 ,iRet = 0;

    printf("Enter the Number of elements\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Numbers\n");

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Addition(iPtr , iSize);
    printf("Summation is :%d\n",iRet);

    free(iPtr);

    return 0;
}