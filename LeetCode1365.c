/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    int iCnt = 0 ,iFreq = 0;
    int* Result = (int*)malloc(sizeof(int) * numsSize);

    for(int iCnt = 0 ;iCnt < numsSize ;iCnt++)
    {
        iFreq = 0 ;

        for(int i = 0 ;i < numsSize ;i++)
        {
            if(nums[i] < nums[iCnt])
            {
                iFreq++;
            }
        }

        Result[iCnt] = iFreq;
    }

    return Result ;
}

int main()
{
    return 0 ;
}