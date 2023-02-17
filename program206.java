import java.util.Scanner;
import java.util.PrimitiveIterator.OfDouble;
import java.util.Arrays;
public class program6
{
    public static int flippedBits(int num1 , int num2)
    {
        int answer = 0 ;

        int n = num1 ^ num2;

        while(n != 0)
        {
            answer++;

            n &= (n-1) ;
        }
        
        
        return answer;
    }
  
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);

       int num1 = in.nextInt();
       int num2 = in.nextInt();
        
        int result = flippedBits(num1 , num2);

       System.out.println(result); 
    }
}
