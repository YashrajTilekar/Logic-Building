class Solution 
{
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) 
    {
        String str1 = "" ,str2 = "";

        for(int iCnt = 0 ;iCnt < word1.length ;iCnt++)
        {
            str1 = str1 + word1[iCnt];
        }

        for(int iCnt = 0 ;iCnt < word2.length ;iCnt++)
        {
            str2 = str2 + word2[iCnt];
        }

        //System.out.println(str1);
        //System.out.println(str2);

        if(str1.equals(str2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class LeetCode1662
{
    public static void main(String arg[])
    {
        Solution sobj = new Solution();

        String Data1[] = new String[]{"ab" ,"c"};
        String Data2[] = new String[]{"a" ,"bc"};

        boolean bRet = sobj.arrayStringsAreEqual(Data1, Data2);
        System.out.println(bRet);
    }
}