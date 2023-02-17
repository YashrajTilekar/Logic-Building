import java.util.*;

class Solution 
{
    public int uniqueMorseRepresentations(String[] words) 
    {
        String MorseCodes[] = new String[]{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int index =0;
        String sCode = "";
        
        Set<String> converted = new HashSet<String>();
        
        for(int iCnt = 0 ;iCnt < words.length ;iCnt++)
        {
            sCode = "";

            for(int i = 0; i < words[iCnt].length() ;i++)
            {
                index = words[iCnt].charAt(i) - 'a';

                sCode = sCode + MorseCodes[index];
            }
            System.out.println(sCode);
            converted.add(sCode);

        }

        return converted.size();
    }
}

class LeetCode804
{
    public static void main(String[] args) 
    {
        String Data[] = new String[]{"gin","zen","gig","msg"};
        Solution sobj = new Solution();

        int iRet = sobj.uniqueMorseRepresentations(Data);
        System.out.println(iRet);
    }
}