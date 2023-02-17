//Searching AND Sorting
//Accept N Elements and Display them
//Bubble Sort(Optimized)
//Selection Sort
//Insertion Sort

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
        boolean Swap = false ;

        for(i = 0 ; i < Arr.length ;i++)
        {
            Swap = false;
            for(j = 0 ;j < Arr.length-i-1 ;j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j] ;
                    Arr[j] = Arr[j+1] ;
                    Arr[j+1] = temp ;
                    Swap = true ;
                }
            }

            if(Swap == false)
            {
                break ;
            }
        }
    }

    public void InsertionSort()
    {
        int i = 0 ,j = 0,selected = 0 ;

        for(i = 1 ;i < Arr.length ;i++)
        {
            for(j = i-1,selected = Arr[i] ;(j >= 0) && (Arr[j] > selected) ;j--)
            {
                Arr[j+1] = Arr[j] ;
            }
            Arr[j+1] = selected ;
        }
    }

    public void SelectionSort()
    {
        int i = 0 ,j = 0, min_index = 0 ,temp = 0 ;

        for(i = 0 ;i < Arr.length ;i++)
        {
            min_index = i ;
            for(j = i ;j < Arr.length ;j++)
            {
                if(Arr[min_index] > Arr[j])
                {
                    min_index = j ;
                }
            }
            temp = Arr[i] ;
            Arr[i] = Arr[min_index] ;
            Arr[min_index] = temp ;
        }
    }
}

class program191
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

        aobj.InsertionSort();
        System.out.println("Data After Sorting");
        aobj.Display();

        
    }
}