class Solution 
{
    public String truncateSentence(String s, int k) 
    {   
        String sResult = "";
        int iCnt = 0;

        for(iCnt = 0 ;iCnt < s.length() ;iCnt++)
        {
            if(k == 0)
            {
                break;
            }
            else if(s.charAt(iCnt) == ' ')
            {
                sResult = sResult + s.charAt(iCnt);
                k--;
            }
            else
            {
                sResult = sResult + s.charAt(iCnt);
            }
        }

        if(iCnt == s.length())
        {
            return sResult;
        }
        else
        {
            sResult = sResult.substring(0 ,sResult.length() - 1);
            return sResult;
        }
    }
}

class LeetCode1816
{
    public static void main(String[] args) 
    {
        Solution sobj = new Solution();
        String sData = "Hello how are you contestant";

        String sRet = sobj.truncateSentence(sData, 4);
        System.out.println("|" + sRet + "|");
        
    }
}