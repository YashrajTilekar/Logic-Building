//Searching AND Sorting
//Accept N Elements and Display them
//Linear Search
//BiDirectional Search

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

    public int BiDirectionalSearch(int iNo)
    {
        int iStart = 0 ;
        int iEnd = Arr.length-1 ;
        int iPos = -1 ;

        while(iStart <= iEnd)
        {
            if(Arr[iStart] == iNo)
            {
                iPos = iStart ;
                break ;
            }
            else if(Arr[iEnd] == iNo)
            {
                iPos = iEnd ;
                break ;
            }

            iStart++;
            iEnd--;
        }

        return iPos ;
    }

    public int BinarySearch(int iNo)
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        int iMiddle = 0;

        while(iStart <= iEnd)
        {
            iMiddle = (iStart + iEnd)/2;

            if(Arr[iMiddle] == iNo)
            {
                break;
            }
            if(iNo > Arr[iMiddle])
            {
                iStart = iMiddle+1;
            }
            else if(iNo < Arr[iMiddle])
            {
                iEnd = iMiddle - 1;
            }
        }

        if(Arr[iMiddle] == iNo)
        {
            return iMiddle;
        }
        else
        {
            return -1;
        }

    }
}

class program188
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
    
        iRet = aobj.BiDirectionalSearch(iValue) ;

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