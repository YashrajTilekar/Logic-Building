import java.lang.*;
import java.util.Scanner;

class Solution
{
    public int Difference(int Arr[])
    {
        int iResult = 0 , iSumEven = 0 , iSumOdd = 0;

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt]%2) == 0)
            {
                iSumEven = iSumEven + Arr[iCnt] ;
            }
            else
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
        }

        iResult = iSumEven - iSumOdd;

        return iResult;
    }
}

class Assignment32_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Solution solobj = new Solution();
        
        int iLength = 0 , iRet = 0;

        System.out.println("Enter Number of Elements");
        iLength = sobj.nextInt();

        int iArr[] = new int[iLength];

        System.out.println("Enter the Elements");
        for(int iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            iArr[iCnt] = sobj.nextInt();
        }

        for(int iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            System.out.print(iArr[iCnt]+" ");
        }
        System.out.println();
        
        iRet = solobj.Difference(iArr);
        System.out.println("Difference Between Summation of Even And odd Elements is : "+iRet);
        
    }
}