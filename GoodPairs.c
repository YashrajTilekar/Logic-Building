#include <stdio.h>
#include <stdlib.h>

int numIdenticalPairs(int* nums, int numsSize)
{
    int iPairs = 0 ;

    for(int i = 0 ;i < numsSize-1 ;i++)
    {
        for(int j = i+1 ;j < numsSize ;j++)
        {
            if(nums[i] == nums[j])
            {
                iPairs++;
            }
        }
    }

    return iPairs ;
}

int main()
{
    int iValue = 0 ,iCnt = 0 ,iRet = 0;

    printf("Enter the Number of Elements\n");
    scanf("%d" ,&iValue);

    int* iPtr = (int*)malloc(sizeof(int) * iValue);

    for(iCnt = 0 ;iCnt < iValue ;iCnt++)
    {
        scanf("%d" ,&iPtr[iCnt]);
    }

    /*for(iCnt = 0 ;iCnt < iValue ;iCnt++)
    {
        printf("%d\n" ,iPtr[iCnt]);
    }*/

    iRet = numIdenticalPairs(iPtr ,iValue);
    printf("%d\n",iRet);

    return 0 ;
}