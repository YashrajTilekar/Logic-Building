#include"header39.h"

ULI Power(int iNo1 ,int iNo2)
{
    register int iCtr = 0;
    ULI iAns = 1;

    for(iCtr = 1 ;iCtr <= iNo2 ;iCtr++)
    {
        iAns = iAns * iNo1;
    }

    return iAns;
}