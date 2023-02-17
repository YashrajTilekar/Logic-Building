import java.util.ArrayList;

class Solution {
    public int[] createTargetArray(int[] nums, int[] index) 
    {
        ArrayList<Integer> Target = new ArrayList<>();
        
        for(int iCnt = 0 ;iCnt < nums.length ;iCnt++)
        {
            Target.add(index[iCnt], nums[iCnt]);
        }
        System.out.println(Target);

        int Result[] = Target.stream().mapToInt(Integer :: intValue ).toArray();
        
        return Result;
    }
}

class LeetCode1389
{
    public static void main(String[] args) 
    {
        Solution sobj = new Solution();

        int Data1[] = new int[]{0,1,2,3,4};
        int Data2[] = new int[]{0,1,2,2,1};
        
        int RetArr[] = sobj.createTargetArray(Data1, Data2);

        for(int i = 0 ;i < RetArr.length ;i++)
        {
            System.out.println(RetArr[i]);
        }
    }
}