/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static int ChefDolls(int Arr[])
	{
		int iMissingDoll = 0 ;

		HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();

		map.put(0 ,0);
		map.put(1 ,0);
		map.put(2 ,0);
		map.put(3 ,0);
		map.put(4 ,0);
		map.put(5 ,0);
		map.put(6 ,0);
		map.put(7 ,0);
		map.put(8 ,0);
		map.put(9 ,0);

		int iNo = 0;
		for(int iCnt = 0 ;iCnt < Arr.length ;iCnt++)
		{
			for(Map.Entry<Integer ,Integer> entry : map.entrySet())
			{
				if(entry.getKey() == Arr[iCnt])
				{	iNo = entry.getValue() + 1;
					map.replace(entry.getKey() , iNo) ;
				}
			}
		}

		for(Map.Entry<Integer ,Integer> entry : map.entrySet())
		{
			if(entry.getValue() == 1)
			{
				iMissingDoll = entry.getKey() ;
			}
		}

		return iMissingDoll;
	}

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in) ;

		//System.out.println("Enter Number of test cases");

		int iTests = sobj.nextInt() ;
		int ResultsArr[] = new int[iTests] ;

		for(int iCnt = 0 ;iCnt < iTests ;iCnt++)
		{
			//System.out.println("Enter Number of Dolls");
			int iQuantity = sobj.nextInt() ;

			int Data[] = new int[iQuantity];

			for(int i = 0 ;i < iQuantity ;i++)
			{
				Data[i] = sobj.nextInt();
			}

			ResultsArr[iCnt] = ChefDolls(Data) ; 
		}

		for(int iCnt = 0 ;iCnt < ResultsArr.length ;iCnt++)
		{
			System.out.println(ResultsArr[iCnt]);
		}

	}
}
