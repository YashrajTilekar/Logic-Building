#include <stdio.h>
#include <stdlib.h>

int countGoodTriplets(int* arr, int arrSize, int a, int b, int c)
{
    int iTriplets = 0;

    for(int iCnt = 0 ;iCnt < arrSize ;iCnt++)
    {
        printf("%d\n" ,arr[iCnt]);
    }

    for(int i = 0 ;i < arrSize ;i++)
    {
        for(int j = i+1 ;j < arrSize ;j++)
        {
            for(int k = j+1 ;k < arrSize ;k++)
            {
                //printf("%d - %d - %d\n" ,arr[i] ,arr[j] ,arr[k]);

                if( (abs(arr[i] - arr[j]) <= a) 
                && (abs(arr[j] - arr[k]) <= b)
                && (abs(arr[i] - arr[k]) <= c))
                {
                    iTriplets++;
                }
            }
        }
    }

    return iTriplets;
}

int main()
{
    int iLength = 0 ,iRet = 0;

    printf("Enter Number of Elements\n");
    scanf("%d" ,&iLength);

    int* iPtr = (int*)malloc(sizeof(int) * iLength);

    for(int iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        scanf("%d" ,&iPtr[iCnt]);
    }

    int Data[] = {3,0,1,1,9,7};

    iRet = countGoodTriplets(Data ,6 ,7 ,2 ,3);
    printf("%d\n" ,iRet);
    printf("%d\n" ,abs(-7));

    return 0;
}