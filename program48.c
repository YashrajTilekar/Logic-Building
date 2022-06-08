//Accept N Number and return Largest number
#include<stdio.h>
#include<stdlib.h>

int Maximun(int Arr[] ,int iLength)
{
    int iMax = 0 ;
    register int iCnt = 0;

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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

    iRet = Maximun(iPtr , iSize);
    printf("Largest Number is :%d\n",iRet);

    free(iPtr);

    return 0;
}