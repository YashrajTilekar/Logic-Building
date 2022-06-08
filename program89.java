import java.lang.*;
import java.util.*;

class ArrayX
{
    private int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Values :");

        for(iCnt = 0;iCnt < Arr.length ;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of Array are :");

        for(iCnt = 0 ;iCnt < Arr.length ;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int Summation()
    {
        int iCnt = 0,iSum = 0;

        for(iCnt = 0 ;iCnt < Arr.length ;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }
}

class program89 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0 ,iRet = 0;

        System.out.println("Enter the Value for Constructor");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.Summation();
        System.out.println("Addition is :"+iRet);

        aobj = null;
    }
}
