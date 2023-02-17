import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;

class Solution 
{
    public static int MinimumMoves(int iNo ,int iTarget)
    {
        int iMinMoves = 0;

        while(iNo != iTarget)
        {
            if(iTarget > iNo)
            {
                iNo++;
            }
            else if(iNo > iTarget)
            {
                iNo--;
            }
            iMinMoves++;
        }

        return iMinMoves;
    }

    public int minMovesToSeat(int[] seats, int[] students) 
    {
        Arrays.sort(students);
        HashMap<Integer ,Integer> StudentMove = new HashMap<>();
        ArrayList<Integer> seatList = new ArrayList<Integer>();
        HashMap<Integer ,Integer> SeatMove = new HashMap<>();
        int iLeastMove = 1000 ,iCurrentMove = 0 ,iTemp = 0;

        for(int i = 0 ;i < seats.length ;i++)
        {
            seatList.add(seats[i]);
        }

        for(int i = 0 ;i < students.length ;i++)
        {
            StudentMove.put(students[i], 0);
        }
        System.out.println("StudentMove HashMap\n" + StudentMove);
///////////////////////////////////////////////////////////////////////////////////


        for(int iCnt = 0 ;iCnt < students.length ;iCnt++)
        {
          
            SeatMove.clear();

            for(int iTar : seatList)
            {
                iCurrentMove = MinimumMoves(students[iCnt], iTar);
                if(iCurrentMove < iLeastMove)
                {
                    iLeastMove = iCurrentMove;
                    iTemp = iTar;
                }

                SeatMove.put(iTar, MinimumMoves(students[iCnt], iTar));
            }
            System.out.println("MinMove = " + iLeastMove + " | Seat = " + iTemp );
            //System.out.println(SeatMove);
            //int iMin = Collections.min(SeatMove.values());
            //System.out.println(iMin);


        }

        return 0;
    }
}

public class LeetCode2037 
{
    public static void main(String[] args) 
    {
        Solution sobj = new Solution();
        
        int iRet = sobj.MinimumMoves(1, 4);
        System.out.println(iRet);

        int Seats[] = new int[]{4,1,5,9};
        int Students[] = new int[]{1,3,2,6};

        iRet = sobj.minMovesToSeat(Seats, Students);
        System.out.println(iRet);
    }
}
