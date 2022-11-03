import java.lang.*;
import java.util.*;

class BubbleSort
{
    public void Sort(int Arr[])
    {
        int N = Arr.length;

        for(int i = 0 ; i < N-1 ; i++)
        {
            for(int j = 0 ; j < (N-1-i) ; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    int iTemp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = iTemp;
                }
            }
            System.out.println("PASS : "+i);
            for(int iCnt = 0 ; iCnt < N ; iCnt++)
            {
                System.out.print(Arr[iCnt]+" ") ;
            }    
            System.out.println();
        }
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in) ;
        BubbleSort bobj = new BubbleSort();
        
        System.out.println("Enter Number of Elements");
        int iSize = sobj.nextInt();

        int Data[] = new int[iSize];

        System.out.println("Enter the Numbers");
        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Data[iCnt] = sobj.nextInt() ;
        }

        System.out.println("Given Array is : ");
        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.print(Data[iCnt]+" ") ;
        }
        System.out.println();
        
        bobj.Sort(Data);

        System.out.println("Sorted Array is : ");
        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.print(Data[iCnt]+" ") ;
        }
    }
}