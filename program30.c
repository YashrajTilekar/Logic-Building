/*
Check Whether the Number is Prime or Not
*/
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////////
int CountFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iCnt2 = 0;
    
    for(iCnt = 2 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if( (iNo % iCnt) == 0 )
        {
            iCnt2++;
        }
    }

    return iCnt2;
}
//////////////////////////////////////////////////////////////////////////
bool CheckPrime(int iNo)
{
    int iAns = 0;

    iAns = CountFactor(iNo);

    if(iAns == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
///////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bret = false;
    int iret = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    bret = CheckPrime(iValue);
    iret = CountFactor(iValue);

    printf("%d has %d Factors\n",iValue,iret);

    if(bret == true)
    {
        printf("%d is a Prime Number",iValue);
    }
    else
    {
        printf("%d is NOT a Prime Number",iValue);
    }


    return 0;
}
///////////////////////////////////////////////////////////////////////////