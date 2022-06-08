/*
Input: rows : 4     Columns :4
Output:

*   *   *   *
*   *   *
*   *
*

*/

#include<stdio.h>

void Display(int iRow ,int iColumn)
{
    int iCnt1 = 0 ,iCnt2 = 0;

    if(iRow != iColumn)
    {
        return;
    }

//   iCnt2 :Row        iCnt1 :Column
    for(iCnt2 = iRow ;iCnt2 >= 1 ;iCnt2--)
    {
    for(iCnt1 = 1; iCnt1 <= iCnt2 ; iCnt1++)
    {
        printf("*\t");
    }
    printf("\n");
    }   
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}

 