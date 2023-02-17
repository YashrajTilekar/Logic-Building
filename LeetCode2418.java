import java.security.interfaces.RSAKey;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;

class Solution 
{ 
    public static int[] Reverse(int Arr[])
    {
        ArrayList<Integer> ReverseList = new ArrayList<>();

        for(int iCnt = Arr.length -1 ;iCnt >= 0 ;iCnt--)
        {
            ReverseList.add(Arr[iCnt]);
        }

        int Result[] = new int[Arr.length];

        int iCnt = 0;
        for(int iNo : ReverseList)
        {
            //System.out.println(iNo);
            Result[iCnt] = iNo;
            iCnt++;
        }

        return Result;
    }

    public String[] sortPeople(String[] names, int[] heights) 
    {
        HashMap<Integer ,String> HeightName = new HashMap<>();
        int iSize = names.length;
        String Result[] = new String[iSize];
        
        for(int iCnt = 0 ;iCnt < iSize ;iCnt++)
        {
            HeightName.put(heights[iCnt], names[iCnt]);
        }

        Arrays.sort(heights);
        heights = Reverse(heights);

        for(int iCnt = 0 ;iCnt < iSize ;iCnt++)
        {
            //System.out.println(HeightName.get(heights[iCnt]));
            Result[iCnt] = HeightName.get(heights[iCnt]);
        }

        return Result;
    }
}

public class LeetCode2418 
{
    public static void main(String[] args) 
    {
        Solution sobj = new Solution();

        String nData[] = new String[]{"Mary","John","Emma"};
        int hData[] = new int[]{180,165,170};

        String sRet[] = sobj.sortPeople(nData, hData) ;

        for(int iCnt = 0 ;iCnt < sRet.length ;iCnt++)
        {
            System.out.println(sRet[iCnt]);
        }
        
        int iRet[] =  sobj.Reverse(hData);
        
        for(int idx = 0 ;idx < iRet.length ;idx++)
        {
            System.out.println(iRet[idx]);
        }
    }
}
