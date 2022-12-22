/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static String Solution(int Arr[] ,int InitailAmount)
	{
		String str = "";
		
		for(int iCnt = 0 ;iCnt < Arr.length ;iCnt++)
		{
			if(Arr[iCnt] > InitailAmount)
			{
				//System.out.print(0);
				str = str + "0";
				continue;
			}
			else
			{
				InitailAmount = InitailAmount - Arr[iCnt];
				//System.out.print(1);
				str = str + "1";
			}
		}

		return str;
	} 

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in) ;

		//System.out.println("Enter Number of Test Cases");
		int iTests = sobj.nextInt() ;

		int iSize = 0 ,iTotalMoney = 0;
		String sRet ;
		String Result[] = new String[iTests] ;

		for(int iCnt = 0 ;iCnt < iTests ;iCnt++)
		{
			iSize = sobj.nextInt() ;
			iTotalMoney = sobj.nextInt() ;

			int Data[] = new int[iSize];

			for(int i = 0; i < iSize ;i++)
			{
				Data[i] = sobj.nextInt();
			}

			sRet = Solution(Data, iTotalMoney);
			Result[iCnt] = sRet ;
		}

		for(int i = 0 ;i < Result.length ;i++)
		{
			System.out.println(Result[i]);
		}

		sobj.close();
		//System.out.println(iSize);
		//System.out.println(iTotalMoney);

	}
}
