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

bool Armstrong(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDcount = DigitCounter(iNo);
    int iCnt = 0;
    int iDigit = 0;
    int iMult = 1;
    int iAns = 0;
    int iTemp = 0;
    
    iTemp = iNo;

    while(iNo != 0)
    {
        iMult = 1;
        iDigit = iNo % 10;

        for(iCnt = 1 ;iCnt <= iDcount ;iCnt++)
        {
            iMult = iMult * iDigit;
        }

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