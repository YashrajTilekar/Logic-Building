//////////////////////////////////////////////////////////////////////////////////
/*
Accept Two Numbers From User,A and B and return A to the power B

Input : 2   4
Output : 2 * 2 * 2 * 2  i.e  16
*/
////////////////////////////////////////////////////////////////////////////////

#include"header39.h"

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto ULI iRet = 0;

    printf("Enter Base\n");
    scanf("%d",&iValue1);

    printf("Enter Power\n");
    scanf("%d",&iValue2);

    
    iRet = Power(iValue1,iValue2);

    printf("%d to the power %d is : %ld",iValue1,iValue2,iRet);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////