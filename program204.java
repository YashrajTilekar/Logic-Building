import java.util.Scanner;
import java.util.PrimitiveIterator.OfDouble;
import java.util.Arrays;
public class program4
{
    public static long unlockingKey(long key)
    {
        long answer = 0 ;

        long lNo = key;
        int iDigCount = 0;

        while(lNo != 0)
        {
            iDigCount++;
            lNo = lNo/10;
        }

        long arr[] = new long[iDigCount];

        int i = 0;
        while(key != 0)
        {
            arr[i] = key%10;

            key = key/10;
            i++;
        }

        Arrays.sort(arr);

        for(int j = 0 ; j < arr.length ; j++)
        {
            answer = answer*10 + arr[j];
        }

        return answer;
    }
  
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);

      long key = in.nextInt();
      long result = unlockingKey(key);

       System.out.println(result); 
    }
}
