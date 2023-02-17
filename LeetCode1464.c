#include <stdio.h>

int maxProduct(int* nums, int numsSize)
{
    int iCurrentValue = 0 ,iMaxValue = 0;

    for(int i = 0 ;i < numsSize ;i++)
    {
        for(int j = i+1 ;j < numsSize ;j++)
        {
            iCurrentValue = (nums[i] -1) * (nums[j] -1);

            if(iCurrentValue > iMaxValue)
            {
                iMaxValue = iCurrentValue;
            }
        }
    }

    return iMaxValue;
}

int main()
{
    return 0;
}