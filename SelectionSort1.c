#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int Arr[] , int iSize)
{
    int iMinIndex = 0 , iTemp = 0;

    for(int i = 0 ; i < iSize ; i++)
    {
        iMinIndex = i;
        for(int j  = i+1 ; j < iSize ; j++)
        {
            if(Arr[iMinIndex] > Arr[j])
            {
                iMinIndex = j;
            }

            if(iMinIndex != i)
            {
                iTemp = Arr[i];
                Arr[i] =  Arr[iMinIndex];
                Arr[iMinIndex] = iTemp;
            }
        }
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

    SelectionSort(iPtr , iLength);

    printf("Array After Sorting : \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("%d ",iPtr[iCnt]);
    }

    return 0;
}