//Searching AND Sorting
//Accept N Elements and Display them
//Linear Search

import java.lang.* ;
import java.util.* ;

class ArrayX
{
    public int Arr[] ;
    
    public ArrayX(int iSize)
    {
        Arr = new int[iSize] ;
    }

    protected void finalize()
    {
        Arr = null ;
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
            System.out.println(Arr[iCnt]) ;
        }
    }
}

class Searching extends ArrayX
{
    public Searching(int iSize)
    {
        super(iSize) ;
    }

    public int LinearSearch(int iNo)
    {
        int i = 0 ;

        for(i = 0 ;i < Arr.length ;i++)
        {
            if(Arr[i] == iNo)
            {
                break ;
            }
        }
        if(i == Arr.length)
        {
            return -1 ;
        }
        else
        {
            return i ;
        }
    }
}

class program186
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array");
        int size = sobj.nextInt() ;

        Searching aobj = new Searching(size) ;
        aobj.Accept() ;
        aobj.Display() ;

        System.out.println("Enter the element you want to Search");

        int iValue = sobj.nextInt() ;
        int iRet = aobj.LinearSearch(iValue) ;

        if(iRet == -1)
        {
            System.out.println("There is NO such element");
        }
        else
        {
            System.out.println("Element is present at Index :"+iRet) ;
        }
    }
}