//Accept N Number and a Number ,and return the index of Number(First Occurance) in that array 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Index(int Arr[] ,int iLength ,int iNo)
{
    register int iCnt = 0;

    for(iCnt = (iLength - 1) ;iCnt >= 0 ;iCnt--)
    {
        if(iNo == Arr[iCnt])
        {
            break;
        }
    }
    
    return iCnt;
}

int main()
{
    int *iPtr = NULL;
    int iSize = 0  ,iValue = 0 ,iRet = 0;
    register int iCnt = 0;

    printf("Enter the Number of elements\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Numbers\n");

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter a Number to Search\n");
    scanf("%d",&iValue);

    iRet = Index(iPtr , iSize , iValue);
    printf("The given Number is present at Index(First Occurance) :%d",iRet);

    free(iPtr);

    return 0;
}