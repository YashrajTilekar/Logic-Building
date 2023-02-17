import java.util.Scanner;


class program {

    public static int countCustomers(int[] bill)
    {
        int answer = 0;

        for(int iCnt = 0 ; iCnt < bill.length ; iCnt++)
        {
            if(bill[iCnt] >= 0)
            {
                int iSr = (int)Math.sqrt(bill[iCnt]);

                if((iSr * iSr) == bill[iCnt])
                {
                    answer++;
                }
            }
        }

        return answer;
    }

    public static void main(String[] args) {

        
        
        Scanner in = new Scanner(System.in);

        int billSize = in.nextInt();
        int bill[] = new int[billSize];

        for(int i = 0 ; i < billSize ; i++)
        {
            bill[i] = in.nextInt();
        }

        int result = countCustomers(bill);
        System.out.println(result);
    }
    
}
