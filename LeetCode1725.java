import java.util.ArrayList;

class Solution 
{
    public int countGoodRectangles(int[][] rectangles) 
    {
        ArrayList<Integer> SidesList = new ArrayList<>();
        int iMaxSide = 0 ,iResult = 0;

        for(int i = 0 ;i < rectangles.length ;i++)
        {
            if(rectangles[i][0] > rectangles[i][1])
            {
                SidesList.add(rectangles[i][1]);

                if(iMaxSide < rectangles[i][1])
                {
                    iMaxSide = rectangles[i][1];
                }
            }
            else if(rectangles[i][0] < rectangles[i][1])
            {
                SidesList.add(rectangles[i][0]);

                if(iMaxSide < rectangles[i][0])
                {
                    iMaxSide = rectangles[i][0];
                }
            }
            else if(rectangles[i][0] == rectangles[i][1])
            {
                SidesList.add(rectangles[i][0]);

                if(iMaxSide < rectangles[i][0])
                {
                    iMaxSide = rectangles[i][0];
                }
            }
        }

        for(int iCnt = 0 ;iCnt < SidesList.size() ;iCnt++)
        {
            if(SidesList.get(iCnt) == iMaxSide)
            {
                iResult++;
            }
        }

        return iResult;
    }
}

public class LeetCode1725 
{
    public static void main(String[] args) 
    {
        
    }    
}
