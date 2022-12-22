/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

class Solution
{
	public static boolean PredictAdvantage(int iRevenue1 ,int iRevenue2 ,int iRevenue3)
	{
		boolean bResult = false ;

		int iSum1 = iRevenue1 + iRevenue2 ;
		int iSum2 = iRevenue2 + iRevenue3 ;
		int iSum3 = iRevenue1 + iRevenue3 ;

		if((iRevenue1 > iSum2) || (iRevenue2 > iSum3) || (iRevenue3 > iSum1))
		{
			bResult = true ;
		}

		return bResult ;
	}

	public void Monnopoly(int Arr[][])
	{
		boolean bFlag = false ;

		for(int iCnt1 = 0 ; iCnt1 < Arr.length ; iCnt1++)
		{
			bFlag = PredictAdvantage(Arr[iCnt1][0] ,Arr[iCnt1][1] ,Arr[iCnt1][2]);
			if(bFlag == true)
			{
				System.out.println("Yes") ;
			}
			else
			{
				System.out.println("No") ;
			}
		}
	}
}

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in) ;
		Solution solobj = new Solution();

		System.out.println("Enter Number of Test Cases");
		int iTests = sobj.nextInt() ;

		int Data[][] = new int[iTests][3] ;

		for(int iCnt1 = 0 ; iCnt1 < Data.length ; iCnt1++)
		{
			for(int iCnt2 = 0 ;iCnt2 < Data[0].length ;iCnt2++)
			{
				Data[iCnt1][iCnt2] = sobj.nextInt() ;
			}
		}

		solobj.Monnopoly(Data);

		sobj.close();
	}
}
