import java.lang.*;
import java.util.*;

class InsertionSort1
{
    public void Sort(int Arr[])
    {
        int iMinIdx = 0 , iTemp = 0;

        for(int i = 0 ; i < Arr.length ; i++)
        {
            iMinIdx = i;
            for(int j = i ; j < Arr.length ; j++)
            {
                if(Arr[j] < Arr[iMinIdx])
                {
                    iMinIdx = j;
                }
            }

            iTemp = Arr[i];
            Arr[i] = Arr[iMinIdx];
            Arr[iMinIdx] = iTemp;
            
        }
    }

    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        InsertionSort1 iobj = new InsertionSort1();

        System.out.println("Enter the Number of Elements");
        int iSize = sobj.nextInt();

        int Data[] = new int[iSize];
        
        System.out.println("Enter the elements");
        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Data[iCnt] = sobj.nextInt();
        }

        System.out.println("Given elements are : ");
        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.print(Data[iCnt] + " ");
        }
        System.out.println();


        iobj.Sort(Data);
        System.out.println("Array After Sorting : ");
        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.print(Data[iCnt]+" ");
        }

    }
}