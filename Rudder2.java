import java.io.* ;

class Rudder2
{
    public void BName(String CurrentBench , int iQuantity)
    {
        int iValue = 0;

        for(int iCnt = 5; iCnt <= 9 ; iCnt++)
        {
            iValue = iValue*10 + Character.getNumericValue(CurrentBench.charAt(iCnt)) ;
        }

        iValue++;
        for(int iCnt = 1 ; iCnt <= iQuantity ; iCnt++ , iValue++)
        {
            if(iValue > 99999)
            {
                iValue = 00001 ;
            }
            System.out.println(CurrentBench.substring(0, 5) + iValue);
        }

    }

    public static void main(String[] args)  throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)) ;
        
        String input_from_question = br.readLine() ;

        int iNo = Integer.parseInt(br.readLine()) ;

        Main mobj = new Main() ;
        mobj.BName(input_from_question, iNo);
        
    }
}