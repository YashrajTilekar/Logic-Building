/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static String Solution(int iLimakMax ,int iBobMax)
	{
		int iCnt = 1 ,iLamak = 0 ,iBob = 0;
		String Result = "" ;

		while(true)
		{
			if((iCnt % 2) != 0)
			{
				if(iLamak > iLimakMax)
				{
					Result = "Bob";
					break;
				}
				iLamak = iLamak + iCnt ; 
			}
			else if((iCnt % 2) == 0)
			{
				if(iBob > iBobMax)
				{
					Result = "Limak";
					break;
				}
				iBob = iBob + iCnt ; 
			}

			iCnt++;
		}

		return Result ;
	}

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in) ;

		System.out.println("Enter Number of Test Cases");
		int iTests = sobj.nextInt() ,iValue1 = 0 ,iValue2 = 0;
		String Results[] = new String[iTests];

		for(int iCnt = 0 ;iCnt < iTests ;iCnt++)
		{
			iValue1 = sobj.nextInt();
			iValue2 = sobj.nextInt();

			Results[iCnt] = Solution(iValue1, iValue2);
		}

		for(int i = 0 ;i < Results.length ;i++)
		{
			System.out.println(Results[i]);
		}

		sobj.close();
	}
}
