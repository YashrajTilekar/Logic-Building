//Accept N Number and a Number and check whether the Number is present in the array or Not 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[] ,int iLength ,int iNo)
{
    register int iCnt = 0;

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *iPtr = NULL;
    int iSize = 0  ,iValue = 0;
    register int iCnt = 0;
    bool bRet = false;

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

    bRet = Search(iPtr , iSize , iValue);
    if(bRet == true)
    {
        printf("Element is present in Array\n");
    }
    else
    {
        printf("Element is NOT present in Array\n");
    }

    free(iPtr);

    return 0;
}