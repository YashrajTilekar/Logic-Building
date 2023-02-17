import java.lang.*;
import java.util.Scanner;

class Solution
{
    public void Pattern(int iNo)
    {
        long iResult = 0;
        int iTemp = iNo;
        for(int i = 1 ; i <= iTemp ; i++,iNo--)
        {
            for(int j = 1 ; j <= i ; j++)
            {
                iResult = iResult*10 + iNo;
            }
        }

        System.out.println(iResult);
        //String str = Integer.toString(iResult);

        //return str;
    }

}

class program214
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a Number");

        int iValue = sobj.nextInt();

        Solution obj = new Solution();

        obj.Pattern(iValue);

        //System.out.println(sRet);

        sobj.close();
    }
}