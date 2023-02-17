class Solution 
{
    public int mostWordsFound(String[] sentences) 
    {
        int iMaxWords = 0 ,iWords = 0;

        for(int iCnt = 0 ;iCnt < sentences.length ;iCnt++)
        {
            char Arr[] = sentences[iCnt].toCharArray() ;
            iWords = 1;

            for(int i = 0; i < Arr.length ;i++)
            {
                if(Arr[i] == ' ')
                {
                    iWords++;
                }
            }
            
            if(iWords > iMaxWords)
            {
                iMaxWords = iWords ;
            }
        }

        return iMaxWords ;
    }
}

public class MaxWords 
{
    
}
