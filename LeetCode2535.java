class Solution 
{
    public int differenceOfSum(int[] nums) 
    {
        int iSumElements = 0 ,iSumDigits = 0;
        
        for(int iCnt = 0 ;iCnt < nums.length ;iCnt++)
        {
            iSumElements = iSumElements + nums[iCnt];

            while(nums[iCnt] != 0)
            {
                iSumDigits = iSumDigits + nums[iCnt] % 10;

                nums[iCnt] = nums[iCnt] / 10;
            }
        }

        return (Math.abs(iSumDigits - iSumElements));
    }
}

class LeetCode2535
{
    public static void main(String arg[])
    {

    }

    public LeetCode2535() {
    }
}