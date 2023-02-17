import java.util.Arrays;

class Solution 
{
    public static void PrintArrayRange(int Arr[] ,int iStartIdx, int iEndIdx)
    {
        System.out.println("----------------------------------------------");

        for(int iCnt = iStartIdx ;iCnt <= iEndIdx ;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        System.out.println("----------------------------------------------");
    }

    public static int SumArrayRange(int Arr[] ,int iStartIdx ,int iEndIdx)
    {
        int iSum = 0;

        for(int iCnt = iStartIdx; iCnt <= iEndIdx ;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }

    public int sumOddLengthSubarrays(int[] arr) 
    {
        int iTotalSum = 0 ;

        for(int iCnt = 0 ;iCnt < arr.length ;iCnt++)
        {
            iTotalSum = iTotalSum + arr[iCnt];
        }

        for(int i = 0 ;i < arr.length-1 ;i++)
        {
            for(int j = i+1 ;j < arr.length ;j++)
            {
                //System.out.println("i = " + i + "j = " + j);   
                //PrintArrayRange(arr ,i ,j);

                if((j - i) % 2 == 0)
                {
                    iTotalSum = iTotalSum + SumArrayRange(arr ,i ,j);
                }
            }
        }
        return iTotalSum;
    }
}

public class LeetCode1588 
{
    public static void main(String[] args) 
    {
        Solution sobj = new Solution();
        int Data[] = new int[]{1 ,4 ,2 ,5 ,3};

        int iRet = sobj.sumOddLengthSubarrays(Data);
        System.out.println(iRet);

    }    
}