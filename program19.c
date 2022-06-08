//Display Table From 
/*
START
aceept no from user
check whether no is +ve or not


*/
#include<stdio.h>

void Table(int iN1)
{
    if(iN1<0)
    {
        iN1=-iN1;
    }

    int iCnt=0;
    int iAns=0;

    for(iCnt=1; iCnt<=10 ;iCnt++)
    {
        iAns=iN1*iCnt;
        printf("%dx%d=%d\n" ,iN1 ,iCnt ,iAns);
    }
}
int main()
{
    Table(2);
    return 0;
}