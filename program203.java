import java.util.Scanner;

public class program3
{
    public static int countChar(String data , char coder)
    {
        int answer = 0 ;

        char ch[] = new char[data.length()];

        for(int i = 0 ; i < data.length() ; i++)
        {
            ch[i] = data.charAt(i);
        }

        for(int i = 0 ; i < data.length() ; i++)
        {
            if(ch[i] == coder)
            {
                answer++;
            }
        }

        return answer;
    }
  
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);

       String data = in.nextLine();

       char coder = in.next().charAt(0);

       int result = countChar(data, coder);
       System.out.println(result); 
    }
}
