/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class MAKEAP
{
	static boolean isPrime(int n)
    {
 
        // Check if number is less than
        // equal to 1
        if (n <= 1)
            return false;
 
        // Check if number is 2
        else if (n == 2)
            return true;
 
        // Check if n is a multiple of 2
        else if (n % 2 == 0)
            return false;
 
        // If not, then just check the odds
        for (int i = 3; i <= Math.sqrt(n); i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

	public static int SumPrime(int rangeLeft ,int rangeRight)
	{
		int iMin = rangeLeft ,iMax = rangeLeft ,Answer = 0 ;

		for(int iCnt = rangeLeft ; iCnt <= rangeRight ;iCnt++)
		{
			if(isPrime(iCnt))
			{
				if(iCnt > iMax)
				{
					iMax = iCnt;
				}
				else if(iCnt < iMin)
				{
					iMin = iCnt ;
				}
			}
		}

		Answer = iMax + iMin ;
		return Answer ;
		
	}

	public static int[] MaxRevenue(int[][] salesRecord)
	{
		int[] answer = new int[salesRecord.length];

		int iMax = 0;
		for(int i = 0 ; i < salesRecord.length ;i++)
		{
			iMax = salesRecord[i][0];

			for(int j = 0 ;j < salesRecord[0].length ;j++)
			{
				if(salesRecord[i][j] > iMax)
				{
					iMax = salesRecord[i][j];
				}
			}

			answer[i] = iMax ;
		}

		return answer;
	}

	public static int funcEnergy(int initialEnergy ,int rate ,int timeN)
	{
		int answer = 0 ;

		for(int i = 1 ; i < timeN ;i++)
		{
			initialEnergy = initialEnergy + rate;
		}

		return initialEnergy;
	}

	public static int[] energyProduced(int initialEnergy ,int rate , int seconds)
	{
		int[] answer = new int[seconds];

		answer[0] = initialEnergy;
		for(int i = 1 ;i < seconds ;i++)
		{
			initialEnergy = initialEnergy * rate ;

			answer[i] = initialEnergy;
		}

		return answer;
	}

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in);
		
		int iRet = 0;
		//iRet = SumPrime(-97, 50) ;
		//System.out.println(iRet);

		/*int Arr[][] = new int[3][4];
		Arr[0][0] = 100 ;
		Arr[0][1] =  198;
		Arr[0][2] =  333;
		Arr[0][3] =  323;
		Arr[1][0] =  122;
		Arr[1][1] =  232;
		Arr[1][2] =  221;
		Arr[1][3] =  111;
		Arr[2][0] =  223;
		Arr[2][1] =  565;
		Arr[2][2] =  245;
		Arr[2][3] =  764;
*/
		int Ret[] = energyProduced(5 ,3 ,3) ;

		for(int i = 0 ;i <Ret.length ;i++)
		{
			System.out.println(Ret[i]);
		}

		//iRet = funcEnergy(4, 3, 5) ;
		//System.out.println(iRet);

		sobj.close();
	}
}
