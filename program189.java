//Searching AND Sorting
//Accept N Elements and Display them
//Bubble Sort

import java.lang.* ;
import java.util.* ;

interface MarvellousSort
{
    public void Accept() ;
    public void Display() ;
    public void BubbleSort() ;
    public void InsertionSort() ;
    public void SelectionSort() ;
}

class Array implements MarvellousSort 
{
    public int Arr[] ;

    public Array(int iSize)
    {
        Arr = new int[iSize] ;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Elements");
        
        for(int iCnt = 0 ;iCnt < Arr.length ;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt() ;
        }
    }

    public void Display()
    {
        System.out.println("Elements from Array are :");
        
        for(int iCnt = 0 ;iCnt < Arr.length ;iCnt++)
        {
            System.out.print(Arr[iCnt]+"  ") ;
        }
        System.out.println();
    }

    public void BubbleSort()
    {
        int i = 0 , j = 0 , temp = 0 ;

        for(i = 0 ; i < Arr.length ;i++)
        {
            for(j = 0 ;j < Arr.length-i-1 ;j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j] ;
                    Arr[j] = Arr[j+1] ;
                    Arr[j+1] = temp ;
                }
            }
        }
    }

    public void InsertionSort()
    {}

    public void SelectionSort()
    {}
}

class program189
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array");
        int size = sobj.nextInt() ;

        Array aobj = new Array(size) ;
        aobj.Accept(); 
        aobj.Display();

        aobj.BubbleSort();
        System.out.println("Data After Sorting");
        aobj.Display();

        
    }
}