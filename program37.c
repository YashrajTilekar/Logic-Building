//accept number and return Summation of  EVEN digits
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////
int SumEven(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if( (iDigit % 2) == 0 )
        {
            iSum = iSum + iDigit;
        }
        
        iNo = iNo/10;

        return iSum;
    }

}
////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = SumEven(iValue);
    printf("%d",iRet);
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////