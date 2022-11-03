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

    public boolean ChkVowels(String str)
    {
        boolean bFlag = false;

        for(int iCnt = 0 ; iCnt < str.length() ; iCnt++)
        {
            if((str.charAt(iCnt) == 'A') ||
            (str.charAt(iCnt) == 'E') ||
            (str.charAt(iCnt) == 'I') ||
            (str.charAt(iCnt) == 'O') ||
            (str.charAt(iCnt) == 'U') ||
            (str.charAt(iCnt) == 'a') ||
            (str.charAt(iCnt) == 'e') ||
            (str.charAt(iCnt) == 'i') ||
            (str.charAt(iCnt) == 'o') ||
            (str.charAt(iCnt) == 'u')  )
            {
                bFlag = true;
            }
        }

        return bFlag;
    }

    public void DisplayReverse(String str)
    {
        System.out.println("This Function Displays String in Reverse Order");
        char cArr[] = str.toCharArray() ;

        for(int iCnt = cArr.length-1 ; iCnt >= 0 ; iCnt--)
        {
            System.out.print(cArr[iCnt]);
        }

        System.out.println();

        for(int iCnt = cArr.length-1 ; iCnt >= 0 ; iCnt--)
        {
            System.out.print(str.charAt(iCnt));
        }
    }
}

class Assignment31_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Solution solobj = new Solution();
        
        System.out.println("Enter a String");
        String sValue = sobj.nextLine();

        boolean bRet = false;
        bRet = solobj.ChkVowels(sValue);

        solobj.DisplayReverse(sValue);
        //System.out.println("Diiference Between Frequencies of Small Characters & Capital Characters is : "+iRet);
        
    }
}