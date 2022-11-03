import java.util.*;

class CoinGame
{
    public static String Solution()
    {
        Scanner sobj = new Scanner(System.in);

        //System.out.println("Enter Number of Test Cases");
        //int T = sobj.nextInt();

        System.out.println("Enter the Number of Piles");
        int iPiles = sobj.nextInt();

        int iArr[] = new int[iPiles];

        System.out.println("Enter Number of Coins in Each Pile");
        for(int iCnt = 0 ; iCnt < iPiles ; iCnt++)
        {
            iArr[iCnt] = sobj.nextInt();
        }

        String sWinner = "Charlie";
        int iChance = 1 ;
        while(true)
        {
            int iOdd = 0;
            for(int iCnt = 0 ; iCnt < iArr.length ; iCnt++)
            {
                if(iArr[iCnt]%2 != 0)
                {
                    iOdd++;
                }
            }
            if(iOdd == iArr.length)
            {
                break;
            }
            
            for(int iCnt = 0 ; iCnt < iArr.length ; iCnt++)
            {
                if(iArr[iCnt]%2 == 0)
                {
                    iArr[iCnt] = iArr[iCnt]/2;
                    break;
                }
            }

            if((iChance%2) != 0)
            {
                sWinner = "Charlie";
            }
            else
            {
                sWinner = "Alan";
            }

            iChance++;
        }

        return sWinner;
    }

    public static void main(String arg[])
    {
        String sRet = Solution();

        System.out.println(sRet);
    }
}