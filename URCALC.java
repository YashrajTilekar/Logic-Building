/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */

class Codechef
{
	public static double Calc(double A ,double B ,char Operator)
	{
		double Result = 0;
		
		if(Operator == '+')
		{
			Result = A + B ;
		}
		else if(Operator == '-')
		{
			Result = A - B ;
		}
		else if(Operator == '*')
		{
			Result = A * B ;
		}
		else if(Operator == '/')
		{
			Result = A / B ;
		}

		return Result ;
	}

	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in) ;
		
		double dValue1 = 0 ,dValue2 = 0 , dRet = 0;
		char cValue;

		System.out.println("Enter First Number");
		dValue1 = sobj.nextDouble() ;

		System.out.println("Enter Second Number");
		dValue2 = sobj.nextDouble() ;

		System.out.println("Enter the Operator");
		cValue  = sobj.next().charAt(0);

		dRet = Calc(dValue1, dValue2, cValue) ;
		System.out.println(dRet);

		sobj.close();
	}
}
