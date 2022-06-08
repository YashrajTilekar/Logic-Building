//Accept N numbers and return addition of N Numbers
#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[] ,int iLength)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int iCnt = 0 ,iRet = 0 ,iSize = 0;
    int *p = NULL;

    printf("Enter Number of Elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        printf("Enter Element :%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Addition(p,iSize);
    printf("Addition is :%d",iRet);

    free(p);

    return 0;
}