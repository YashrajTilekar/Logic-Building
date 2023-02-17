import java.util.*;

class LeetCode1528
{
    static char firstRepeating(char str[]) 
    { 
        // Creates an empty hashset 
        HashSet<Character> h = new HashSet<>(); 
 
        // Traverse the input array from left to right 
        for (int i=0; i<=str.length-1; i++) 
        { 
            char c = str[i]; 
 
            // If element is already in hash set, update x 
            // and then break 
            if (h.contains(c)) 
                return c; 
 
            else // Else add element to hash set 
                h.add(c); 
        } 
 
        return '\0'; 
    } 
    public static void printResults(int N ,String[] arr)
    {
        char Results[] = new char[N] ;

        for(int i = 0 ;i < N ;i++)
        {
            char Temp[] = arr[i].toCharArray() ;
            char ch = firstRepeating(Temp) ;
            Results[i] = ch ;
        }

        for(int i = 0 ;i < Results.length ;i++)
        {
            System.out.println(Results[i]);
        }
    }

    public static void main(String[] args) 
    {
        String data[] = new String[2] ;
        data[0] = "Literally";
        data[1] = "Irregardless";
        printResults(data.length, data);
    }

   
}