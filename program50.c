//Accept N Number and a Number and return  number of occurance of that number
#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[] ,int iLength ,int iNo)
{
    int iCount = 0 ;
    register int iCnt = 0;

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int *iPtr = NULL;
    int iSize = 0 ,iRet = 0 ,iValue = 0;
    register int iCnt = 0;

    printf("Enter the Number of elements\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Numbers\n");

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter a Number to Calculate Frequency\n");
    scanf("%d",&iValue);

    iRet = Count(iPtr , iSize , iValue);
    printf("Frequency of %d is :%d\n",iValue,iRet);

    free(iPtr);

    return 0;
}