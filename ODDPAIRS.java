/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static boolean isOdd(long lNo)
	{
		return((lNo % 2) != 0) ;
	}

	public static int Solution(long lNo)
	{
		int iPairs = 0 ;
		long Arr[] = new long[ParseInt(lNo)];

		for(int iCnt = 0 ;iCnt < Arr.length ;iCnt++)
		{
			Arr[iCnt] = iCnt+1 ;
		}

		/*for(int iCnt = 0 ;iCnt < Arr.length ;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}*/

		for(int i = 0 ; i < Arr.length-1 ; i++)
		{
			for(int j = i+1 ; j < Arr.length ; j++)
			{
				if(isOdd(Arr[i] + Arr[j]))
				{
					iPairs++;
				}
			}
		}

		return iPairs*2 ;
	}

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in) ;

		//System.out.println("Enter Number of test cases");

		int iTests = sobj.nextInt() ,iValue = 0;
		int ResultsArr[] = new int[iTests] ;

		for(int iCnt = 0 ;iCnt < iTests ;iCnt++)
		{
			iValue = sobj.nextInt();
			ResultsArr[iCnt] = Solution(iValue) ; 
		}

		for(int iCnt = 0 ;iCnt < ResultsArr.length ;iCnt++)
		{
			System.out.println(ResultsArr[iCnt]);
		}

		sobj.close();
	}
}
