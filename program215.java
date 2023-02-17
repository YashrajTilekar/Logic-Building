/*
Window Sliding Technique
Input  : arr[] = {100, 200, 300, 400}, k = 2
Output : 700

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k = 4 
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23} of size 4.

Input  : arr[] = {2, 3}, k = 3
Output : Invalid
There is no subarray of size 3 as size of whole array is 2.
*/ 

import java.lang.*;
import java.util.Scanner;

class Solution
{
    public int Max(int iNo1 , int iNo2)
    {
        if(iNo1 > iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }
    }

    public int SlidingWindow(int iArr[] , int iConsecutive)
    {
        if(iConsecutive > iArr.length)
        {
            System.out.println("Invalid Input");
            return -1;
        }

        int iMaxSum = 0 , iCurrentSum = 0;

        for(int iCnt = 0 ; iCnt < iConsecutive ; iCnt++)
        {
            iMaxSum = iMaxSum + iArr[iCnt];
        }

        iCurrentSum = iMaxSum;

        for(int iCnt = iConsecutive ; iCnt < iArr.length ; iCnt++)
        {
            iCurrentSum = iCurrentSum + iArr[iCnt] - iArr[iCnt - iConsecutive];
            iMaxSum = Max(iCurrentSum, iMaxSum);
        }

        return iMaxSum;

    }
}

class program215 
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in) ;
        Solution solobj = new Solution();
        
        System.out.println("Enter the Number of Elements");

        int iLength = 0;
        iLength = sobj.nextInt();

        System.out.println("Enter the Elements");

        int Arr[] = new int[iLength];

        for(int iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the Number of Consecutive Elements");
        int iValue = 0 ;
        iValue = sobj.nextInt();

        int iRet = solobj.SlidingWindow(Arr, iValue);
        System.out.println(iRet);
    }
}
