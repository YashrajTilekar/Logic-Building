/*check whether number is divisible by 3 & 5
*/

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if( ( (iNo % 3) == 0) && 
        ( (iNo % 5) == 0) )
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
    int iValue=0;
    printf("Enter a Number\n");
    scanf("%d",&iValue);

    bool bRet=false;
    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 3 And 5\n",iValue);
    }
    else
    {
        printf("%d is NOT Divisible by 3 And 5\n",iValue);
    }
    
    return 0;
}