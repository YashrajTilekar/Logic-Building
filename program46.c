/*
Accept N numbers and Display Even numbers
*/
#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[] ,int iLength)
{
    int iCnt = 0;

    printf("Even Numbers are :\n");

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if( (Arr[iCnt] % 2) == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter Number of Elements\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Values\n");
    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    DisplayEven(iPtr , iSize);

    free(iPtr);

    return 0;
}