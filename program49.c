//Accept N Number and return Smallest number
#include<stdio.h>
#include<stdlib.h>

int Minimun(int Arr[] ,int iLength)
{
    int iMin = 0 ;
    register int iCnt = 0;

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int *iPtr = NULL;
    int iSize = 0 ,iRet = 0;
    register int iCnt = 0;

    printf("Enter the Number of elements\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Numbers\n");

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Minimun(iPtr , iSize);
    printf("Smallest Number is :%d\n",iRet);

    free(iPtr);

    return 0;
}