/*
Check Whether the Number is Prime or Not
*/
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////////
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 2 ;iCnt <= (iNo/2) ;iCnt++)
    {
        if( (iNo % iCnt) == 0 )
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}
///////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bret = false;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    bret = CheckPrime(iValue);

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