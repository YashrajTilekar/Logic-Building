import java.lang.*;
import java.util.Scanner;

class Solution
{
    public int CountCapital(String str)
    {
        int iResult = 0;

        for(int iCnt = 0 ; iCnt < str.length() ; iCnt++)
        {
            if((str.charAt(iCnt) >= 'A') && (str.charAt(iCnt) <= 'Z'))
            {
                iResult++;
            }
        }

        return iResult;
    }
}

class Assignment31_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Solution solobj = new Solution();
        
        System.out.println("Enter a String");
        String sValue = sobj.nextLine();

        int iRet = solobj.CountCapital(sValue);

        System.out.println("Capital Characters : "+iRet);

    }
}