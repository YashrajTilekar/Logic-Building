/* package codechef; // don't place package name! */

import java.util.*;

import javax.swing.text.StyledEditorKit.ItalicAction;

import java.lang.*;
import java.io.*;


/* Name of the class has to be "Main" only if the class is public. */

class Solution
{
	public void BinaryBattles(long Arr[][])
	{
		long iTime = 0 ,iTeams = 0 ,iRoundTime = 0 ,iBreakTime = 0;
		double dRounds = 0;


		for(int i = 0 ; i < Arr.length ;i++)
		{
			iTeams = Arr[i][0];
			iRoundTime = Arr[i][1];
			iBreakTime = Arr[i][2];
			dRounds = Math.sqrt(Double.valueOf(iTeams)) ;
			iTime = 0 ;
			System.out.println("Rounds = "+dRounds);
			for(int iCnt = 1 ;iCnt <= dRounds ;iCnt++)
			{
				iTime = iTime + iRoundTime + iBreakTime ;
			}

			System.out.println(iTime - iBreakTime);

		}
	}
}

class BIN_BAT
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in) ;
		Solution solobj = new Solution();
		
		//System.out.println("Enter Number of Test Cases");
		int iTests = sobj.nextInt() ,iRet = 0;

		long InputArr[][] = new long[iTests][3] ;

		for(int i = 0 ; i < iTests ;i++)
		{
			for(int j = 0 ;j < 3 ;j++)
			{
				InputArr[i][j] = sobj.nextInt();
			}
		}

		solobj.BinaryBattles(InputArr) ;

		sobj.close();
	}
}
/*
16 Teams
R1 : 8 vs 8
R2 : 4 vs 4
R3 : 2 vs 2
R4 : 1 vs 1


*/ 