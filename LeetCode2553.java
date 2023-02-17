import java.util.ArrayList;
import java.util.Collections;

class Solution 
{
    /*public static int ReverseNumber(int iNo)
    {
        int iReverse  = 0;

        while(iNo != 0)
        {
            iReverse = (iReverse*10) + iNo%10;

            iNo = iNo/10;
        }

        return iReverse;
    }*/

    public int[] separateDigits(int[] nums) 
    {
        ArrayList<Integer> CurrentList = new ArrayList<>();
        ArrayList<Integer> FinalList = new ArrayList<>();
        int iDigit = 0;


        for(int iCnt = 0 ;iCnt < nums.length ;iCnt++)
        {
            CurrentList.clear();

            while(nums[iCnt] != 0)
            {
                iDigit = nums[iCnt]%10;
                CurrentList.add(iDigit);
                nums[iCnt] = nums[iCnt]/10;
            }

            Collections.reverse(CurrentList);
            //System.out.println(CurrentList);
            FinalList.addAll(CurrentList);
        }

        //System.out.println(FinalList);

        int Result[] = FinalList.stream().mapToInt(Integer :: intValue).toArray();
        return Result;
    }
}

class LeetCode2553
{
    public static void main(String[] args) 
    {
        Solution sobj = new Solution();
        int Data[] = new int[]{13,25,83,77,100};
        
        int RetArr[] = sobj.separateDigits(Data);

        for(int iCnt = 0 ;iCnt < RetArr.length ;iCnt++)
        {
            System.out.printf("%d ",RetArr[iCnt]);
        }
    }
}