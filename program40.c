/*
Accept no from user and check whether the no is Armstrong number is not
eg. 1634 = 1^4 + 6^4 + 3^4 + 4^4
    153 = 1^3 + 5^3 + 3^3
*/
#include<stdio.h>
#include<stdbool.h>

int DigitCounter(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

int Power(int iNo1 ,int iNo2)
{
    register int iCtr = 0;
    int iAns = 1;

    for(iCtr = 1 ;iCtr <= iNo2 ;iCtr++)
    {
        iAns = iAns * iNo1;
    }

    return iAns;
}

bool Armstrong(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDcount = DigitCounter(iNo);
    int iDigit = 0;
    int iMult = 1;
    int iAns = 0;
    int iTemp = 0;
    
    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = Power(iDigit,iDcount);

        iAns = iAns + iMult;
        iNo = iNo / 10;
    }

    iNo = iTemp;

    if(iAns == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

//    printf("%d",DigitCounter(iValue));

    bRet = Armstrong(iValue);
    if(bRet == true)
    {
        printf("The Number is an Armstrong Number\n");
    }
    else
    {
        printf("The Number is NOT an Armstrong Number\n");
    }


    return 0;
}