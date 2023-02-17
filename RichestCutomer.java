import java.lang.*;
import java.util.Scanner;

class Solution 
{
    public int maximumWealth(int[][] accounts) 
    {
        int iRichest = 0 ,iMoney = 0;

        for(int i = 0 ;i < accounts.length ;i++)
        {
            iMoney = 0 ;

            for(int j = 0 ;j < accounts[0].length ;j++)
            {
                iMoney = iMoney + accounts[i][j];
            }

            if(iMoney > iRichest)
            {
                iRichest = iMoney ;
            }

        }

        return iRichest ;    
    }
}
class RichestCustomer
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        
        sobj.close();
    }
}