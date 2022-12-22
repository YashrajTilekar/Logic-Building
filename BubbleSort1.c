#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int Arr[] , int iSize)
{
    int iTemp = 0;

    for(int i = 0 ; i < iSize ; i++)
    {
        for(int j = 0 ; j < (iSize - i - 1) ; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                iTemp =  Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = iTemp;
            }
        }
        printf("PASS : %d\n",i+1);
        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            printf("%d ",Arr[iCnt]);
        }
        printf("\n");

    }
}

int main()
{
    int iLength = 0 , iCnt = 0 , iValue = 0 ;

    printf("Enter the Number of Elements\n");
    scanf("%d" , &iLength);

    int * iPtr = NULL;
    iPtr = (int*)malloc(sizeof(int) * iLength);

    if(iPtr == NULL)
    {
        printf("Memory Not Allocated\n");
    }
    else
    {
        printf("Memory Successfully Allocated\n");
    }

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&iValue);
        iPtr[iCnt] = iValue;
    }

    printf("Given Array is : \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("%d ",iPtr[iCnt]);
    }

    BubbleSort(iPtr , iLength);

    printf("Array After Sorting : \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("%d ",iPtr[iCnt]);
    }

    return 0;
}