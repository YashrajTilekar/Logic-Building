#include <stdio.h>
#include <stdlib.h>

int arithmeticTriplets(int* nums, int numsSize, int diff)
{
    int iTriplets = 0;

    for(int i = 0 ;i < numsSize ;i++)
    {
        for(int j = 0 ;j < numsSize ;j++)
        {
            for(int k = 0 ;k < numsSize ;k++)
            {
                if( ((nums[j] - nums[i]) == diff) && ((nums[k] - nums[j]) == diff))
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
    int Data[] = {0,1,4,6,7,10};

    int iRet = arithmeticTriplets(Data ,6 ,3);
    printf("%d\n" ,iRet);

    return 0;
}