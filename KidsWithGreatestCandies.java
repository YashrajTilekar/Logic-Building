import java.util.ArrayList;
import java.util.List;

class Solution 
{
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) 
    {
        List<Boolean> Answer = new ArrayList<Boolean>();
        Boolean bFlag = false ;
        int iMax = 0;

        for(int i = 0; i < candies.length ;i++)
        {
            if(candies[i] > iMax)
            {
                iMax = candies[i] ;
            }
        }

        for(int i = 0; i < candies.length ;i++)
        {
            if(candies[i] + extraCandies >= iMax)
            {
                bFlag = true;
            }
            else
            {
                bFlag = false ;
            }

            Answer.add(bFlag);
        }
        
        return Answer ;
    }
}

public class KidsWithGreatestCandies 
{
    
}
