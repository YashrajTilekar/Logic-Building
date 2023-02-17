import java.util.Arrays;

class Solution 
{
    public int maxProductDifference(int[] nums) 
    {
        int iProductDifference = 1 ,iSize = nums.length;
        Arrays.sort(nums);

        iProductDifference = (nums[iSize -1] * nums[iSize-2]) - (nums[0] * nums[1]);

        return iProductDifference;
    }
}

public class LeetCode1913 
{
    
}
