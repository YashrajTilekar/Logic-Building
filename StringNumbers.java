import java.lang.*;
import java.util.Scanner;

class Solution
{
    public int SumNumbers(String str) throws Exception
    {
        int iSum = 0 ;
        String sTemp = "" ;

        for(int iCnt = 0 ;iCnt < str.length() ;iCnt++)
        {
            if((str.charAt(iCnt) >= '0') && (str.charAt(iCnt) <= '9'))
            {
                sTemp = sTemp + str.charAt(iCnt) ;
            }
            else
            {
                iSum = iSum + Integer.parseInt(sTemp);
                sTemp = "" ;
            }
        }

        return iSum ;
    }
}

class StringNumbers
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in) ;
        Solution solobj = new Solution(); 

        System.out.println("Enter a string");
        String sValue = sobj.nextLine();

        int iRet = 0 ;
        iRet = solobj.SumNumbers(sValue) ;
        System.out.println("Sum of Numbers in string :"+sValue+"is "+iRet);

        sobj.close();
    }
}