/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
s
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static int Solution(int Arr[])
	{
		int iFeature1 = Arr[0];
		int iFeature2 = Arr[1];

		if(( (Arr[2] == iFeature1) && (Arr[3] == iFeature2)) || ( (Arr[2] == iFeature2) && (Arr[3] == iFeature1)))
		{
			return 1 ;
		}
		else if(( (Arr[4] == iFeature1) && (Arr[5] == iFeature2)) || ( (Arr[4] == iFeature2) && (Arr[5] == iFeature1)))
		{
			return 2 ;
		}
		else
		{
			return 0 ;
		}
	}

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in) ;

		//System.out.println("Enter Number of Test Cases");
		int iTests = sobj.nextInt() ;
		int Results[] = new int[iTests];

		for(int iCnt = 0 ;iCnt < iTests ;iCnt++)
		{
			int Data[] = new int[6] ;

			for(int i = 0 ;i < Data.length ;i++)
			{
				Data[i] = sobj.nextInt() ;
			}

			Results[iCnt] = Solution(Data); 
		}

		for(int i = 0 ;i < Results.length ;i++)
		{
			System.out.println(Results[i]);
		}

	}
}
