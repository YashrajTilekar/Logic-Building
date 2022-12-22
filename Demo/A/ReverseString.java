import java.util.Scanner;

class Solution
{
    public String Reverse(String str)
    {
        String sResult = "" ;
        for(int iCnt = str.length()-1 ; iCnt >= 0 ; iCnt--)
        {
            sResult = sResult + str.charAt(iCnt);
        }

        return sResult;
    }
}

class ReverseString
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ;
        Solution solobj = new Solution();

        System.out.println("Enter a Stirng");
        String sValue = sobj.nextLine();

        String sRet = solobj.Reverse(sValue);
        System.out.println(sRet);
    }
}