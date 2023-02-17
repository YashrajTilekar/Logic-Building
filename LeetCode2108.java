class Solution 
{
    public static boolean isPallindrome(String str)
    {
        String sCopy = str;
        char cArr[] = str.toCharArray();
        char cTemp = '\0';

        for(int i = 0 ,j = cArr.length-1 ;
        i <= j ;
        i++ ,j--)
        {
            cTemp = cArr[i];
            cArr[i] = cArr[j];
            cArr[j] = cTemp;

            //System.out.printf("%c  %c\n" ,cArr[i] ,cArr[j]);
        }

        /*for(int i = 0 ;i < cArr.length ;i++)
        {
            System.out.println(cArr[i]);
        }

        System.out.println(String.valueOf(cArr)); */

        str = String.valueOf(cArr);
        //System.out.println(str);
        //System.out.println(sCopy);

        if(str.equals(sCopy))
        {
            return true;
        }
        else
        {
            return false;
        }

    }

    public String firstPalindrome(String[] words) 
    {
        String str = "";

        for(int iCnt = 0 ;iCnt < words.length ;iCnt++)
        {
            if(isPallindrome(words[iCnt]))
            {
                str = words[iCnt];
                break;
            }
        }

        return str;
    }
}

public class LeetCode2108 
{
    public static void main(String[] args) 
    {
        Solution sobj = new Solution();
        boolean bRet = sobj.isPallindrome("naman");
        System.out.println(bRet);
    }
}
