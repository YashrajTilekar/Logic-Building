/*
Accept Number From User and Display Addition of its Factors
reference :https://www.cuemath.com/numbers/factors/

input: 10
output: 1 + 2 + 5

*/
//////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////

int SumFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iAns = 0;
    for(iCnt = 1;iCnt <= (iNo/2) ;iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iAns = iAns + iCnt;
        }
    }

    return iAns;
}

////////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = SumFactors(iValue);

    printf("Sum of Factors of %d is :%d" ,iValue,iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////