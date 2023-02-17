import java.util.Scanner;
import java.util.PrimitiveIterator.OfDouble;
import java.util.Arrays;
public class program5
{
    public static int maxEnergy(int[] ener)
    {
        int answer = 0 ;

        int iMax1 = ener[0] , iMax2 = ener[0];

        for(int i = 0 ; i < ener.length ; i++) 
        {
            if(iMax1 < ener[i])
            {
                iMax1 = ener[i];
            }
        }

        for(int i = 0 ; i < ener.length ; i++) 
        {
            if((iMax2 < ener[i])  && (ener[i] != iMax1))
            {
                iMax2 = ener[i];
            }
        }
        
        answer = iMax1 + iMax2;

        return answer;
    }
  
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);

        int ener_size = in.nextInt();
        int ener[] = new int[ener_size];

        for(int i = 0 ; i < ener_size ; i++) 
        {
            ener[i] = in.nextInt();
        }
        
        int result = maxEnergy(ener);

       System.out.println(result); 
    }
}
