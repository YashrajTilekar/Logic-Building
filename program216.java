/*

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

*/

import java.lang.*;
import java.util.*;

public class Solution
{
    public static int reverse(int iNo)
    {
        if((iNo >= Integer.MAX_VALUE) || (iNo <= Integer.MIN_VALUE) )
        {
            return 0;
        }
        long iResult = 0;

        while(iNo != 0)
        {
            iResult = iResult*10 + iNo%10;

            iNo = iNo/10;
        }

        return (int)iResult ;
    }
    
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in) ;

        //System.out.println("Enter a Number");
        int iValue = sobj.nextInt();

        int iRet = reverse(iValue);

        System.out.println(iRet);
    }
}