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

    for(iCnt = 2 ;iCnt <= (iNo/2) ;iCnt++)
    {
        if( (iNo % iCnt) == 0 )
        {
            break;
        }
    }
    if(iCnt == ((iNo/2)+1))
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

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    bret = CheckPrime(iValue);

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