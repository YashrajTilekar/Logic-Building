/**/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iArraySize)
{
    printf("Elements of Array are:\n");

    register int iCnt = 0;
    for(iCnt = 0 ;iCnt < iArraySize ;iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter Number of Elements\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter Elements :\n");

    register int iCnt = 0;
    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);

    free(ptr)

    return 0;
}