import java.util.Scanner;

class Solution
{
    public boolean Divisible10(int Arr[])
    {
        int iNumber = 0;

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            iNumber = (iNumber*10) + Arr[iCnt]%10;
        }

        if((iNumber%10) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
public class Divisibility 
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in) ;
        Solution solobj = new Solution();

        //System.out.println("Enter Number of Elements");
        int iSize = sobj.nextInt();

        int iArr[] = new int[iSize];

        //System.out.println("Enter the Elements");
        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            iArr[iCnt] = sobj.nextInt();
        }

        /*for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.println(iArr[iCnt]);
        }*/
        boolean bRet = false;

        bRet = solobj.Divisible10(iArr);
        
        if(bRet == true)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }    
}
