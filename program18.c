#include<stdio.h>

int Summation(int iN)
{
    if(iN<0)
    {
        iN=-iN;
    }

    int iCounter=0;
    iCounter=1;
    int iAns=0;

    for(iCounter=1 ;iCounter<=iN ;iCounter++)
    {
        iAns=iAns+iCounter;
    }

    return iAns;
}

int main()
{
    int iValue=0;
    printf("Enter Number\n");
    scanf("%d" ,&iValue);

    int iRet=0;
    iRet =Summation(iValue);
    printf("%d\n" ,iRet);

    return 0;
}