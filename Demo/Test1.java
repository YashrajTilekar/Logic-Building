import java.util.*;

// Java program to find length of
// longest subsegment of all 1's
// by changing at most k 0's
import java.io.*;

class Test1 {
    public static int[] Convert(String str)
    {
        int Arr[] = new int[str.length()] ;

        for(int iCnt = 0 ; iCnt < str.length() ; iCnt++)
        {
            Arr[iCnt] = Character.getNumericValue(str.charAt(iCnt)) ;
        }

        return Arr ;
    }
    static int longSubSeg(String strS , int changeK)
    {
        int a[] = Convert(strS) ;
        int n = a.length ;
        int k = changeK ;

	    int cnt0 = 0;
	    int l = 0;
	    int max_len = 0;

	// i decides current ending point
	for (int i = 0; i < n; i++) 
    {
		if (a[i] == 0)
			cnt0++;

		// If there are more 0's move
		// left point for current ending
		// point.
		while (cnt0 > k) {
			if (a[l] == 0)
				cnt0--;
			l++;
		}

		max_len = Math.max(max_len, i - l + 1);
	}

	return max_len;
}

// Driver code
public static void main (String[] args)
{
    Scanner sobj = new Scanner(System.in) ;
	/*int a[] = { 1, 0, 0, 1, 0, 1, 0, 1 };
	int k = 2;
	int n = a.length;
	System.out.println( longestSubSeg(a, n, k));*/

    String sValue  = sobj.nextLine() ;
    System.out.println("Enter Value of K");
    int kValue = sobj.nextInt() ;

    int iRet = longSubSeg(sValue, kValue) ;
    System.out.println(iRet);
		
}
}

// This code is contributed by vt_m
