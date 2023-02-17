#include <stdio.h>

int largestAltitude(int* gain, int gainSize)
{
    int iCurrentAltitude = 0 ,iMaxAltitide = 0;

    for(int iCnt = 0 ;iCnt < gainSize ;iCnt++)
    {
        iCurrentAltitude = iCurrentAltitude + gain[iCnt];
        
        if(iCurrentAltitude > iMaxAltitide)
        {
            iMaxAltitide = iCurrentAltitude;
        }
    }

    return iMaxAltitide;
}

int main()
{
    return 0;
}