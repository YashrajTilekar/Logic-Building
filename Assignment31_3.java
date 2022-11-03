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

    public int CountFreq(String str)
    {
        int iCapital = 0 , iSmall = 0 , iResult = 0;

        iCapital = CountCapital(str);
        iSmall = CountSmall(str);

        iResult = iSmall - iCapital;

        return iResult;
    }
}

class Assignment31_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Solution solobj = new Solution();
        
        System.out.println("Enter a String");
        String sValue = sobj.nextLine();

        int iRet = solobj.CountFreq(sValue);

        System.out.println("Diiference Between Frequencies of Small Characters & Capital Characters is : "+iRet);

    }
}