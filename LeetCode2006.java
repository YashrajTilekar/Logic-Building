class Solution 
{
    public int countKDifference(int[] nums, int k) 
    {
        int iResult = 0;

        for(int i = 0 ;i < nums.length-1 ;i++)
        {
            for(int j = i+1 ;j < nums.length ;j++)
            {
                if(((nums[i] - nums[j]) == k) || ((nums[j] - nums[i]) == k))
                {
                    iResult++;
                }
            }
        }

        return iResult;
    }
}

public class LeetCode2006 
{
    public static void main(String[] args) 
    {
        
    }
}