class Solution {
    public int countConsistentStrings(String allowed, String[] words) 
    {
        int iResult = 0;

        for(int iCnt = 0 ;iCnt < words.length ;iCnt++)
        {
            for(int i = 0 ;i < allowed.length() ;i++)
            {
                char ch = allowed.charAt(i);
                String sTemp = Character.toString(ch);

                words[iCnt] = words[iCnt].replace(sTemp, "");
            }
            //System.out.println(words[iCnt] + "  " + words[iCnt].length());
            if(words[iCnt].length() == 0)
            {
                iResult++;
            }
        }    

        return iResult;
    }
}

class LeetCode1684
{
    public static void main(String[] args) 
    {
        Solution sobj = new Solution();    

        String sData[] = new String[]{"ad","bd","aaab","baa","badab"};
        int iRet = sobj.countConsistentStrings("ab", sData);

        System.out.println("Number of Consistent Strings are : " + iRet);
    }
}