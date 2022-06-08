/*
accept number from user and check whether the number is perfect number or not
perfect number = sum of factors is that number itself
*/

////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////////
int SumFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iAns = 0;
    
    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iAns = iAns + iCnt;
        }
        if(iAns > iNo)
        {
            break;
        }
    }

    return iAns;
}
///////////////////////////////////////////////////////////////////////////////
bool CheckPerfect(int iNo)
{ 
    int iSum = 0;
    iSum = SumFactors(iNo);
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bool bret = false;

    bret = CheckPerfect(iValue);

    if(bret == true)
    {
        printf("%d is a Perfect number\n",iValue);
    }
    else
    {
        printf("%d is  NOT a Perfect number\n",iValue);
    }

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////