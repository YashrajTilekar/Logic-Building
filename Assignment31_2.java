import java.lang.*;
import java.util.Scanner;

class Solution
{
    public int CountSmall(String str)
    {
        int iResult = 0;

        for(int iCnt = 0 ; iCnt < str.length() ; iCnt++)
        {
            if((str.charAt(iCnt) >= 'a') && (str.charAt(iCnt) <= 'z'))
            {
                iResult++;
            }
        }

        return iResult;
    }
}

class Assignment31_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Solution solobj = new Solution();
        
        System.out.println("Enter a String");
        String sValue = sobj.nextLine();

        int iRet = solobj.CountSmall(sValue);

        System.out.println("Small Characters : "+iRet);

    }
}