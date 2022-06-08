/*
Input: rows : 4     Columns :4
Output:

a   b   c   d
a   b   c   d
a   b   c   d
a   b   c   d

*/

#include<stdio.h>

void Display(int iRow ,int iColumn)
{
    int iCnt1 = 0 ,iCnt2 = 0;
    char ch = '\0';

    for(iCnt2 = 1 ;iCnt2 <= iRow ;iCnt2++)
    {
    for(iCnt1 = 1,ch = 'a' ; iCnt1 <= iColumn ; iCnt1++,ch++)
    {
        printf("%c\t",ch);
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

 